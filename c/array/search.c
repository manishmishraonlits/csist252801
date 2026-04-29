#include <stdio.h>
#define N 10 
int main(void)
{
    int arr[N] = {26, 5, 12, 63, 76, 20, 42, 31, 86, 93};
    int key = 93;
    int found = 0;

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == key)
        {
            printf("%d found at index %d.", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("%d not found!", key);

    return 0;
}