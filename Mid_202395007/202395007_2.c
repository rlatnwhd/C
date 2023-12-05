// 202395007 김수종 
#include<stdio.h>
int main(){
	int num;
	printf("2자리 정수 입력(10~99) : ");
	scanf("%d",&num);
	if(num<10 || num>99){
		printf("10~99 사이의 정수만 입력하세요.");
		return 0; 
	} 
	if(num%10==num/10) printf("Yes! 10의 자리와 1의 자리가 같습니다.");
	else printf("No! 10의 자리와 1의 자리가 다릅니다.");
	return 0;
}
