#include<stdio.h>
int main(){
	int arr[]={11, 22, 33};
	int *ptr=arr;
	printf("%d %d %d", *ptr, *(ptr+1), *(ptr+2));
	// printf("%d %d %d", *(ptr+0), *(ptr+1), *(ptr+2));
	// printf("%d %d %d", ptr[0], ptr[1], ptr[2]);
	// printf("%d %d %d", *(arr+0), *(arr+1), *(arr+2));
	// printf("%d %d %d", arr[0], arr[1], arr[2]);
	// 모두 동일한 문장
	// *(p + i) == arr[i]
	// p + i == &arr[i] 
	return 0;
}
