// 202395007 김수종
#include<stdio.h>
int main(){
	int i, sum=0;
	for(i=0; i<1000; i++)
		if((i+1)%2==1){
			printf("%3d번 안녕하세요 C입니다.\n",i+1);
			sum+=i;
		}
	printf("%d",sum);
	return 0;
}
