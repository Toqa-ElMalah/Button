#include "DIO.h"

void Button_vInit (unsigned char portname , unsigned char pinnumber){
	DIO_vsetPINDir(portname,pinnumber,0);
}

unsigned char Button_u8Read (unsigned char portname , unsigned char pinnumber){
	
	unsigned char x;
	x = DIO_u8read(portname,pinnumber);
	return x;
}
