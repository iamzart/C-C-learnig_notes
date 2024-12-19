#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*实现一个计算器*/
//先写运算函数，再写函数指针，用来用指针去调用函数

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
		menu();//直接输出一个菜单
		printf("请选择：  ");
			scanf("%d", &input);//input是要选择的选项数
		switch (input)
		{
		case 1:
			Calc(Add);//先用calc函数，从calc函数里边传入了加减乘除，通过指针去到了该函数名（函数地址），在传参 运算
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
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

			}
	} while (input);
	return 0;
	

	
}