// 202395007 김수종 
#include<stdio.h>
int main(){
	int age, height;
	printf("나이 입력 : ");
	scanf("%d",&age);
	if(age<9){
		printf("입장 불가!");
		return 0;
	}
	printf("키 입력 : ");
	scanf("%d",&height);
	if(height>=130) printf("고속 롤러코스터 입장가능");
	else printf("저속 롤러코스터 입장가능");
	return 0;
}
