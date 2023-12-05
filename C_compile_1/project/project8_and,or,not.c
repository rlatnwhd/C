#include<stdio.h>
int main(){
	int num;
	printf("정수 입력 : ");
	scanf("%d",&num);
	printf("num > 100 && num < 200 = %d",num>100&&num<200);
	printf("\nnum > 100 || num < 200 = %d",num>100||num<200);
	printf("\n! num < 200 = %d",!(num<200));
	return 0;
}
