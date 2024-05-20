#include <stdio.h>
void main7() {
	//char name[6];
	//printf("大侠，留下你的姓名\n");
	//scanf_s("%s", &name,7);//  1. 输入的时候记得要考虑结束字符\0

	//printf("%s\n", name);

	int a;
	scanf_s("%d", &a); // 2 如果不加& 会提示需要一个 int * 类型的数据,而数组不需要&不会报错
	printf("%d\n", a);

	printf("%p\n", &a); // 3 %p 打印地址

	// 4 数组是引用类型
}