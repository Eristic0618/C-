#include <stdio.h>

int isleap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int isDate(int year, int month, int day)
{
    int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isleap(year))
        monthday[2] = 29;
    if((year > 0) && (month > 0 && month < 13) && (day > 0 && day <= monthday[month]))
    {
        return 1;
    }
    else
        return 0;
}

int Days(int year, int month, int day)
{
    int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isleap(year))
        monthday[2] = 29;
    int sum = 0;
    for (int i = 1; i < month;i++)
    {
        sum += monthday[i];
    }
    sum += day;
    return sum;
}

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);
    if (!isDate(year, month, day))
        printf("DateError");
    else
        printf("NO:%d", Days(year, month, day));
    return 0;
}