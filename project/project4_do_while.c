// 202395007 ����� 
#include<stdio.h>
int main(){
	int prise, num; 
	do{
		printf("1�� ī���   : 3500��\n2�� īǪġ��   : 3700��\n3�� �Ƹ޸�ī�� : 2500��\n4�� �׸� �ֹ�\n���� ��ȣ : ");
		scanf("%d", &num);
		switch(num){
			case 1:
				printf("ī��󶼸� �ֹ��ϼ̽��ϴ�.");
				prise+=3500;
				break; 
			case 2:
				printf("īǪġ�븦 �ֹ��ϼ̽��ϴ�.");
				prise+=3700;
				break; 
			case 3:
				printf("�Ƹ޸�ī�븦 �ֹ��ϼ̽��ϴ�.");
				prise+=2500;
				break;
			case 4:
				break;
			default:
				printf("�߸� �ֹ��ϼ̽��ϴ�.");
		}
		printf("\n\n");
	} while(num!=4);
	printf("�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n");
	printf("���� �ݾ� : %d��", prise);
	return 0;
}
