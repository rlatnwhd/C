// 202395007 ����� 
#include<stdio.h>
int main(){
	double x, y;
	char op;
	double result;
	printf("����? (ex)1.0 + 2.0) : ");
	scanf("%lf %c %lf", &x, &op, &y);
	switch(op){
		case '+' :
			result=x+y;
			break;
		case '-' :
			result=x-y;
			break;
		case '/' :
			result=x/y;
			break;
		case '*' :
			result=x*y;
			break;
		default :
			printf("����� �� ����");
			return 0; 
	}
	printf("%g %c %g�� ��� �� : %g",x,op,y,result); 
	return 0;
} 
