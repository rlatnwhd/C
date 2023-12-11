#include<stdio.h>
int main(){
	int arr[]={15, 25, 35};
	int *ptr=&arr[0]; // int *ptr=arr; 와 동일한 문장
	printf("%d %d\n", ptr[0], arr[0]); // ptr[0] == ptr + 0 == *ptr
	printf("%d %d\n", ptr[1], arr[1]); // ptr[1] == ptr + 1
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);
	return 0;
}
