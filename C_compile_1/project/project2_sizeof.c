#include<stdio.h>
int main(){
	printf("short���� ũ��\t\t\t ==> %d\n",sizeof(short));
	printf("int���� ũ��\t\t\t ==> %d\n",sizeof(int));
	printf("long int���� ũ��\t\t ==> %d\n",sizeof(long int));
	printf("double���� ũ��\t\t\t ==> %d\n",sizeof(double));
	printf("char���� ũ��\t\t\t ==> %d\n",sizeof(char));
	printf("�Ǽ� 3.14�� ũ��\t\t ==> %d\n",sizeof(3.14));
	return 0;
}

/*
�ƽ�Ű(ASCII)�ڵ� ��ȯ 
������ ->    2����  ->   16����
0 ~ 9  ->  48 ~ 57  ->  30 ~ 39
A ~ Z  ->  65 ~ 90  ->  41 ~ 5A
a ~ z  ->  97 ~ 122 ->  61 ~ 7A
*/ 
