//#define _CRT_SECURE_NO_WARNINGS 1
////二分查找
//#include <stdio.h>
//int Bin_search(int arr[], int key, int sz)
//{
//	int mid = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else return mid;
//	}
//	   return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int key = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Bin_search(arr, key, sz);
//	if (ret != 0)
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	else printf("没找到\n");
//	return 0;
//}
//交换两个值
//#include <stdio.h>
//void swap(int* p1, int* p2)
//{
//	int * tmp = 1;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int m = 5;
//	int n = 7;
//	int tmp = 0;
//	swap(&m, &n);
//	/*tmp = m;
//	m = n;
//	n = tmp;*/
//	printf("%d %d", m, n);
//	return 0;
//}
//判断素数
//#include <stdio.h>
//int is_pre(int n)
//{
//	int j = 0;
//	for (j = 2;j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	
//	for (n = 100; n < 200; n++)
//	{
//		if (is_pre(n)==1)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i=0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}
//#include <stdio.h>
//void Bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz -i- 1; j++)
//		{
//			int tmp = 0;
//
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,4,6,9,0,1,7,5,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 7;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("%d %d", a, b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = -1;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (1 & (num >>i))
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;
//	/*int c = a--;*/
//	printf("%d ", b);
//	printf("%d ", a);
//
//}
//int main()
//{
//	int a = 10;
//		return 0;
//}
//#include <stdio.h>
//演示实例
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ", &arr[i]);
//		printf("%p ", (p+i));
//	}
//	return 0;
//}
//#include <stdio.h>
//int check()
//{
//	int i = 1;
//	return  *(char*)(&i);
//}
//int main()
//{
//	int ret = 0;
//	 ret = check();
//	if (ret == 1)
//	{
//		printf("小端模式");
//	}
//	else
//		printf("大端模式");
//
//
//}
