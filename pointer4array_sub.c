#include <stdio.h>
int addone(int m,int arr[m],int afteradd[m]){
	for (int i;i<m;i++){afteradd[i]= arr[i]+1;}
}
int main(void) {
    int arr[10] = {0};
    int add[10],m=10;
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n", &arr[0]);
     printf("&arr[1] :\t%p\n", &arr[1]);
     addone(m,arr,add);
     for (int i;i<m;i++){printf ("after addone %d: %d\n",i,add[i]);}
    return 0;
}
