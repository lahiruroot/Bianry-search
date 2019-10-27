#include <stdio.h>

int main()
{
    int f, l, m, search, arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    printf("Enter the input:\n");
    scanf("%d", &search);
    f = 0;
    l = 10 - 1;
    m = (f+l)/2;
    while (f <=l) {
            if (arr[m] < search)
            f = m + 1;
    else if (arr[m] == search) {
            printf("%d is a index %d.\n", search, m);
            break;
            }
    else
        l = m - 1;
    m = (f+l)/2;
    }
    if (f>l)
        printf("Not found! %d is not in the list.\n", search);
    return 0;
}
