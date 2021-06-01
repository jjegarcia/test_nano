/* 
 * File:   main.h
 * Author: jgarc609
 *
 * Created on May 29, 2021, 7:02 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

union {
    unsigned char byte;

    struct {
        unsigned SPI_READ : 1;
        unsigned DISPLAY_READING : 1;
        unsigned PUSH_HANDLER : 1;
        unsigned UART_RECEIVED: 1;
        unsigned TIMER_TICK: 1;
    } bits;
} FLAGS;

char serialReadValue;
char spiReadValue;
char requestType;