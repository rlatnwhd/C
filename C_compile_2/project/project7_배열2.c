//202395007 ����� 
#include<stdio.h>
#define MAX 6
int main(){
	int arr[MAX], sum=0, i, len;
//	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
	len=sizeof(arr)/sizeof(int);
	printf("���� %d �� �Է� : ", len); 
	for(i=0; i<len; i++) scanf("%d",&arr[i]);
	for(i=0; i<len; i++) sum+=arr[i];
	printf("�迭��ҿ� ����� ���� �� : %d",sum);
	return 0;
}
