// 202395007 김수종 
#include<stdio.h>
int main(){
	int krw, usd;
	printf("KRW? : ");
	scanf("%d",&krw);
	printf("원/달러 환율? : ");
	scanf("%d",&usd);
	printf("KRW %d = USD %.2f",krw,(float)krw/usd);
	return 0;
}
