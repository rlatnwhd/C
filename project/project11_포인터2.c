#include<stdio.h>
int main(){
	int num=100;
	int *ptr1=&num;
	int *ptr2=ptr1;
	(*ptr1)++;
	(*ptr2)++;
	printf("num : %d",num); // ��������� ptr1�� ptr2�� �� �� num�� ����Ű�� ������ ������ 
	return 0;
}
