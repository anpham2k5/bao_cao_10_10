#ifndef SYSTEM_CLOCK_HSI_H
#define SYSTEM_CLOCK_HSI_H

#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

void SystemClock_Config(void);

#ifdef __cplusplus
}
#endif

void printSystemClockInfo(Stream &port);

#endif 