#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//void main() {
//	int data[] = { 9,18,38,2,46,8,43,46,5,12 };
//
//	int index = 0;
//
//	/*for (int i = 0; i < 9; i++) {
//		if (data[i] < data[index]) {
//			index = i;
//		}
//	}
//
//	int temp = data[0];
//	data[0] = data[index];
//	data[index] = temp;*/
//
//	
//
//
//	for (int i = 0; i < 9; i++) {
//		int index = i;//
//		for (int j = i; j < 9; j++) {
//			if (data[j + 1] < data[index]) {
//				index = j + 1;
//			}
//		}
//
//		if (i == index) {
//			continue;
//		}
//		int temp = data[i];
//		data[i] = data[index];
//		data[index] = temp;
//	}
//
//	for (int i = 0; i < 9; i++) {
//		printf("%d\n", data[i]);
//	}
//}