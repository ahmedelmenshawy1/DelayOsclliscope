/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */

#include "Types.h"
#include "DIO_Private.h"
#include "delay.h"

int main(void)
{
	while(1)
	{
		PORTA=0xff;
		Delay_ms_Max1s(1);
		PORTA=0x00;
		Delay_ms_Max1s(1);
	}
	return 0;
}
