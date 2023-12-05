// 202395007 김수종 
#include<stdio.h>
int main(){
	int season;
	printf("월 입력 : ");
	scanf("%d",&season);
	switch(season){
		case 3: case 4: case 5: 
			printf("봄입니다.");
			break;
		case 6: case 7: case 8:
			printf("여름입니다.");
			break;
		case 9: case 10: case 11:
			printf("가을입니다.");
			break;
		case 12: case 1: case 2:
			printf("겨울입니다.");
			break;
		default:
			printf("잘못된 월 입력입니다.");
			break;
	} 
	return 0;
} 
