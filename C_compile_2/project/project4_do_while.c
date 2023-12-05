// 202395007 김수종 
#include<stdio.h>
int main(){
	int prise, num; 
	do{
		printf("1번 카페라떼   : 3500원\n2번 카푸치노   : 3700원\n3번 아메리카노 : 2500원\n4번 그만 주문\n선택 번호 : ");
		scanf("%d", &num);
		switch(num){
			case 1:
				printf("카페라떼를 주문하셨습니다.");
				prise+=3500;
				break; 
			case 2:
				printf("카푸치노를 주문하셨습니다.");
				prise+=3700;
				break; 
			case 3:
				printf("아메리카노를 주문하셨습니다.");
				prise+=2500;
				break;
			case 4:
				break;
			default:
				printf("잘못 주문하셨습니다.");
		}
		printf("\n\n");
	} while(num!=4);
	printf("주문하신 커피 준비하겠습니다.\n");
	printf("결제 금액 : %d원", prise);
	return 0;
}
