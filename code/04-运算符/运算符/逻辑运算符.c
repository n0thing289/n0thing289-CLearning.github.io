#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//1. &&--�߼��룬||--�߼��򣬺�java�з���һ����c��Ȼ���߼��룬�����ж�·�÷�
	printf("%d\n", 1>2 && 3 < 4);
	
	printf("%d\n", !(1>2));

	int price = 250;
	int type = 1;//0����ʳƷ 1����ҵ� 2�����·�
	int day = 7;
	if (price >= 250 && type == 1  && (day == 6 || day == 7)) {
		price *= 0.7;
		
		printf("�Ѵ�����%d\n", price);
	}
	int gender = 0;
	gender == 0 && printf("gender==0");
	return 0;
}