#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//1. &&--逻辑与，||--逻辑或，和java叫法不一样，c虽然叫逻辑与，但是有短路用法
	printf("%d\n", 1>2 && 3 < 4);
	
	printf("%d\n", !(1>2));

	int price = 250;
	int type = 1;//0代表食品 1代表家电 2代表衣服
	int day = 7;
	if (price >= 250 && type == 1  && (day == 6 || day == 7)) {
		price *= 0.7;
		
		printf("已打折至%d\n", price);
	}
	int gender = 0;
	gender == 0 && printf("gender==0");
	return 0;
}