// 202395007 �����
#include<stdio.h>
int main(){
	int i, sum=0;
	for(i=0; i<1000; i++)
		if((i+1)%2==1){
			printf("%3d�� �ȳ��ϼ��� C�Դϴ�.\n",i+1);
			sum+=i;
		}
	printf("%d",sum);
	return 0;
}
