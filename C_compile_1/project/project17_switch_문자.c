// 202395007 김수종 
#include<stdio.h>
int main(){
	double x, y;
	char op;
	double result;
	printf("수식? (ex)1.0 + 2.0) : ");
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
			printf("계산할 수 없음");
			return 0; 
	}
	printf("%g %c %g의 계산 값 : %g",x,op,y,result); 
	return 0;
} 
