// 202395007 김수종
#include<stdio.h>
int main(){
	int money;
	printf("금액 입력(단위 : 원) : ");
	scanf("%d",&money);
	printf("5만원 = %d 개\n",money/50000);
	money%=50000;
	printf("1만원 = %d 개\n",money/10000);
	money%=10000;
	printf("5천원 = %d 개\n",money/5000);
	money%=5000;
	printf("1천원 = %d 개",money/1000);
	return 0;
}
