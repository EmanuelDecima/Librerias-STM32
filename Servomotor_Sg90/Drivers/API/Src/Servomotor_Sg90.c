/*
 * Servomotor_Sg90.c
 *
 *  Created on: Aug 25, 2025
 *      Author: Decima Enrique Emanuel
 */


#include "ServomotorSg90.h"

// Inicializa el struct del servo
void Servo_Init(Servo_HandleTypeDef *servo, TIM_HandleTypeDef *htim, uint32_t channel, uint16_t min_us, uint16_t max_us){
    servo->htim = htim;
    servo->channel = channel;
    servo->min_us = min_us;
    servo->max_us = max_us;
}

// Permite cambiar el rango del servo en runtime
void Servo_SetRange(Servo_HandleTypeDef *servo, uint16_t min_us, uint16_t max_us){
    servo->min_us = min_us;
    servo->max_us = max_us;
}

// Convierte ángulo → CCR
void Servo_SetAngle(Servo_HandleTypeDef *servo, uint8_t angle) {
    if (angle > 180) angle = 180;

    // Determinar frecuencia de reloj del timer
    uint32_t clk;
    clk = HAL_RCC_GetPCLK1Freq(); //Revisar a que PCLK corresponde tu Timer

    // Tiempo por tick en microsegundos
    float tick_us = (float)(servo->htim->Init.Prescaler + 1) * 1e6f / (float)clk;

    // Tiempo de pulso deseado
    float t_us = servo->min_us + ((servo->max_us - servo->min_us) * angle) / 180.0f;

    // Conversión a ticks
    uint32_t ccr = (uint32_t)(t_us / tick_us);

    __HAL_TIM_SET_COMPARE(servo->htim, servo->channel, ccr);
}
