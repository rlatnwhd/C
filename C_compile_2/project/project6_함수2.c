#include<stdio.h>
int minus1(int a, int b);
void minus2(int a, int b);
int minus3();
void minus4();

int main(){
	int a, b;
	printf("���� �� �� �Է� : ");
	scanf("%d %d",&a,&b);
	printf("�Լ�����1ȣ�� : %d\n", minus1(a,b)); 
	minus2(a,b);
	printf("�Լ�����3ȣ�� : %d\n", add3(a,b)); 
	add4();
	return 0;
}

int minus1(int a, int b){
	return a-b;
}

void minus2(int a, int b){
	printf("�Լ�����2��� : %d\n",a-b);
}

int add3(){
	int a=10, b=3; // ��������(���ú���) 
	return a+b;
}

void add4(){
	int a=10, b=3; // ��������(���ú���) 
	printf("�Լ�����4��� : %d",a+b);
}
