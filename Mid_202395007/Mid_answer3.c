// 중간고사 3번 문제 답 
#include<stdio.h>
int main(){
	int count, i, num, sum=0;
	printf("입력할 숫자의 개수 : ");
	scanf("%d",&count);
	printf("\n1 ~ 10 사이의 수만 입력하세요.\n\n");
	for(i=0; i<count; i++){
		printf("%d 번째 : ",i+1);
		scanf("%d",&num);
		if(num<1 || num>10){
			printf("유효한 수가 아님\n");
			i--;
		}
		else{
			sum+=num;
		}
	}	
	printf("합계 : %d, 평균 : %.2f",sum,(float)sum/count);
	return 0;
}
