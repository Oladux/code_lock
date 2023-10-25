/*
 * matrix_keyboard.h
 *
 *  Created on: Oct 11, 2023
 *      Author: Stepan
 */

#ifndef INC_MATRIX_KEYBOARD_H_
#define INC_MATRIX_KEYBOARD_H_

#include "main.h"

#define OUTPUT_STATE	0
#define INPUT_STATE		1

#define PASSWORD_UNSET  0
#define PASSWORD_SET    1

#define PASSWORD_UNPASSED	0
#define PASSWORD_PASSED		1

#define ACCESS_DENIED	0
#define	ACCESS_GRANTED 	1

#define ENTER_COMMAND   15
#define DELETE_COMMAND   14

#define OUT_PIN_0_PORT GPIOB
#define OUT_PIN_0_NUM  GPIO_PIN_10
#define OUT_PIN_1_PORT GPIOB
#define OUT_PIN_1_NUM  GPIO_PIN_4
#define OUT_PIN_2_PORT GPIOA
#define OUT_PIN_2_NUM  GPIO_PIN_8
#define OUT_PIN_3_PORT GPIOA
#define OUT_PIN_3_NUM  GPIO_PIN_9

#define IN_PIN_0_PORT  GPIOA
#define IN_PIN_0_NUM   GPIO_PIN_1
#define IN_PIN_1_PORT  GPIOA
#define IN_PIN_1_NUM   GPIO_PIN_0
#define IN_PIN_2_PORT  GPIOA
#define IN_PIN_2_NUM   GPIO_PIN_10
#define IN_PIN_3_PORT  GPIOB
#define IN_PIN_3_NUM   GPIO_PIN_5


#endif /* INC_MATRIX_KEYBOARD_H_ */
