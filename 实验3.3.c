#include <stdio.h>

int main()
{
    int month;
    scanf("%d", &month);
    switch (month)
    {
    case 2:
    case 3:
    case 4:
        printf("Spring");
        break;
    case 5:
    case 6:
    case 7:
        printf("Summer");
        break;
    case 8:
    case 9:
    case 10:
        printf("Autumn");
        break;
    case 11:
    case 12:
    case 1:
        printf("Winter");
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}