#include <stdio.h>
#include <stdlib.h>
#include"prj_function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("���� �� �� �Է� : ");
	scanf("%d %d",&a,&b);
	printf("�Լ�����1ȣ�� : %d\n", minus1(a,b)); 
	minus2(a,b);
	printf("�Լ�����3ȣ�� : %d\n", add3(a,b)); 
	add4();
	return 0;
}
