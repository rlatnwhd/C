//202395007 ����� 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size, *arr=NULL, i, sum=0;
	double avg;
	printf("�Է¹��� ������ ���� : ");
	scanf("%d",&size);
	arr=(int*)malloc(sizeof(int)*size);
	if(arr==NULL){
		puts("���� �޸� �Ҵ� ����");
		return -1;
	}
	printf("%d���� ������ �Է� : ",size);
	for(i=0; i<size; i++) scanf("%d",&arr[i]);
	for(i=0; i<size; i++) sum+=arr[i];
	avg=(float)sum/size;
	printf("�Էµ� ���� �հ� : %d\n",sum);
	printf("�Էµ� ���� ��� : %.2f\n",avg);
	free(arr);
	arr=NULL;
	return 0;
}
