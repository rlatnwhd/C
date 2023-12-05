//202395007 김수종 
#include<stdio.h>
#define MAX 6
int main(){
	int arr[MAX], sum=0, i, len;
//	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
	len=sizeof(arr)/sizeof(int);
	printf("정수 %d 개 입력 : ", len); 
	for(i=0; i<len; i++) scanf("%d",&arr[i]);
	for(i=0; i<len; i++) sum+=arr[i];
	printf("배열요소에 저장된 값의 합 : %d",sum);
	return 0;
}
