#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "м╥нд╪Ч.h"
//extern int i2;
double d1 = 1.1;
extern  void f2();
int main() {
	int i3 = 300;
	printf("%d", i3);
	static int i4 = 400;
	f2();
	printf("%d", ++i4);
	return 0;
}