// 202395007 ����� 
#include<stdio.h>
int main(){
	int num, i, j=0;
	while(1){  // ���ѹݺ� == for(;;){} 
		i=0;
		printf("Line ���� : ");
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
	printf("���α׷� ����");
	return 0;
}
