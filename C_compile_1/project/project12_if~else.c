// 202395007 김수종 
#include<stdio.h>
int main(){
	int kor, eng, math;
	printf("국어 점수? : ");
	scanf("%d",&kor);
	printf("영어 점수? : ");
	scanf("%d",&eng); 
	printf("수학 점수? : ");
	scanf("%d",&math);
	printf("세 과목의 평균 : %d\n",(kor+eng+math)/3);
	if(kor>=40 && eng>=40 && math>=40 && (kor+eng+math)/3>=60)
		printf("합격");
	else
		printf("불합격");
	return 0;
}
