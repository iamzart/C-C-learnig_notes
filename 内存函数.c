#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* �ڴ溯�� */

//����ڴ���������

//memcpy -- �ڴ濽��
//memmove -- �ڴ��ƶ�
//memset -- �ڴ�����
//memcmp -- �ڴ�Ƚ�

/* memcpy��ʹ�ú�ģ��ʵ�� */
//void* memcpy(void* destination, const void* source,  size_t num);
//               Ŀ��ռ�ĵ�ַ    Դ�ռ�ĵ�ַ      ���������ֽڸ���
//Ŀ��ռ���޸ģ��㹻��
//��������������void
//���ص���Ŀ��ռ����ʼ��ַ
//int main()
//{
//	char arr1[] = { 1,2,3,4,5,6,7 };
//	//����1��2��3��4��arr2��
//	char arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	return 0;
//}
//�����������\0������ͣ����

//����д����(char*)dest++,��Ϊǿ������ת������ʱ�ģ�������ʹ�ú�Ӽӣ�������ʱ���Ѿ�����char*��
//�������ص����ڴ棬��Ҫʹ�ã����δ����
//�漰���ص�����memmove

#include<assert.h>
#include<string.h>


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	//��������ָ�룬��Դ�����ø�����һ��
//	assert(src && dest);
//	void* ret = dest;
//	//��ΪҪһ���ֽ�һ���ֽ�ȥ������ǿ��ת����char*
//	while (num--)//�����ټ���16-1 ��ʮ����
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	//����1��2��3��4��arr2��
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}


/*memmove��ģ��ʵ��*/


//void* my_memmove(void* dest, const void* src,size_t num)
//{
//	assert(dest && src);
//	//��Ҫ�ǰ�src��Ԫ�ظ���dest
//	void* ret = dest;
//	if(dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;//�ȸ�������
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)dest + num);
//			//��һ�Σ�numʹ�ú����ʱ19��dest��Ԫ�صĵ�ַ������ƶ�19���ֽھ������һ��
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1 = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = {0};
//	my_memmove(arr2, arr1 + 1, 24);//��2��3��4��5��6��7������arr2��
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}


/*memset ������ʹ��*/

//void* memset(void* ptr,int value,size_t num)
//ptr-Ҫ������ָ��
//Ҫ���õ�ֵ
//Ҫ���õ��ֽ�



/*memcmp ������ʹ��*/

//void* memcmp(const void* ptr1,const void* ptr2,size_t num)