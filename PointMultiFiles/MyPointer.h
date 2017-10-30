/*
 * MyPointer.h
 *
 *  Created on: 24. sep. 2017
 *      Author: Henrik
 */

#ifndef MYPOINTER_H_
#define MYPOINTER_H_
typedef struct
{
	int x;
	int y;
} point;


int timesTwo(int n);
void move(point *p);

#endif /* MYPOINTER_H_ */
