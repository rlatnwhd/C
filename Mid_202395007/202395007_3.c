// 202395007 김수종 
#include<stdio.h>
int main(){
	int num, count, sum=0, i=1;
	printf("입력할 숫자의 개수 : ");
	scanf("%d",&count);
	printf("\n1 ~ 10 사이의 수만 입력하세요.\n\n");
	for(i=1; i<=count;){
		printf("%d 번째 : ",i);
		scanf("%d",&num);
		if(num>10 || num<1) printf("유효한 수가 아님\n");
		else{
			sum+=num;
			i++;
		}
	}	
	printf("합계 : %d, 평균 : %.2f",sum,(float)sum/count);
	return 0;
}
