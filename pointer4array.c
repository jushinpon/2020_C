#include <stdio.h>

int main(void) {
    int arr[10] = {0};

    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n", &arr[0]);

    return 0;
}