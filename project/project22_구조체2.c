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
		printf("----- %d 번째 -----\n",i+1);
		printf("학생 이름 : ");
		scanf("%s",s[i].name);
		printf("국어 점수 : ");
		scanf("%d",&s[i].kor);
		printf("영어 점수 : ");
		scanf("%d",&s[i].eng);
		s[i].avg=(s[i].kor+s[i].eng)/2.0f;
	}
	puts("");
	fflush(stdin);
	printf("검색할 학생이름 : ");
	gets(name);
	for(i=0; i<SIZE; i++){
		if(strcmp(name,s[i].name)==0) break;
	}
	if(i==SIZE) printf("학생 정보가 없습니다.");
	else{
		puts("학생 정보");
		printf("학생 이름 : %s\n",s[i].name);
		printf("국어 점수 : %d\n",s[i].kor);
		printf("영어 점수 : %d\n",s[i].eng);
		printf("평균 점수 : %.1f",s[i].avg);
	}
	return 0;
} 
