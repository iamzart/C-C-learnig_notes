#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int gewei, shiwei, baiwei;
	for (int i = 100; i <= 999; i++)
	{
		n = i;//°Ñi¸³¸øn
		gewei = n % 10;
		n /= 10;
		shiwei = n % 10;
		n /= 10;
		baiwei = n % 10;
		if (pow(gewei, 3) + pow(shiwei, 3) + pow(baiwei, 3) == i)
		printf("%d ", i);
	}
	return 0;
}