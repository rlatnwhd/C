// 202395007 ����� 
#include<stdio.h>
int main(){
	int num, i, j;
	for(;;){  // ���ѹݺ� == while(1){} 
		printf("Line ���� : ");
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
	printf("���α׷� ����");
	return 0;
}
