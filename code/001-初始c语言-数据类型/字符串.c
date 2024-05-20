#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	"hello world";
	//2.怎么证明字符串结束的标志是\0 --对arr用vs监视
		//字符数组-数组是一组相同数据类型的元素
	char arr[] = "hello";//不写大小会根据值来开辟大小
		//字符串在结尾的位置隐藏了一个\0的字符
		//\0是字符串结束的标志，printf("%s",String)输出字符串
		//字符串内容由多个字符组成
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%s\n",arr1);
	printf("%s\n",arr2);//乱码是因为没有结束标志，输出了不知道什么东西
	char arr3[] = { 'a','b','c','\0'};
	printf("%s\n", arr3);
		//用strlen（）
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));

	//3.求字符串的长度(结束标志不算在长度里面)
	int len = strlen("abc");//strlen()警告是因为没有引入<string.h>
	printf("%d\n",len);
	return 0;

}