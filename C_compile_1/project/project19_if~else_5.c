// 202395007 ����� 
#include<stdio.h>
int main(){
	int age, height;
	printf("���� �Է� : ");
	scanf("%d",&age);
	if(age<9){
		printf("���� �Ұ�!");
		return 0;
	}
	printf("Ű �Է� : ");
	scanf("%d",&height);
	if(height>=130) printf("��� �ѷ��ڽ��� ���尡��");
	else printf("���� �ѷ��ڽ��� ���尡��");
	return 0;
}
