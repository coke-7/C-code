#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{//------------------ 1+2+3+..+99+100�ĺ�
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
{//--------------------��a,b,c�е������
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������������a,b,c��");
	scanf("%d,%d,%d", &a, &b, &c);
	//if (a > b)
	//{
	//	if (a > c)
	//		printf("������ǣ�%d\n", a);
	//	else
	//		printf("������ǣ�%d\n", c);
	//}
	//else
	//{
	//	if (b > c)
	//		printf("������ǣ�%d\n", b);
	//	else
	//		printf("������ǣ�%d\n", c);
	//}
            //---------�ⷨ��  
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("������ǣ�%d\n", max);


	return 0;
}