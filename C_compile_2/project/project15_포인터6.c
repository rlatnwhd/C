//202395007 ����� 
#include<stdio.h>
void swap(int *px, int *py);
int main(){
	int a, b;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d",&a, &b); // �Ű������� ������ �� ��, ���� ���� �ƴ� ������ �ּҸ� ������. (ex : &A)
	printf("a=%d, b=%d\n",a, b);
	swap(&a, &b);
	printf("a=%d, b=%d",a, b);
	return 0;
}

void swap(int *px, int *py){
	int temp=*px;
	*px=*py;
	*py=temp;
}
