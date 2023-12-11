#include<stdio.h>
int main(){
	int num=100;
	int *ptr1=&num;
	int *ptr2=ptr1;
	(*ptr1)++;
	(*ptr2)++;
	printf("num : %d",num); // 결론적으로 ptr1과 ptr2는 둘 다 num을 가리키는 포인터 변수임 
	return 0;
}
