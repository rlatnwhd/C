#include<stdio.h>
int minus1(int a, int b);
void minus2(int a, int b);
int minus3();
void minus4();

int main(){
	int a, b;
	printf("정수 두 개 입렵 : ");
	scanf("%d %d",&a,&b);
	printf("함수유형1호출 : %d\n", minus1(a,b)); 
	minus2(a,b);
	printf("함수유형3호출 : %d\n", add3(a,b)); 
	add4();
	return 0;
}

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
