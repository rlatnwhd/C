#include<stdio.h>
int main(){
	int num1=100, num2=100;
	int *pnum;
	pnum=&num1; // 포인터 변수에 num1의 주소를 저장 
	pnum+=30; // 해당 포인터가 가리키는 변수에 30을 더함 
	pnum=&num2; // 포인터 변수에 num2의 주소를 저장 
	(*pnum)-=30; // 해당 포인터가 가리키는 변수에 30을 뺌 
	printf("num1 : %d\nnum2 : %d",num1, num2);
	return 0;
}
