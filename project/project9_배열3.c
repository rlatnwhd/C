//202395007 �����
#include<stdio.h>
int main(){
	char str[50];
	int idx=0;
	printf("���ڿ� �Է� : ");
	scanf("%s",str); // ���ڿ��� �Է� �������� "&"�� ���� ���� 
	printf("�Է� ���� ���ڿ� : %s\n",str);
	printf("���� ���� ��� : ");
	while(str[idx]!='\0') printf("%c",str[idx++]);
	printf("\n�� ���ڸ� �� ���ڿ� ���� : %d",idx); 
	return 0;
}
