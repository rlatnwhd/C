#include <stdio.h>
#include <stdlib.h>
#include"prj_function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("정수 두 개 입렵 : ");
	scanf("%d %d",&a,&b);
	printf("함수유형1호출 : %d\n", minus1(a,b)); 
	minus2(a,b);
	printf("함수유형3호출 : %d\n", add3(a,b)); 
	add4();
	return 0;
}
