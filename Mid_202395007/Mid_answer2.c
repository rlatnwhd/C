// �߰���� 2�� ���� �� 
#include<stdio.h>
int main(){
	int num, v1, v2;
	printf("2�ڸ� ���� �Է�(10~99) : ");
	scanf("%d", &num);
	v1=num/10;  // 10�� �ڸ� 
	v2=num%10;  // 1�� �ڸ� 
	if(num<10 || num>99) printf("10~99 ������ ������ �Է��ϼ���.");
	else{
		if(v1==v2) printf("Yes! 10�� �ڸ��� 1�� �ڸ��� �����ϴ�.");
		else printf("No! 10�� �ڸ��� 1�� �ڸ��� �ٸ��ϴ�.");
	}
	return 0;
}
