#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1 = 1000;
	short s1 = 32769;
	long l1 = 100000L;
	printf("%d\n", sizeof(i1));
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(l1));


	unsigned int ui1 = 4294967296;//����1�����������С��ʼ��
	printf("%u\n", ui1);

	int a1 = 0b1;
	int a2 = 0123;
	int a3 = 0x12e;

	//ԭ���ǰˣ�ʮ�����ƣ�����ͻ�����ɰˣ�ʮ������
	printf("%o\n",a2);
	printf("%x\n", a3);

	//�����ǰˣ�ʮ��������������10����
	printf("%d\n", a2);
	printf("%d\n", a3);

	//c����û��ר����������Ƶģ�����漰һ�����⣬����10������ôת�ɶ�����

	return 0;
}

