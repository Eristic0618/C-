#include <stdio.h>

int judgeyear(int year)
{

    int flag = 0; // ƽ�귵��0

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        flag = 1; // ���귵��1

    return flag;
}

/*���ⲻ�������ڵĺϷ��ԣ�����������ǺϷ���*/

int main()
{
    int year, month, day;
    int dayNumber = 0;
    scanf("%d%d%d", &year, &month, &day);
    switch (month)
    {
    case 12:
        dayNumber += 30;
        month--;
    case 11:
        dayNumber += 31;
        month--;
    case 10:
        dayNumber += 30;
        month--;
    case 9:
        dayNumber += 31;
        month--;
    case 8:
        dayNumber += 31;
        month--;
    case 7:
        dayNumber += 30;
        month--;
    case 6:
        dayNumber += 31;
        month--;
    case 5:
        dayNumber += 30;
        month--;
    case 4:
        dayNumber += 31;
        month--;
    case 3:
        dayNumber += 28;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            dayNumber += 1;
        month--;
    case 2:
        dayNumber += 31;
        month--;
    case 1:
        break;
    default:
        printf("Input error!");
    }
    printf("%d", dayNumber+day);
}