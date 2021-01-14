	#include <stdio.h> 
	#include <string.h> //memcpy function defined in this lib

int main(void) 
{ // abc[0]
	    int abc[3][3]= {3,4,5, 6,7,8, 9,0,1};	     
	    int copy[3][3];
        int i,j; //counter
		//copy=abc;
//	for (i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			copy[i][j] = abc[i][j];
//            printf("array abc[%d][%d] = %d\n",i,j,abc[i][j]);
//			printf("array copy[%d][%d] = %d\n***\n",i,j,copy[i][j]);	
//		}		
//	}
		printf("sizeof: %d, %d, and %d bytes\n",sizeof(copy),sizeof(copy[0]),sizeof(copy[0][0])); //);
//		int temp = getchar();
	    memcpy(copy, abc, sizeof(copy)); //void *memcpy(void *str1, const void *str2, size_t n)
    for (i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		    printf("array abc[%d][%d] = %d\n",i,j,abc[i][j]);
			printf("array copy[%d][%d] = %d\n***\n",i,j,copy[i][j]);	
		}		
	}		
}
