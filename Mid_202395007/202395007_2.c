// 202395007 ����� 
#include<stdio.h>
int main(){
	int num;
	printf("2�ڸ� ���� �Է�(10~99) : ");
	scanf("%d",&num);
	if(num<10 || num>99){
		printf("10~99 ������ ������ �Է��ϼ���.");
		return 0; 
	} 
	if(num%10==num/10) printf("Yes! 10�� �ڸ��� 1�� �ڸ��� �����ϴ�.");
	else printf("No! 10�� �ڸ��� 1�� �ڸ��� �ٸ��ϴ�.");
	return 0;
}
