#include<stdio.h>
struct point{
	int x, y; 
};

void print_point(struct point *ptr){
	printf("(%d, %d) ",ptr->x, ptr->y);
}

int main(){
	struct point arr[]={
		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4, 27}
	};
	int size=sizeof(arr)/sizeof(arr[0]), i;
	
	for(i=0; i<size; i++) print_point(arr+i);
	
	puts("");
	return 0;
}
