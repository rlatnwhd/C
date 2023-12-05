#include<stdio.h>
int main(){
	int fnum, bnum;
	printf("나눌 수와 나누는 수 입력 : ");
	scanf("%d %d",&fnum, &bnum);
	printf("\n- 산술연산 결과 -");
	printf("\n%d + %d : %d",fnum,bnum,fnum+bnum);
	printf("\n%d - %d : %d",fnum,bnum,fnum-bnum);
	printf("\n%d * %d : %d",fnum,bnum,fnum*bnum);
	printf("\n%d / %d : %.3f",fnum,bnum,(float)fnum/bnum); // cast 연산자 (작은거 -> 큰거)
	printf("\n%d %% %d : %d",fnum,bnum,fnum%bnum);
	return 0;
}
