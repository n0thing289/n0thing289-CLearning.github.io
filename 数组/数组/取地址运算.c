#include <stdio.h>
void main7() {
	//char name[6];
	//printf("�����������������\n");
	//scanf_s("%s", &name,7);//  1. �����ʱ��ǵ�Ҫ���ǽ����ַ�\0

	//printf("%s\n", name);

	int a;
	scanf_s("%d", &a); // 2 �������& ����ʾ��Ҫһ�� int * ���͵�����,�����鲻��Ҫ&���ᱨ��
	printf("%d\n", a);

	printf("%p\n", &a); // 3 %p ��ӡ��ַ

	// 4 ��������������
}