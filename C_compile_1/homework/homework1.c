//202395007 ����� 
#include<stdio.h>
int main(){
	int num2, num8, num16;
	num2=0b101010;
	num8=052;
	num16=0x2A;
	printf("0b101010 -> %d\n", num2);
	printf("052 -> %d\n", num8);
	printf("0x2a -> %d\n\n", num16);
	num8=053;
	num16=0x2B;
	printf("43�� 8������ ���� : %c\n",num8);
	printf("43�� 16������ ���� : %c\n",num16);
	return 0;
}
