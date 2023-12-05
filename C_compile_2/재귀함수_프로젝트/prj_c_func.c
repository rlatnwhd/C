#include<stdio.h>
#include"prj_c.h"
int Factorial(int n){
	if(n==0) return 1;
	else return n*Factorial(n-1);
}

int accumSum(int n){
	if(n==1) return 1;
	else return n+accumSum(n-1);
}

void gugudan(int n){
	int i;
	for(i=1; i<=9; i++) printf("%d * %d = %d\n",n,i,n*i);
}
