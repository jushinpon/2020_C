#include <stdio.h>

int main(void) {
    // �ŧi�ܼƦ�����l��
    int ageOfStudent;
    double scoreOfStudent;
    char levelOfStudent;
	const double PI = 3.14;
	//PI = 3.1415926;	
	printf("PI value is %f\n",PI);
    printf("\nAge\tScore\tLevel\n");
    printf("%d\t%f\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);
    printf ("���V�P\n");// need to check the decode setting of your screen
    ageOfStudent = 5;
    scoreOfStudent = 80.0;
    levelOfStudent = 'B';
    printf("\nAge\tScore\tLevel\n");
    printf("%d\t%.2f\t%c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

    return 0;
}