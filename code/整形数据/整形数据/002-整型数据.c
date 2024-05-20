#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1 = 1000;
	short s1 = 32769;
	long l1 = 100000L;
	printf("%d\n", sizeof(i1));
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(l1));


	unsigned int ui1 = 4294967296;//多了1数据溢出从最小开始了
	printf("%u\n", ui1);

	int a1 = 0b1;
	int a2 = 0123;
	int a3 = 0x12e;

	//原本是八，十六进制，这里就会输出成八，十六进制
	printf("%o\n",a2);
	printf("%x\n", a3);

	//变量是八，十六，这里会输出成10进制
	printf("%d\n", a2);
	printf("%d\n", a3);

	//c语言没有专门输出二进制的，因此涉及一道考题，给你10进制怎么转成二进制

	return 0;
}

