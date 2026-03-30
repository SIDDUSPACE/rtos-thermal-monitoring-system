#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "common.h"

void sensor_task(void *pvParameters)
{
    sensor_data_t data;

    while (1)
    {
        // Simulated DHT11 values
        data.temperature = 25 + (rand() % 10);   // 25 to 34 C
        data.humidity = 50 + (rand() % 30);      // 50 to 79 %

        printf("Sensor: Temp = %.2f C | Humidity = %.2f %%\n",
               data.temperature,
               data.humidity);

        // Send data to queue
        xQueueSend(sensor_queue, &data, portMAX_DELAY);

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}