// 202395007 ����� 
#include<stdio.h>
int main(){
	int score, zumsu;
	printf("���� �Է� : ");
	scanf("%d",&score);
	if(score>=90) zumsu=1;
	else if(score>=60 && score<90) zumsu=2;
	else zumsu=3;
	switch(zumsu){
		case 1:
			printf("��� : ���л�");
			break;
		case 2:
			printf("��� : ���");
			break;
		default:
			printf("��� : �����"); 
	}
	return 0;
} 
