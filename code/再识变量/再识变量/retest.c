#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void f1();
// ��������������λ������ģ���������ɾֲ�����ȫ�ֱ�����������
extern void test100();
void main() {
	extern int i1;
	printf("%p\n", &i1);
	//f1();

	test100();


	
	for (int i = 1; i <= 3; i++) {
		static int i3 = 0;
		i3 += i;
		printf("%d\n", i3);
	}
	
}

//void f1() {
//	printf("%p\n", &i1);
//}