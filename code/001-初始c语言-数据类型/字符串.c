#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	"hello world";
	//2.��ô֤���ַ��������ı�־��\0 --��arr��vs����
		//�ַ�����-������һ����ͬ�������͵�Ԫ��
	char arr[] = "hello";//��д��С�����ֵ�����ٴ�С
		//�ַ����ڽ�β��λ��������һ��\0���ַ�
		//\0���ַ��������ı�־��printf("%s",String)����ַ���
		//�ַ��������ɶ���ַ����
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%s\n",arr1);
	printf("%s\n",arr2);//��������Ϊû�н�����־������˲�֪��ʲô����
	char arr3[] = { 'a','b','c','\0'};
	printf("%s\n", arr3);
		//��strlen����
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));

	//3.���ַ����ĳ���(������־�����ڳ�������)
	int len = strlen("abc");//strlen()��������Ϊû������<string.h>
	printf("%d\n",len);
	return 0;

}