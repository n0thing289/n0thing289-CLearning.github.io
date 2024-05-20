#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main5() {
	int data[] = { 5,4,3,2,1 };
	//54321  // 4
	//43215  // 3
	//32145  // 2
	//21345  // 1
	//12345
	for (int i = 0; i < (sizeof(data) / sizeof(int)) -1 ; i++) {
		for (int j = 0; j < (sizeof(data) / sizeof(int)) - 1 - i; j++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
		printf("%d\n", data[i]);
	}
	 
}