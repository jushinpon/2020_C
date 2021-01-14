#include <stdio.h>
#include <stdlib.h> //atoi, atof
#include <time.h>
int arrayCopy(int n, int x[],int y[]);

int main(int argc, char *argv[]){
 int *a,*b,nelement;
 nelement = atoi(argv[1]);
 srand(time(NULL)); 
 a = (int*) malloc(nelement*sizeof(int));
 b = (int*) malloc(nelement*sizeof(int));
 
 printf("size of array a and int are %d and %d\n",sizeof(a),sizeof(int));
 for(int i=0; i < nelement;i++){
	 a[i] = 0;
	 b[i] = 0;
	 }
	 
 for(int i=0; i < nelement;i++){a[i] = (int)rand() % 50;}
 arrayCopy(nelement,a,b);
 //b = a;// a big error
printf("There are %d elements in the array a\n",nelement);
	for(int i=0; i < nelement;i++){
	 printf("element %d of array a and array b are %d and %d.\n",i,a[i],b[i]);
	  }
 
 free(a);
 free(b);
return 0;
}

int arrayCopy(int n, int x[],int y[]){
	for(int i=0; i < n;i++){y[i] = x[i];}	
}