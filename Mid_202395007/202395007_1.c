// 202395007 김수종 
#include<stdio.h>
int main(){
	int score, zumsu;
	printf("점수 입력 : ");
	scanf("%d",&score);
	if(score>=90) zumsu=1;
	else if(score>=60 && score<90) zumsu=2;
	else zumsu=3;
	switch(zumsu){
		case 1:
			printf("결과 : 장학생");
			break;
		case 2:
			printf("결과 : 통과");
			break;
		default:
			printf("결과 : 재시험"); 
	}
	return 0;
} 
