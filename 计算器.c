#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*ʵ��һ��������*/
//��д���㺯������д����ָ�룬������ָ��ȥ���ú���

void menu()
{
	printf("***************************************************\n");
	printf("***********      1.add       2.sub      ***********\n");
	printf("***********      3.mul       4.div      ***********\n");
	printf("***********            0.exit           ***********\n");
	printf("***************************************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();//ֱ�����һ���˵�
		printf("��ѡ��  ");
			scanf("%d", &input);//input��Ҫѡ���ѡ����
		switch (input)
		{
		case 1:
			Calc(Add);//����calc��������calc������ߴ����˼Ӽ��˳���ͨ��ָ��ȥ���˸ú�������������ַ�����ڴ��� ����
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

			}
	} while (input);
	return 0;
	

	
}