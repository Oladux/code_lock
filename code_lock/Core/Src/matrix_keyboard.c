/*
 * matrix_keyboard.c
 *
 *  Created on: Oct 11, 2023
 *      Author: Stepan
 */

#include "matrix_keyboard.h"

static uint8_t input_buff[4]={0};

void out_pin_change(uint8_t pin){
	switch (pin) {
			case 0:
				HAL_GPIO_WritePin(OUT_PIN_0_PORT, OUT_PIN_0_NUM, GPIO_PIN_SET);
				HAL_GPIO_WritePin(OUT_PIN_1_PORT, OUT_PIN_1_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_2_PORT, OUT_PIN_2_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_3_PORT, OUT_PIN_3_NUM, GPIO_PIN_RESET);
				break;
			case 1:
				HAL_GPIO_WritePin(OUT_PIN_0_PORT, OUT_PIN_0_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_1_PORT, OUT_PIN_1_NUM, GPIO_PIN_SET);
				HAL_GPIO_WritePin(OUT_PIN_2_PORT, OUT_PIN_2_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_3_PORT, OUT_PIN_3_NUM, GPIO_PIN_RESET);
				break;
			case 2:
				HAL_GPIO_WritePin(OUT_PIN_0_PORT, OUT_PIN_0_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_1_PORT, OUT_PIN_1_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_2_PORT, OUT_PIN_2_NUM, GPIO_PIN_SET);
				HAL_GPIO_WritePin(OUT_PIN_3_PORT, OUT_PIN_3_NUM, GPIO_PIN_RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(OUT_PIN_0_PORT, OUT_PIN_0_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_1_PORT, OUT_PIN_1_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_2_PORT, OUT_PIN_2_NUM, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(OUT_PIN_3_PORT, OUT_PIN_3_NUM, GPIO_PIN_SET);
				break;
		}
}
uint8_t* input_scan(){
	input_buff[0]=HAL_GPIO_ReadPin(IN_PIN_0_PORT, IN_PIN_0_NUM);
	input_buff[1]=HAL_GPIO_ReadPin(IN_PIN_1_PORT, IN_PIN_1_NUM);
	input_buff[2]=HAL_GPIO_ReadPin(IN_PIN_2_PORT, IN_PIN_2_NUM);
	input_buff[3]=HAL_GPIO_ReadPin(IN_PIN_3_PORT, IN_PIN_3_NUM);
	return input_buff;
}












