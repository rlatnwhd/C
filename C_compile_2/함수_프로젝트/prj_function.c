#include<stdio.h>
#include"prj_function.h"

int minus1(int a, int b){
	return a-b;
}

void minus2(int a, int b){
	printf("함수유형2출력 : %d\n",a-b);
}

int add3(){
	int a=10, b=3; // 지역변수(로컬변수) 
	return a+b;
}

void add4(){
	int a=10, b=3; // 지역변수(로컬변수) 
	printf("함수유형4출력 : %d",a+b);
}
