//202395007 김수종
#include<stdio.h>
#include"Prj_arr.h"

void inputArr(int number[],int a){
	int i; 
	printf("정수 %d개 입력 : ",a);
	for(i=0; i<a; i++) scanf("%d",&number[i]);
}

int sumArr(int number[],int a){
	int i, sum=0;
	for(i=0; i<a; i++) sum+=number[i];
	return sum;
}

