// 202395007 ����� 
#include<stdio.h>
int main(){
	int opt;
	double num1, num2;
	double result;
	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);
	if(opt==1) result=num1 + num2;
	else if(opt==2) result=num1 - num2;
	else if(opt==3) result=num1 * num2;
	else if(opt==4) result=num1 / num2;
	else{
		printf("����� �� ����");
		return 0;
	}
	printf("��� : %g \n", result);
	return 0;
}
