#include<stdio.h>
#include<string.h>
int count_space(const char *s){
	int count=0;
	while(*s != '\0'){ // *s�� ���ڿ� s�� �ε��� 0���� �ּ�
		if(isspace(*s)) count++;
		s++;
	}
	return count;
}
int main(){
	char str[64]="this program tests const pointer to string.";
	puts(str);
	printf("���� ������ ���� : %d",count_space(str));
	return 0;
}
