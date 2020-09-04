#include <stdio.h>

int main(void) {
    // 宣告變數但未初始值
    int ageOfStudent;
    double scoreOfStudent;
    char levelOfStudent;
	const double PI = 3.14;
	//PI = 3.1415926;	
	printf("PI value is %f\n",PI);
    printf("\nAge\tScore\tLevel\n");
    printf("%d\t%f\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);
    printf ("朱訓鵬\n");// need to check the decode setting of your screen
    ageOfStudent = 5;
    scoreOfStudent = 80.0;
    levelOfStudent = 'B';
    printf("\nAge\tScore\tLevel\n");
    printf("%d\t%.2f\t%c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

    return 0;
}