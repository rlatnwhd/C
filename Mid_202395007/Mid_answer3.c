// �߰���� 3�� ���� �� 
#include<stdio.h>
int main(){
	int count, i, num, sum=0;
	printf("�Է��� ������ ���� : ");
	scanf("%d",&count);
	printf("\n1 ~ 10 ������ ���� �Է��ϼ���.\n\n");
	for(i=0; i<count; i++){
		printf("%d ��° : ",i+1);
		scanf("%d",&num);
		if(num<1 || num>10){
			printf("��ȿ�� ���� �ƴ�\n");
			i--;
		}
		else{
			sum+=num;
		}
	}	
	printf("�հ� : %d, ��� : %.2f",sum,(float)sum/count);
	return 0;
}
