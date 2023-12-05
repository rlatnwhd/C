// 202395007 김수종 
#include<stdio.h>
#include"prj_c.h"
int main(){
	int num;
	while(1){ 
		printf("출력할 구구단(2~9, 종료: 0) : ");
		scanf("%d",&num);
		if(num==0){
			printf("구구단 종료!");
			break;
		}
		if(num<2 || num>9){
			printf("> 유효하지 않은 데이터 값!\n");
			printf("> 다시 입력하세요.\n\n");
			continue;
		}
		printf("------%d단------\n",num);
		gugudan(num);
		printf("\n");
	}
	
//	printf("%d! 결과 : %d\n",num,Factorial(num));
//	printf("1부터 %d까지 합 : %d",num,accumSum(num));
	return 0;
}
