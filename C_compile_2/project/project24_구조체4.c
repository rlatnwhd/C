//202395007 김수종 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size, *arr=NULL, i, sum=0;
	double avg;
	printf("입력받을 정수의 개수 : ");
	scanf("%d",&size);
	arr=(int*)malloc(sizeof(int)*size);
	if(arr==NULL){
		puts("동적 메모리 할당 실패");
		return -1;
	}
	printf("%d개의 정수를 입력 : ",size);
	for(i=0; i<size; i++) scanf("%d",&arr[i]);
	for(i=0; i<size; i++) sum+=arr[i];
	avg=(float)sum/size;
	printf("입력된 정수 합계 : %d\n",sum);
	printf("입력된 정수 평균 : %.2f\n",avg);
	free(arr);
	arr=NULL;
	return 0;
}
