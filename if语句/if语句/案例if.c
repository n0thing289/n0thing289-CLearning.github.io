#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 90;
	scanf("%d", &input);//不检查边界
	if (input % 2 == 0) {//1。有另一种写法
		printf("%d是偶数", input);
	}
	else {
		printf("%d是奇数", input);
	}

	////////////////////////////////////
	int score;
	printf("案例2-请输入成绩：");
	scanf("%d", &score);
	if (score >= 90 && score <= 100) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 70) {
		printf("D");
	}
	else {
		printf("E");
	}

	/////////////////////////////////////
	int year;
	printf("案例3-判断闰年-输入一个年份：");
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("闰年");
	}
	else {
		printf("不是闰年");
	}
}