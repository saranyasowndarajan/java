
    #include <stdio.h>
    int main()
    {
        int arr[100], len, i, j, temp, n;
            scanf("%d", &len);
            for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
           scanf("%d", &n);
        printf("\n The %d th kth number is: %d", n, arr[n - 1]);
        return 0;
    }
