// 202395007 ����� 
#include<stdio.h>
int main(){
	int num, count, sum=0, i=1;
	printf("�Է��� ������ ���� : ");
	scanf("%d",&count);
	printf("\n1 ~ 10 ������ ���� �Է��ϼ���.\n\n");
	for(i=1; i<=count;){
		printf("%d ��° : ",i);
		scanf("%d",&num);
		if(num>10 || num<1) printf("��ȿ�� ���� �ƴ�\n");
		else{
			sum+=num;
			i++;
		}
	}	
	printf("�հ� : %d, ��� : %.2f",sum,(float)sum/count);
	return 0;
}
