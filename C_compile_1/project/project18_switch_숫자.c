// 202395007 ����� 
#include<stdio.h>
int main(){
	int season;
	printf("�� �Է� : ");
	scanf("%d",&season);
	switch(season){
		case 3: case 4: case 5: 
			printf("���Դϴ�.");
			break;
		case 6: case 7: case 8:
			printf("�����Դϴ�.");
			break;
		case 9: case 10: case 11:
			printf("�����Դϴ�.");
			break;
		case 12: case 1: case 2:
			printf("�ܿ��Դϴ�.");
			break;
		default:
			printf("�߸��� �� �Է��Դϴ�.");
			break;
	} 
	return 0;
} 
