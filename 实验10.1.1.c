#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    scanf("%d", &n);
    char** arr1 = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++)
    {
        arr1[i] = (char*)malloc(10);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr1[i]);
    }
    int* len = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        len[i] = strlen(arr1[i]);
    }
    char** arr2 = (char**)malloc(sizeof(char*) * 100);
    for (int i = 0; i < n; i++)
    {
        arr2[len[i]] = arr1[i];
    }
    qsort(len, n, sizeof(int), cmp);
    printf("Sorted result:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr2[len[i]]);
    }
    return 0;
}