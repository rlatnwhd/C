// 중간고사 1번 문제 답 
#include<stdio.h>
int main(){
	int score;
	printf("점수 입력 : ");
	scanf("%d",&score);
	switch(score/10){
		case 10: case 9:
			printf("결과 : 장학생");
			break;
		case 8: case 7: case 6:
			printf("결과 : 통과");
			break;
		default:
			printf("결과 : 재시험"); 
	}
	return 0;
} 
