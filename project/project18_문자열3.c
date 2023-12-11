#include<stdio.h>
#include<string.h>
int count_space(const char *s){
	int count=0;
	while(*s != '\0'){ // *s는 문자열 s의 인덱스 0번지 주소
		if(isspace(*s)) count++;
		s++;
	}
	return count;
}
int main(){
	char str[64]="this program tests const pointer to string.";
	puts(str);
	printf("공백 문자의 개수 : %d",count_space(str));
	return 0;
}
