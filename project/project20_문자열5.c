// 202395007 ����� 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char sentence[100], *p=sentence;
	printf("���ڿ�? ");
	gets(sentence);
	while(*p!='\0'){
		if(islower(*p)) *p=toupper(*p);
		else *p=tolower(*p);
		p++;
	}
	printf("��ȯ��: ");
	puts(sentence);
	return 0;
}
