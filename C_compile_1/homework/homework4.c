// 202395007 �����
#include<stdio.h>
int main(){
	int money;
	printf("�ݾ� �Է�(���� : ��) : ");
	scanf("%d",&money);
	printf("5���� = %d ��\n",money/50000);
	money%=50000;
	printf("1���� = %d ��\n",money/10000);
	money%=10000;
	printf("5õ�� = %d ��\n",money/5000);
	money%=5000;
	printf("1õ�� = %d ��",money/1000);
	return 0;
}
