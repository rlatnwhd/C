//202395007 김수종 
#include<stdio.h>
#include"pointer_prj.h"
#define SIZE 5
int main(){
	int x[SIZE]={0}, y[SIZE]={0};
	input_array(x, SIZE);
	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, SIZE);
	printf("y = ");
	print_array(y, SIZE);
	printf("배열 x의 원소 합 = %d",sum_array(x, SIZE));
	return 0;
}
