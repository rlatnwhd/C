// 202395007 ����� 
#include<stdio.h>
int main(){
	int krw, usd;
	printf("KRW? : ");
	scanf("%d",&krw);
	printf("��/�޷� ȯ��? : ");
	scanf("%d",&usd);
	printf("KRW %d = USD %.2f",krw,(float)krw/usd);
	return 0;
}
