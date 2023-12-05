//202395007 김수종
#include<stdio.h>
#define MAX 5
#include"Prj_arr.h"

int main(){
	int num[MAX];
	inputArr(num,MAX);
	printf("배열에 저장된 숫자의 합 : %d",sumArr(num,MAX));
}

