#include<stdio.h>
int main(){
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d",&num);
	if(num==0) printf("0 입니다.");
	else if(num>0) printf("양수입니다.");
	else printf("음수입니다.");
	return 0;
}
