#include<stdio.h>
#include"pointer_prj.h"
void input_array(int *arr, int size){
	int i;
	printf("%d개의 배열 원소를 입력하세요 : ");
	for(i=0; i<size; i++) scanf("%d",arr+i);
}

void copy_array(const int *source, int *target, int size){
	int i;
	for(i=0; i<size; i++) *(target+i)=*(source+i);
}

void print_array(const int *arr, int size){
	int i;
	for(i=0; i<size; i++) printf("%d ",*(arr+i));
	printf("\n");
}

int sum_array(const int *arr, int size){
	int i, sum=0;
	for(i=0; i<size; i++) sum+=*(arr+i);
	return sum;
}
