#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "MyPointer.h"

/*
typedef struct
{
	int x;
	int y;
} point;
*/
//void move(point *p);

/*
void move(point *p)
{
	(*p).x++;
	(*p).y++;
}
*/
/* This is a comment. */
//int timesTwo(int n);

//}
int main(int argc, char *argv[])
{
int n=3;
int m;
	//float z;
	point p;
	p.x = 1;
	p.y = 2;

	//z = sqrt(16);

//	printf("Henrik %d  %f\n", p.x, z);
	move(&p);
	m=timesTwo(n);
	printf("Henrik %d %d \n", m,p.x);

	//return EXIT_SUCCESS;

	return 0;
}
