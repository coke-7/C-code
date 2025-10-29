#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{//------------------ 1+2+3+..+99+100的和
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{//--------------------求a,b,c中的最大数
	int a = 0;
	int b = 0;
	int c = 0;
	printf("输入三个数字a,b,c：");
	scanf("%d,%d,%d", &a, &b, &c);
	//if (a > b)
	//{
	//	if (a > c)
	//		printf("最大数是：%d\n", a);
	//	else
	//		printf("最大数是：%d\n", c);
	//}
	//else
	//{
	//	if (b > c)
	//		printf("最大数是：%d\n", b);
	//	else
	//		printf("最大数是：%d\n", c);
	//}
            //---------解法二  
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("最大数是：%d\n", max);


	return 0;
}