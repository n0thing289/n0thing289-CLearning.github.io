#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX 20000
//int main() {
//	//1。字面常量
//	3.14;
//	10;
//	'a';
//	"abdc";
//
//	//2. const修饰的常变量
//	const int num = 10;//num就是常属性-具有常属性（不能被改变的属性），本质还是变量
//	//num = 10;//左值指定const对象
//	printf("num=%d\n", num);
//
//		//怎么证明常变量不是常量
//	/*const int n = 10;
//	int arr[n] = { 0 };*/
//	//以上可知就算你加了const，编译器还是告诉你要常量值，所以常变量不是常量
//
//	//3.#define定义的常量({}内外都可以定义)
//	int n = MAX;
//	printf("n=%d\n",n);
//	
//	//4.枚举常量
//	enum Sex {MALE=3,FEMALE,SECRET};
//	enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}