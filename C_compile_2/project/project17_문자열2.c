// 202395007 김수종 
#include<stdio.h>
#include<string.h>
int main(){
	char str_in[128];
	char str_out[128];
	int year, month, day;
	printf("날짜(yyyymmdd)? ");
	gets(str_in); // (VSC) gets_s(str_in, sizeof(str_in));
	sscanf(str_in,"%4d%2d%2d",&year,&month,&day); // str_in에 값을 저장 
	sprintf(str_out,"Due Date : %04d-%02d-%02d",year,month,day); // str_out에 저장 (출력문 아님)
	puts(str_out); // str_out 출력 후 줄바꿈 = printf("%s\n",str_out);
	return 0;
}
