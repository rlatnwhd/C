#include<stdio.h>
int main(){
	int n1, n2, n3, min;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	min=n1>n2 ? n2 : n1;
	min=min>n3 ? n3 : min;
	printf("���� ���� �� : %d",min);
	return 0;
}
