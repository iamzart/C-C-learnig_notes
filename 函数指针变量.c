#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����е�ַ������Ҳ�е�ַ,�Ǻ����أ�
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    printf("%p\n", &Add);
//    //��������&���������Ǻ����ĵ�ַ��û������
//    int (*pf)(int, int) = &Add;//pf����ָ�������pfҪ��*���
//    /* ��ָ��ȥ���ú��� */
//    //�ȸ���������
//    int ret = (*pf)(4, 5);
//    printf("%d", ret);
//    return 0;
//}
//����ȥ���������������� int(*)(int,int)

/*��Ȥ�Ĵ���*/
//int main()
//{
//	(*(void(*)())0)();//����ָ�����ͣ�ǿ������ת����û�в�����������
//	//��˼����һ�κ������ã�����0���ĵ�ַ�ŵ��Ǹ�����
//	return 0;
//}
//int main()
//{
//	void (*signal(int, void(*)(int)) )(int);
//	return 0;
//

//typedef unsigned int unit;
//int main()
//{
//	unit num2;
//	return 0;
//}

/*������ָ�� int* p ������*/
//
//typededf int* pint_t;
//int main()
//{
//	pint_t p2;
//	return 0;
//}


//typededf int(*parr_t)[6]//���µ�����������*�Ա�
//int main()
//{
//	int arr[6] = { 0 };
//	int(*p)[6] = &arr;//p������ָ���������
//	int parr_t p2 = &arr;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//typededf int (*pa_t)(int, int);
//int main()
//{
//	int (*pa)(int, int) = Add;
//	return 0;
//}
//int (*pa)(int,int)�Ǻ���ָ�������
//int (*)(int,int)ȥ�������Ǻ���ָ������

/*����ָ������*/
//int main()
//{
//	int (*pf[4])(int, int) = { Add,Sum,Mul,Div };
//
//	for (int i = 0; i < 4; i++)
//	{
//		int ret = pf[i](6, 2);
//		printf("%d ", ret);
//}
//	return 0;
//}
////��ŵ��Ǻ���������

