#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4() {
	/*int grades[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};*/

	// �Ȳ��������ķ�ʽ,�����п���ʡ�������в���ʡ��
	// ��javaһ���������ڴ���������Ĭ��ֵ��
	int grades[][3] = {
		{99,88,77},
		{11,22},// ��Ϊ������3��,�������һά���������Ԫ����0
		{78,67,12},
	};
	// ����c���ԵĶ�ά����
	for (int i = 0; i < sizeof(grades) / (sizeof(int)*3); i++) {
		printf("��%d��:", i);
		for (int j = 0; j < 3; j++) {
			printf("%d\t", grades[i][j]);
		}
		printf("\n");
	}
	//printf("%d\n", grades[1][2]);


	char str[] = "kerwin";// �ַ������ʾ���һϵ�е�char
	char str2[][100] = {
		"anckajnckjnajkc",
		"cabcbabchjabc",
		"���ɽ��",
		"kerwin",
	};
	for (int i = 0; i < sizeof(str2) / (sizeof(char) * 100);i++) {
		printf("%s\n", str2[i]);
	}
	return 1;
}