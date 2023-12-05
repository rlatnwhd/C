// 202395007 김수종 
#include<stdio.h>
int main(){
	int num;
	printf("정수 입력 : ");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
		printf("두 수의 배수이다.");
	else
		printf("두 수의 배수가 아니다.");
	return 0;
} 
