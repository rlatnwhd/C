//202395007 �����
#include<stdio.h>
int main(){
	char str[]="Good morning!";
	printf("�迭 str�� ũ�� : %d\n",sizeof(str)/sizeof(char));
	printf("�� ���� ������ ��� : %c\n",str[13]);
	printf("�� ���� ������ ��� : %d\n",str[13]);
	str[12]='?'; // �ش� �ε��� ���ڿ� ���� ���� 
	printf("���ڿ� ��� : %s",str);
	return 0;
} 
