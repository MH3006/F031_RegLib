#ifndef CLOCK_H
#define CLOCK_H

/* FUNCTION PROTOTYPES ********************************************/

/* Enable clock sources */
void clock_enable_HSI(void); /* Enable internal oscillator */
void clock_enable_HSE(void); /* Enable external oscillator */

/* Enable peripheral clocks */
void clock_enable_power(void); /* Enable power clock */

#endif /* CLOCK_H */
