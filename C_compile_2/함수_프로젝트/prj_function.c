#include<stdio.h>
#include"prj_function.h"

int minus1(int a, int b){
	return a-b;
}

void minus2(int a, int b){
	printf("�Լ�����2��� : %d\n",a-b);
}

int add3(){
	int a=10, b=3; // ��������(���ú���) 
	return a+b;
}

void add4(){
	int a=10, b=3; // ��������(���ú���) 
	printf("�Լ�����4��� : %d",a+b);
}
