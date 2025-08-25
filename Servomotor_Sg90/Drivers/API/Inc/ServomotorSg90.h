/*
 * ServomotorSg90.h
 *
 *  Created on: Aug 25, 2025
 *      Author: Decima Enrique Emanuel
 */

#ifndef API_INC_SERVOMOTORSG90_H_
#define API_INC_SERVOMOTORSG90_H_

#include "stm32f4xx_hal.h"

typedef struct {
    TIM_HandleTypeDef *htim;   // Timer Utilizado
    uint32_t channel;          // Canal
    uint16_t min_us;           // Ancho mínimo en us (normalmente 500ms o 1000ms)
    uint16_t max_us;           // Ancho máximo en us (normalmente 2000ms o 2500ms)
} Servo_HandleTypeDef;

void Servo_Init(Servo_HandleTypeDef *servo, TIM_HandleTypeDef *htim, uint32_t channel, uint16_t min_us, uint16_t max_us);
void Servo_SetRange(Servo_HandleTypeDef *servo, uint16_t min_us, uint16_t max_us);
void Servo_SetAngle(Servo_HandleTypeDef *servo, uint8_t angle);

#endif /* API_INC_SERVOMOTORSG90_H_ */
