#include <stdio.h>
#include <stdlib.h>
int max (int A[], int n)
{
    int i;
    int x = A[0];
    for(i=0;i<n;i++)
    {
        if(A[i] < x)
        {
            A[i] == x;
        }
    }
    return x;
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", max(a, 10));
}
