#include<stdio.h>
int main(){
	int n1, n2, n3, min;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	min=n1>n2 ? n2 : n1;
	min=min>n3 ? n3 : min;
	printf("가장 작은 수 : %d",min);
	return 0;
}
