#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	
//	printf("helloworld\n");
//	//===============================================================
//	
//	printf("%d\n", 100);//不用%d，打印的实际上是char形
//	//sizeof - 关键字 - 操作符，返回一个整形数值（单位是字节）
//	printf("%zd\n", sizeof(char));//1
//	printf("%zd\n", sizeof(short));//2
//	printf("%zd\n", sizeof(int));//4
//	printf("%zd\n", sizeof(long));//4
//	printf("%zd\n", sizeof(long long));//8
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(double));//8
//	//===============================================================
//	
//	//定义和使用变量
//	int age = 10;
//	float weight = 23.3f;//浮点型常量要加f，如果不加f会有“从double到float”
//	printf("%f", weight);//只要打印输出double类型数据，必须用%lf
//	//================================================================
//	
//	//scanf获取用户输入(vs会报错的)
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);//输入的顺序要和表达式一样，然后分别给a b
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}
double test_var = 1.1;



//main()函数是c源程序的入口
//#include <stdio.h> 是c语言的导包语法，由于printf()是库函数里面，非自带，因此要导入这个包包(引用头文件)
//return 0;  是为了保证语法完整，这个和java的有点类似，java的方法（函数）如果你有返回值也要声明数据类型
//vs2019 编译+运行快捷键  ctrl+f5

