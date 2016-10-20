/*
 * vrs_cv5.h
 *
 *  Created on: Oct 20, 2016
 *      Author: Andrej
 */

#ifndef VRS_CV5_H_
#define VRS_CV5_H_
void init_adc(void);
void init_NVIC(void);
void ADC1_IRQHandler(void);
void init_USART2(void);
void PutUCHART2(char);
void putC(char []);
void RegisterCallbackUART2(void *callback);
void USART2_IRQHandler(void);
double konverzia();
void check();

#endif /* VRS_CV5_H_ */
