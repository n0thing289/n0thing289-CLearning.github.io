#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include"��������.h"

//�����﷨--"�ؼ��� ������();"
// 1. ���ⲿ�������˺������ڱ�������extern �����Ǹ�����extern void _print();
// 2. ��ͷ�ļ����庯�����ڱ�������#include"headfile.h"
// 3. �ڱ��ļ����庯������main()֮ǰ�������߶����
//void _print();
//void _print();
extern bool isBool();
int main(){

	_print();
	isBool();
	return 0;
}


//void _print() {
//	printf("_print����������");
//}