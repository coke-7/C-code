#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{//--------------��������10�����֣�������������
    printf("��������10�����֣�������������\n");
	int x = 0;
	printf("�����1�����֣�");
	scanf("%d", &x);
	int max = x;//��max���ڵ�һ�����֣����������бȽ�

	for (int i = 2; i <= 10; i++)
	{
		printf("�����%d�����֣�", i);
		scanf("%d", &x);

		if (x > max)
			max = x;
	}
	printf("������ǣ�%d\n", max);

//-------------------------------------------------------------------
    //int x, max;
    //int count = 10;
    //printf("������%d�����֣�\n", count);

    //// �����һ������
    //printf("�����1�����֣�");
    ////-----------------------------��scanf�����յ����Ƿ����֣��򱨴�
    //if (scanf("%d", &max) != 1) {
    //    printf("�������\n");
    //    return 1;
    //}

    //// ����ʣ������
    //for (int i = 2; i <= count; i++) {
    //    printf("�����%d�����֣�", i);
    //    if (scanf("%d", &x) != 1) {
    //        printf("�������\n");
    //        return 1;
    //    }

    //    if (x > max) {
    //        max = x;
    //    }
    //}

    //printf("������ǣ�%d\n", max);

	return 0;
}