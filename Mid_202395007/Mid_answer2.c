// 중간고사 2번 문제 답 
#include<stdio.h>
int main(){
	int num, v1, v2;
	printf("2자리 정수 입력(10~99) : ");
	scanf("%d", &num);
	v1=num/10;  // 10의 자리 
	v2=num%10;  // 1의 자리 
	if(num<10 || num>99) printf("10~99 사이의 정수만 입력하세요.");
	else{
		if(v1==v2) printf("Yes! 10의 자리와 1의 자리가 같습니다.");
		else printf("No! 10의 자리와 1의 자리가 다릅니다.");
	}
	return 0;
}
