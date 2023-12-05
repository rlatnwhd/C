//202395007 김수종 
#include<stdio.h>
void swap(int *px, int *py);
int main(){
	int a, b;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d",&a, &b); // 매개변수가 포인터 일 때, 변수 값이 아닌 변수의 주소를 보낸다. (ex : &A)
	printf("a=%d, b=%d\n",a, b);
	swap(&a, &b);
	printf("a=%d, b=%d",a, b);
	return 0;
}

void swap(int *px, int *py){
	int temp=*px;
	*px=*py;
	*py=temp;
}
