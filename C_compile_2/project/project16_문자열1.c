//202395007 �����
#include<stdio.h>
#include<string.h>
int string_len_array(char *str){
	int i, count=0;
	for(i=0; *(str+i)!='\0'; i++) count++;
	return count;
}

void string_reverse_array(char *str, int max){
	int i;
	for(i=max-1; i>=0; i--) printf("%c",*(str+i));
}

int main(){
	char sentence[100]="", word[20];
	
	do{
		printf("�ܾ�? ");
		scanf("%s",word);
		strcat(sentence, word);
		strcat(sentence," ");
	} while (strcmp(word,".")!=0);
	
	printf("�Է¹��� ���ڿ� : %s\n",sentence);
	printf("���ڿ� ���� : %d\n",string_len_array(sentence)-1);
	printf("���ڿ� �Ųٷ� ��� :");
	string_reverse_array(sentence,string_len_array(sentence));
	return 0;
} 
