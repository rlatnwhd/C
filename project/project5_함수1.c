#include<stdio.h> // 라이브러리 함수(라이브러리에 헤더를 포함하여 호출)
int add1(int a, int b); // 사용자 정의 함수의 프로토타입(함수가 있다는 것을 확인)
void add2(int a, int b);
int add3();
void add4();
// main함수 아래 함수를 정의할 경우 사용자 함수정의 프로토타입 선언

int main(){
	printf("함수유형1호출 : %d\n", add1(10,3)); // 인자값을 넘겨준 후 반환값을 받고 출력(매개변수 O, 반환값 O) 
	add2(10,3); // 인자값을 넘겨주고 함수 자체에서 반환하지 않고 출력(매개변수 O, 반환값 X) 
	printf("함수유형3호출 : %d\n", add3()); // 인자값이 없지만 함수 자체에서 반환 (매개변수 X, 반환값 O) 
	add4(); // 인자값이 없고 함수 자체에서 반환하지 않고 출력 (매개변수 X, 반환값 X) 
	return 0;
}

int add1(int a, int b){ // (매개변수 O, 반환값 O)
	return a+b;
}

void add2(int a, int b){
	printf("함수유형2출력 : %d\n",a+b); // (매개변수 O, 반환값 X) 
}

int add3(){ // (매개변수 X, 반환값 O) 
	int a=10, b=3; // 지역변수(로컬변수) 
	return a+b;
}

void add4(){ // (매개변수 X, 반환값 X)
	int a=10, b=3; // 지역변수(로컬변수) 
	printf("함수유형2출력 : %d",a+b);
}
