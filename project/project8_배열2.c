//202395007 김수종
#include<stdio.h>
int main(){
	char str[]="Good morning!";
	printf("배열 str의 크기 : %d\n",sizeof(str)/sizeof(char));
	printf("널 문자 문자형 출력 : %c\n",str[13]);
	printf("널 문자 정수형 출력 : %d\n",str[13]);
	str[12]='?'; // 해당 인덱스 문자열 변경 가능 
	printf("문자열 출력 : %s",str);
	return 0;
} 
