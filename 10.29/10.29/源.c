#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{//--------------依次输入10个数字，输出其中最大数
    printf("依次输入10个数字，输出其中最大数\n");
	int x = 0;
	printf("输入第1个数字：");
	scanf("%d", &x);
	int max = x;//设max等于第一个数字，随后逐个进行比较

	for (int i = 2; i <= 10; i++)
	{
		printf("输入第%d个数字：", i);
		scanf("%d", &x);

		if (x > max)
			max = x;
	}
	printf("最大数是：%d\n", max);

//-------------------------------------------------------------------
    //int x, max;
    //int count = 10;
    //printf("请输入%d个数字：\n", count);

    //// 输入第一个数字
    //printf("输入第1个数字：");
    ////-----------------------------若scanf函数收到的是非数字，则报错
    //if (scanf("%d", &max) != 1) {
    //    printf("输入错误！\n");
    //    return 1;
    //}

    //// 输入剩余数字
    //for (int i = 2; i <= count; i++) {
    //    printf("输入第%d个数字：", i);
    //    if (scanf("%d", &x) != 1) {
    //        printf("输入错误！\n");
    //        return 1;
    //    }

    //    if (x > max) {
    //        max = x;
    //    }
    //}

    //printf("最大数是：%d\n", max);

	return 0;
}