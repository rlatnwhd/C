// 202395007 김수종 
#include<stdio.h>
int main(){
	int n1, n2;
	printf("수1, 수2 입력(한자리 수) : ");
	scanf("%d %d",&n1,&n2);
	printf("%d & %d = %d\n",n1,n2,n1&n2);
	printf("%d | %d = %d\n",n1,n2,n1|n2);
	printf("%d ^ %d = %d\n",n1,n2,n1^n2);
	printf("~%d = %d",n1,~n1);
	return 0;
}
