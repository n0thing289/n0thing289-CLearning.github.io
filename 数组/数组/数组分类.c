#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char str[5] = { 1,2,3,4,127 };
	unsigned char str2[5] = { -100,'A' };
	int a[5] = { 'A','B', 1.1f };
	float b[5] = { 1.1f,1.2f,1.3f };

	char name1[] = "xiaoming";//�ַ����ı��� �� ��ʽ�ַ�����+'\0'����Ϊ�ַ�����������һ�����ص�\0�ַ���ռһ���ַ���
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
}