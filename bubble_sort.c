#include <stdio.h>
void sort(int m, int x[]);
int main()
{
    int i, a[100], n, j, temp;
    printf("Enter size :");
    scanf("%d", &n);
    printf("Enter array elemnts:");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("Elements after sorting :");
    sort(n, a);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
void sort(int m, int x[])
{
    int i, j, temp;
    for (i = 1; i <= m - 1; i++)
        for (j = 1; j <= m - 1; j++)
        {
            if (x[j - 1] >= x[j])
            {
                temp = x[j - 1];
                x[j - 1] = x[j];
                x[j] = temp;
            }
        }
}