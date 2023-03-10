#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4() {
	/*int grades[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};*/

	// 先不声明多大的方式,但是行可以省，但是列不能省略
	// 和java一样，数组在创建是是有默认值的
	int grades[][3] = {
		{99,88,77},
		{11,22},// 因为创建了3列,所有这个一维数组第三个元素是0
		{78,67,12},
	};
	// 遍历c语言的二维数组
	for (int i = 0; i < sizeof(grades) / (sizeof(int)*3); i++) {
		printf("第%d行:", i);
		for (int j = 0; j < 3; j++) {
			printf("%d\t", grades[i][j]);
		}
		printf("\n");
	}
	//printf("%d\n", grades[1][2]);


	char str[] = "kerwin";// 字符串本质就是一系列的char
	char str2[][100] = {
		"anckajnckjnajkc",
		"cabcbabchjabc",
		"诸葛山镇",
		"kerwin",
	};
	for (int i = 0; i < sizeof(str2) / (sizeof(char) * 100);i++) {
		printf("%s\n", str2[i]);
	}
	return 1;
}