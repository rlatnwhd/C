#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char books[5][30];
	int i=0;
	for(i=0; i<5; i++){
		printf("%d��° ���� �Է� : ",i+1);
		gets(books[i]);
	}
	for(i=0; i<5; i++) printf("%s\n",books[i]);
	for(i=0; i<5; i++){
		if (islower(books[i][0])) books[i][0]=toupper(books[i][0]);
	}
	puts("<< ���� �� >>");
	for(i=0; i<5; i++) printf("%s\n",books[i]);
	return 0;
}
