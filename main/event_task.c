#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "common.h"

void event_task(void *pvParameters)
{
    while (1)
    {
        vTaskDelay(pdMS_TO_TICKS(5000));

        printf("Event: Simulated Interrupt Triggered\n");

        xSemaphoreGive(event_semaphore);
    }
}