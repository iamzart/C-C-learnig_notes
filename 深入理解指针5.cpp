#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* sizeof ��strlen �ĶԱ� */
//sizeof�ǲ����������������ռ�ڴ�ռ�Ĵ�С����λ���ֽڣ�ֻ��ע�ڴ��С�����ں���ʲô����
//strlen��c������Ŀ⺯�������ַ������ȣ�ֻ����ַ������ַ����飩
//ͳ�Ƶ����ַ�����\0֮ǰ���ַ�����

/* �����ָ���������� */
//��������������Ԫ�صĵ�ַ
//���⣺1.sizeof������ 2.&������

//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%zd", sizeof(a));//��������������sizeof,a��ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%zd", sizeof(a+0));//a����������ʾ��Ԫ�صĴ�С
//	printf("%zd", sizeof(*a));//�����������������⣬��Ȼ����Ԫ�صĵ�ַ��a[0]
//	printf("%zd", sizeof(a + 1));//ͬ�ϣ�a[1]�ĵ�ַ
//	printf("%zd", sizeof(&a));//ȡ��������������ĵ�ַ
//	printf("%zd", sizeof(*&a));//1. �����*��&������ 
//	                           //2. &a������ĵ�ַ�������ǣ�int(*)[4],������ָ������ã����ʵ����������
//	printf("%zd", sizeof(&a+1));//&a������ĵ�ַ������������������Ǹ�λ�õĵ�ַ���ǵ�ַ������4/8���ֽ�
//	printf("%zd", sizeof(&a[0]+1));//�ڶ���Ԫ�صĵ�ַ
//	return 0;
//}



/* �ַ����� */
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zd\n", strlen(arr));//���ֵ
//	printf("%zd\n", strlen(arr + 0));//���ֵ
//	printf("%zd\n", strlen(*arr));
//	//*arr����Ԫ��--'a'-97,����strlen��strlen����Ϊ97���ǵ�ַ��Ȼ��ȥ�����ڴ棬��������
//	printf("%zd\n", strlen(arr[1]));//ͬ��
//	printf("%zd\n", strlen(&arr));//���ֵ
//	printf("%zd\n", strlen(&arr + 1));//���ֵ
//	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ
//
//	return 0;
//}
//ֻҪ�ǵ�ַ����С����4/8
//����ĵ�ַ��������Ԫ�صĵ�ַ��ָ��ͬһλ�õģ�strlenҲ�Ǵӵ�һ��Ԫ�ؿ�ʼ�����ʵ�

//ָ������Ĵ�С��4/8���ǵ�ַ

#include<string.h>
int main()
{
	const char* p = "abcdef";
	return 0;
}