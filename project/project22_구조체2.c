#include<stdio.h>
#include<string.h>
#define SIZE 5

struct student{
	char name[100];
	int kor;
	int eng;
	float avg;
};

int main(){
	struct student s[SIZE];
	char name[10];
	int i;
	for(i=0; i<SIZE; i++){
		printf("----- %d ��° -----\n",i+1);
		printf("�л� �̸� : ");
		scanf("%s",s[i].name);
		printf("���� ���� : ");
		scanf("%d",&s[i].kor);
		printf("���� ���� : ");
		scanf("%d",&s[i].eng);
		s[i].avg=(s[i].kor+s[i].eng)/2.0f;
	}
	puts("");
	fflush(stdin);
	printf("�˻��� �л��̸� : ");
	gets(name);
	for(i=0; i<SIZE; i++){
		if(strcmp(name,s[i].name)==0) break;
	}
	if(i==SIZE) printf("�л� ������ �����ϴ�.");
	else{
		puts("�л� ����");
		printf("�л� �̸� : %s\n",s[i].name);
		printf("���� ���� : %d\n",s[i].kor);
		printf("���� ���� : %d\n",s[i].eng);
		printf("��� ���� : %.1f",s[i].avg);
	}
	return 0;
} 
