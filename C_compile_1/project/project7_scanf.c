#include<stdio.h>
int main(){
	int fnum, bnum;
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d %d",&fnum, &bnum);
	printf("\n- ������� ��� -");
	printf("\n%d + %d : %d",fnum,bnum,fnum+bnum);
	printf("\n%d - %d : %d",fnum,bnum,fnum-bnum);
	printf("\n%d * %d : %d",fnum,bnum,fnum*bnum);
	printf("\n%d / %d : %.3f",fnum,bnum,(float)fnum/bnum); // cast ������ (������ -> ū��)
	printf("\n%d %% %d : %d",fnum,bnum,fnum%bnum);
	return 0;
}
