// 202395007 ����� 
#include<stdio.h>
int main(){
	int kor, eng, math;
	printf("���� ����? : ");
	scanf("%d",&kor);
	printf("���� ����? : ");
	scanf("%d",&eng); 
	printf("���� ����? : ");
	scanf("%d",&math);
	printf("�� ������ ��� : %d\n",(kor+eng+math)/3);
	if(kor>=40 && eng>=40 && math>=40 && (kor+eng+math)/3>=60)
		printf("�հ�");
	else
		printf("���հ�");
	return 0;
}
