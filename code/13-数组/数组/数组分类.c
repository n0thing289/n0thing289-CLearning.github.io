#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main3() {
	char str[5] = { 32,33,34,35,127 };
	unsigned char str2[5] = { -10,'A' };
	int a[5] = { 'A','B', 1.1f };//自动进行强制转换1.1f -> 1
	float b[5] = { 1.1f,1.2f,1.3f };

	char name1[] = "xiaoming";//字符串的本质 是 显式字符数组+'\0'。因为字符串本质上有一个隐藏的\0字符（占一个字符）
	char name2[] = { 'x','i','a','o','m','i','n','g','\0'};
	char name3[9] = { 'x','i','a','o','m','i','n','g','\0' };
	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", a[i]);
	//}
	printf("%s\n", name1);
	printf("%s\n", name2);
	printf("%s\n", name3);

	for (int i = 0; i < sizeof(name3) / sizeof(char); i++) {
		printf("%c\n", name3[i]);
	}

	printf("------\n%d\n", sizeof name1);
}