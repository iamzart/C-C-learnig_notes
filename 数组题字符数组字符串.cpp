#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
//
///*矩阵交换行*/int main()
//{
//	int m, n;
//	int arr[5][5];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cin >> m >> n;
//	int* pm = arr[m-1];
//	int* pn = arr[n-1];//数组名是首元素的地址，所以现在他俩是第m行的第一个元素的地址
//	for (int i = 0; i < 5; i++)
//	{
//		int tmp = *pm;
//		*pm = *pn;
//		*pn = tmp;
//		pm++;
//		pn++;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//		}cout << endl;
//	}
//	return 0;
//}
//哪会又越界了，第几行和下标差着呢




/*矩阵加法*/

//感觉这次长记性了，可以输入一个，第二个来一个输出一个不用保存

//const int N = 110;
//int main()
//{
//	int n = 0, m = 0;
//	int sum = 0;
//	int arr1[N][N], arr2[N][N];
//	cin >> n >> m;   
//	//输入第一个数组保存
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr1[i][j];
//		} 
//	}
//	//输入第二个，边输入边保存
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr2[i][j];
//			sum += (arr1[i][j] + arr2[i][j]);
//			cout << sum<< " ";
//			sum = 0;
//		}cout << endl;
//	}
//	return 0;
//}


/*矩阵转置*/
//const int N = 110;
//int main()
//{
//	int arr[N][N];
//	int n = 0, m = 0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[j][i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}



/*矩阵边缘之和*/
//所谓边缘就是任意一个下标为0，n-1，m-1

//const int N = 110;
//int main()
//{
//	int n = 0, m = 0;
//	int sum = 0;
//	int arr[N][N];
//	cin >> m >> n;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
//				sum += arr[i][j];
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}


/*自动修正*/

//int main()
//{
//	char arr[100] = { 0 };
//	int i = 0;
//	cin >> arr;
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = toupper(arr[i]);
//	}
//	for (int i = 0; i < 100; i++)
//		cout << arr[i];
//	return 0;
//}


/*基因相关性*/

//const int N = 510;
//int main()
//{
//	double value;
//	int len;
//	int i = 0, count = 0;
//	cin >> value;
//	char arr_dna1[N];
//	char arr_dna2[N];
//	cin >> arr_dna1;
//	cin >> arr_dna2;
//	len = strlen(arr_dna1);
//	for (int i = 0; i < len; i++)
//	{
//		if (arr_dna1[i] == arr_dna2[i])
//			count++;
//	}
//	if (count * 1.0 / len > value)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//
//
//	return 0;
//}
//



/*输入亲朋字符*/
//int main()
//{
//	char arr[100];
//	cin >> arr;
//	int len = strlen(arr);
//	char ch = arr[0]; //需要把第一个保存一下  
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = arr[i] + arr[i + 1]; //i = len-1 的时候 i +1就访问的不是 输入的数了   你的这里把第一个字符都改了 
//		if (i == (len - 1)) //这里的判断是没有用的
//			arr[i] = ch + arr[i];
//	}
//	cout << arr;
//	return 0;
//}



//int main()
//{
//	char arr1[20];
//	char arr2[20];
//	cin >> arr1;
//	cin >> arr2;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	//当子与母有一个重合了，子++母++重合的话急需，当遇到\0，跳出循环，
//	for (int i = 0; i < len1; i++)
//	{//外层是小的，主题是子的每个字母找大
//		for (int j = 0; j < len2; j++)
//		{//内层是大的，小派出一个字母和大每个人比较
//			while (arr1[i] == arr2[j])
//			{
//				i++;
//				j++;
//				if (arr1[i] == '\0')
//				{
//					cout << "arr1 is substring of arr2" << endl;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}




/*找第一个只出现一次的字符*/
//const int N = 1110;
//int main()
//{
//	char arr1[N] = { 0 };
//	char arr2[N] = { 0 };
//	int c = 0;
//	cin >> arr1;
//	int len = strlen(arr1);
//	memcpy(arr2, arr1, len);
//	for (int i = 0; i < len; i++)
//	{
//		c = 0;
//		for (int j = 0; j < len; j++)
//		{
//			if (arr1[i] == arr2[j])
//				c++;
//		}
//		if (c == 1)
//		{
//			cout << arr1[i];
//			break;
//		}
//		
//	}
//	if (c > 1)
//		cout << "no";
//	
//	return 0;
//}



int main()
{
	string s;
	cin >> s;
	int sz = s.size();
	for (int i = 0; i < sz; i++)
	{
		cout << s[i];
	}
	return 0;
}