/*
 * BUTTON.h
 *
 * Created: 10/23/2023 5:15:41 PM
 *  Author: DELL
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void Button_vinit (unsigned char portname , unsigned char pinnumber);
unsigned char Button_u8read (unsigned char portname , unsigned char pinnumber);


#endif /* BUTTON_H_ */