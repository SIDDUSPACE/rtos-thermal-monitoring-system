#ifndef COMMON_H
#define COMMON_H

#include "freertos/queue.h"
#include "freertos/semphr.h"

typedef struct {
    float temperature;
    float humidity;
} sensor_data_t;

extern QueueHandle_t sensor_queue;
extern SemaphoreHandle_t event_semaphore;

#endif