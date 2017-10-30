/*
 * MyPointer.c
 *
 *  Created on: 24. sep. 2017
 *      Author: Henrik
 */

#include "MyPointer.h"

int timesTwo(int n){
		return n*2;
}

void move(point *p)
{
	(*p).x++;
	(*p).y++;
}
