#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "common.h"

void control_task(void *pvParameters)
{
    sensor_data_t received_data;

    while (1)
    {
        // Receive from queue
        if (xQueueReceive(sensor_queue, &received_data, portMAX_DELAY))
        {
            printf("Control: Temp = %.2f C | Humidity = %.2f %%\n",
                   received_data.temperature,
                   received_data.humidity);

            // Temperature threshold
            if (received_data.temperature > 30)
            {
                printf("ALERT: HIGH TEMP -> Cooling Action\n");
            }
            else
            {
                printf("Status: NORMAL TEMPERATURE\n");
            }

            // Humidity threshold
            if (received_data.humidity > 70)
            {
                printf("ALERT: HIGH HUMIDITY\n");
            }
            else
            {
                printf("Status: NORMAL HUMIDITY\n");
            }
        }

        // Check semaphore event
        if (xSemaphoreTake(event_semaphore, 0))
        {
            printf("Control: Event Trigger -> Emergency Check\n");
        }
    }
}