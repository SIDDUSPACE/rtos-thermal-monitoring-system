#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "common.h"

// Queue handle
QueueHandle_t sensor_queue;

// Semaphore handle
SemaphoreHandle_t event_semaphore;

// Task declarations
void sensor_task(void *pvParameters);
void control_task(void *pvParameters);
void comm_task(void *pvParameters);
void event_task(void *pvParameters);

void app_main()
{
    // Create queue
    sensor_queue = xQueueCreate(5, sizeof(sensor_data_t));

    if (sensor_queue == NULL)
    {
        printf("Queue creation failed\n");
        return;
    }

    // Create semaphore
    event_semaphore = xSemaphoreCreateBinary();

    if (event_semaphore == NULL)
    {
        printf("Semaphore creation failed\n");
        return;
    }

    // Create tasks
    xTaskCreate(sensor_task, "Sensor Task", 2048, NULL, 2, NULL);
    xTaskCreate(control_task, "Control Task", 2048, NULL, 2, NULL);
    xTaskCreate(comm_task, "Comm Task", 2048, NULL, 1, NULL);
    xTaskCreate(event_task, "Event Task", 2048, NULL, 3, NULL);
}