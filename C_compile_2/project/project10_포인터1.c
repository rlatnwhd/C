#include<stdio.h>
int main(){
	int num1=100, num2=100;
	int *pnum;
	pnum=&num1; // ������ ������ num1�� �ּҸ� ���� 
	pnum+=30; // �ش� �����Ͱ� ����Ű�� ������ 30�� ���� 
	pnum=&num2; // ������ ������ num2�� �ּҸ� ���� 
	(*pnum)-=30; // �ش� �����Ͱ� ����Ű�� ������ 30�� �� 
	printf("num1 : %d\nnum2 : %d",num1, num2);
	return 0;
}
