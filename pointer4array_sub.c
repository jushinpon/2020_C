#include <stdio.h>
//int addone(int m,int arr[],int afteradd[]){
//int addone(int m,int arr[m],int afteradd[m]){
int addone(int m,int *arr,int *afteradd){
	printf ("m value: %d\n",m);
	printf ("arr pointer: %p\n",arr);
	for (int i= 0;i<m;i++){
		//printf("Before add: %d-> %d\n",i,afteradd[i]);
		afteradd[i]= arr[i]+1;
		//printf("After add: %d-> %d\n",i,afteradd[i]);
	}
}
int main(void) {
    int arr[10] = {0};
    int add[10]= {0},m=10;
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n", &arr[0]);
     printf("&arr[1] :\t%p\n", &arr[1]);
     addone(m,arr,add);// pass array pointers to subroutine
     for (int i;i<m;i++){printf ("after addone %d: %d\n",i,add[i]);}
    return 0;
}
