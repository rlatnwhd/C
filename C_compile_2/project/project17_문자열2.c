// 202395007 ����� 
#include<stdio.h>
#include<string.h>
int main(){
	char str_in[128];
	char str_out[128];
	int year, month, day;
	printf("��¥(yyyymmdd)? ");
	gets(str_in); // (VSC) gets_s(str_in, sizeof(str_in));
	sscanf(str_in,"%4d%2d%2d",&year,&month,&day); // str_in�� ���� ���� 
	sprintf(str_out,"Due Date : %04d-%02d-%02d",year,month,day); // str_out�� ���� (��¹� �ƴ�)
	puts(str_out); // str_out ��� �� �ٹٲ� = printf("%s\n",str_out);
	return 0;
}
