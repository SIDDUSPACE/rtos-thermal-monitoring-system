#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void comm_task(void *pvParameters)
{
    while (1)
    {
        printf("Comm Task Running\n");
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}