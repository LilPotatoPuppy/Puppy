#include <iostream>
/* ��������� ����� ������� (��� �������� �������). 
��������� ����� � ������ ������� (�������).
���������� ��� ������� (����� � �����).
����� �� ���-�� �������, -1 �� ����� ���� ������� �� ����� =0. (+������� �� ����� �� ����� (��������)).
�������� �� ���������� ����� ������� (����� �������� ����� ����)
����� ����� �� ���-�� ������� � ���������� ��� ��� ������������ ���������� �������� ����� � ������.
���������� ��� �����
�� �������� �������� ������� � ������������� (+ ������� �� ��������������)
�������, ���� ����� = ��� ����������, �� ��� �� ����������
����� �� ����
*/
int main(){
	int a;//�������
	int m[a];
	int i=0;//c������
	int summ=0;//�������
	printf("How many boxes will be? \n");
	scanf("%d",&a);
	if(a>1 && a<1001){
		printf("Type number of candies \n");
		while(i<a){
			scanf("%d",&m[i]);
			summ+=m[i];
			if(m[i]<0 || m[i]>1000)printf("Type other number");
			i+=1;
		}
		printf("summ=%d \n",summ);
		bool mod = false;
		int r;
		int e=0; //������� ������� ����� ������
		while(!mod){
			r=summ;
			summ%=a;
			if(summ==0){
				summ=r;
				printf("e=%d, r=%d, summ=%d \n",e ,r ,summ);
				mod=true;
				break;
			}
			e+=1;
			summ=r;
			summ-=1;
		}
		printf("e=%d, r=%d, summ=%d \n",e ,r ,summ);
		i=0;
		while(i<e){
			m[i]-=1;
			i+=1;
		}
		i=0;
		while(i<a){
			printf("m[%d]=%d \n",i ,m[i]);
			i+=1;
		}
    	int max;//������������ ���������� �������� ����� � ������
    	summ=r;
		max=summ/a;
		i=0;
		int p=0;//��������������
		while(i<a){
			m[i]==max;
			if(m[i]>max){
				p=p+(m[i]-max);
			}
		}
		printf("p=%d",p);
	}
}
