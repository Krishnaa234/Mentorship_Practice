#include <stdio.h>
int find_index(int A[], int n, int K)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == K)
            return i;
        else if (A[i] > K)
        {
            printf("Number more than array size.\n");
            break;
        }
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A);
    int K;
    printf("Enter value to be searches: ");
    scanf("%d", &K);
    printf("%d\n", find_index(A, n, K));
    return 0;
}