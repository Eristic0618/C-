#include <stdio.h>

int judgeyear(int year)
{
    int flag = 0; // ƽ�귵��0
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        flag = 1; // ���귵��1
    return flag;  // һ�д���
}

int main()
{
    int year, month, day;
    int flag_1 = 0;
    scanf("%d%d%d", &year, &month, &day);
    // �ж�����ĺϷ���
    if (day >= 1 && day <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) // ���µ��·�
        flag_1 = 1;
    else if (day >= 1 && day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11))
        // С�µ��յķ�Χ
        flag_1 = 1;
    else if ((judgeyear(year) && day >= 1 && day <= 29 && month == 2) || (!judgeyear(year) && day >= 1 && day <= 28 && month == 2))
        // ���µ������
        // ע��judgeyear�����ķ���ֵ�����귵��1��������µ�����Ҳ��1��ʹ�üӷ�����
        flag_1 = 1;
    if (flag_1)
        printf("yes");
    else
        printf("no");
}