// 202395007 ����� 
#include<stdio.h>
#include"prj_c.h"
int main(){
	int num;
	while(1){ 
		printf("����� ������(2~9, ����: 0) : ");
		scanf("%d",&num);
		if(num==0){
			printf("������ ����!");
			break;
		}
		if(num<2 || num>9){
			printf("> ��ȿ���� ���� ������ ��!\n");
			printf("> �ٽ� �Է��ϼ���.\n\n");
			continue;
		}
		printf("------%d��------\n",num);
		gugudan(num);
		printf("\n");
	}
	
//	printf("%d! ��� : %d\n",num,Factorial(num));
//	printf("1���� %d���� �� : %d",num,accumSum(num));
	return 0;
}
