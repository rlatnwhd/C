// 202395007 김수종 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char sentence[100], *p=sentence;
	printf("문자열? ");
	gets(sentence);
	while(*p!='\0'){
		if(islower(*p)) *p=toupper(*p);
		else *p=tolower(*p);
		p++;
	}
	printf("변환후: ");
	puts(sentence);
	return 0;
}
