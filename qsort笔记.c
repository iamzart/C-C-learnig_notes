#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*qsort ��C�����е�һ���⺯��
������������������ݽ������򣬶������������Ͷ���������
�ײ�ʹ�õĿ�������
*/
//void qsort(void* base,//ָ�����������ĵ�һ��Ԫ�ص�ָ��
//	size_t num,//baseָ�������е�Ԫ�ظ���
//	size_t size,//baseָ��������һ��Ԫ�صĴ�С����λ���ֽ�
//	int(*cmp)(const void*, const void*)//����ָ�룬���ݺ����Ĵ�С
//);
/*�Ƚ��ַ�����Сʱ�����ò�������Ҫ��strcmp���� */

//����qsort ��������������
// //ʹ��qsort����Ҫ�ṩһ���Ƚ��������ĺ���
//void���Ͳ��ܽ�����
//*(int*)p1�� ��p1(void��)ǿ��ת��������ָ�룬�ٽ�����

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void test1()
//{
//	int arr[] = { 3,6,5,8,9,4,1,2,7,5,6,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int mian()
//{
//	test1();
//	return 0;
//}


//�ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20 };
//	printf("%s %d", s.name, s.age);
//	struct Stu* ps = &s;
//	printf("%s %d", (*ps).name, (*ps).age);
//	printf("%s %d", ps->name, ps->age);
//}
/*�ṹ���Ա���ʲ�����
.      �ṹ�����.��Ա��
->     �ṹ��ָ��->��Ա��
*/

//strcmp�ȽϵĲ����ַ����ĳ��ȣ����Ƕ�Ӧλ�����ַ��Ĵ�С
