#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*ð������*/
//˼�룺�������ڵ�Ԫ��ȥ�Ƚϣ�������˳��ͽ��������������һ��
//���һ��sz - 1�ˣ���Ϊ���һ�����Զ����������ö���
// 
void input(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);//bingo
	}
}
void bubble_sort(int* arr, int sz)//����������Ҫд����!!!
{
	for (int i = 0; i < sz - 1; i++)//ȷ������
	{
		int flag = 1;//�����Ѿ�����˳��
		//�ڲ��ıȽϣ�����֮��[j]vs[j+1]
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])//Ĭ��ǰ�߱Ⱥ��С�����򣩣����������ͽ���
			{
				flag = 0;//����������
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)//��û����������0��Ҳ����û�г��ֲ�����˳������
			break;//��������i��ѭ��
		//�����һ����һ����û�н�������������֮�䶼û������֤���Ѿ�������
	}
}
void print_arr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", *(arr + i));
}
int main()
{
	//дһ�����뺯��
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	input(arr, sz);
	//���� - дһ������������������ �ų�����
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}