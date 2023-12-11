// 202395007 김수종 
#include<stdio.h>
int main(){
	int num, i, j;
	for(;;){  // 무한반복 == while(1){} 
		printf("Line 개수 : ");
		scanf("%d", &num);
		if(num==0) break;
		for(i=0; i<num; i++){
			for(j=0; j<=i; j++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("프로그램 종료");
	return 0;
}
