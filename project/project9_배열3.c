//202395007 김수종
#include<stdio.h>
int main(){
	char str[50];
	int idx=0;
	printf("문자열 입력 : ");
	scanf("%s",str); // 문자열을 입력 받을때는 "&"를 쓰지 않음 
	printf("입력 받은 문자열 : %s\n",str);
	printf("문자 단위 출력 : ");
	while(str[idx]!='\0') printf("%c",str[idx++]);
	printf("\n널 문자를 뺀 문자열 길이 : %d",idx); 
	return 0;
}
