#include<stdio.h>
int main(){
	printf("short형의 크기\t\t\t ==> %d\n",sizeof(short));
	printf("int형의 크기\t\t\t ==> %d\n",sizeof(int));
	printf("long int형의 크기\t\t ==> %d\n",sizeof(long int));
	printf("double형의 크기\t\t\t ==> %d\n",sizeof(double));
	printf("char형의 크기\t\t\t ==> %d\n",sizeof(char));
	printf("실수 3.14의 크기\t\t ==> %d\n",sizeof(3.14));
	return 0;
}

/*
아스키(ASCII)코드 변환 
문자형 ->    2진수  ->   16진수
0 ~ 9  ->  48 ~ 57  ->  30 ~ 39
A ~ Z  ->  65 ~ 90  ->  41 ~ 5A
a ~ z  ->  97 ~ 122 ->  61 ~ 7A
*/ 
