// 202395007 ����� 
#include<stdio.h>
int main(){
	int n1, n2;
	printf("��1, ��2 �Է�(���ڸ� ��) : ");
	scanf("%d %d",&n1,&n2);
	printf("%d & %d = %d\n",n1,n2,n1&n2);
	printf("%d | %d = %d\n",n1,n2,n1|n2);
	printf("%d ^ %d = %d\n",n1,n2,n1^n2);
	printf("~%d = %d",n1,~n1);
	return 0;
}
