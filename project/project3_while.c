// 202395007 김수종 
#include<stdio.h>
int main(){
	int num, i, j=0;
	while(1){  // 무한반복 == for(;;){} 
		i=0;
		printf("Line 개수 : ");
		scanf("%d", &num);
		if(num==0) break;
		while(i<num){
			while(j<=i){
				printf("*");
				j++;
			}
			printf("\n");
			j=0;
			i++;
		}
		printf("\n");
	}
	printf("프로그램 종료");
	return 0;
}
