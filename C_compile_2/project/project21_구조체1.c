#include<stdio.h>
struct student{
	char name[100];
	int kor;
	int eng;
	float avg;
};

int main(){
	struct student s;
	printf("name : ");
	scanf("%s",s.name);
	printf("kor score : ");
	scanf("%d",&s.kor);
	printf("eng score : ");
	scanf("%d",&s.eng);
	s.avg=(s.kor+s.eng)/2.0f;
	printf("\n -- Struct --\n");
	printf("student name => %s\n",s.name);
	printf("kor score => %d\n",s.kor);
	printf("eng score => %d\n",s.eng);
	printf("score avg => %5.1f\n",s.avg);
	return 0;
} 
