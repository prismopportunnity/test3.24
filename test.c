#include <stdio.h>
//����һ�����ڣ������������Ǹ���ĵڼ��졣
int main() {
    int a;
    int b;
    int c;
    int i;
    int day[13];
    int sum;

    day[1] = 31;
    day[2] = 28;
    day[3] = 31;
    day[4] = 30;
    day[5] = 31;
    day[6] = 30;
    day[7] = 31;
    day[8] = 31;
    day[9] = 30;
    day[10] = 31;
    day[11] = 30;
    day[12] = 31;

    printf("�밴�����ڸ�ʽ--/--/--/����\n");
    while ((scanf("%d/%d/%d", &a, &b, &c)) != EOF) {
        sum = 0;

        for (i = 1; i <= b - 1; i++)
            sum += day[i];

        sum += c;

        if ((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && b >= 3)
            sum++;

        printf("��%d��ĵ�%d��\n",a, sum);
    }


    return 0;
}