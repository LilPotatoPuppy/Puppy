#include <iostream>
int main(){
	int a;//�������
	int i=0;//c������
	scanf("%d",&a);
	int m[a];
	if(a<1 || a>1000)printf("Type other number");
		int summ=0;//�������
		while(i<a){
			scanf("%d",&m[i]);
			summ+=m[i];
			if(m[i]<0 || m[i]>1000)printf("Type other number");
			i+=1;
		}
		bool mod = false;
		int r;
		int e=0; //������� ������� ����� ������
		while(!mod){
			r=summ;
			summ%=a;
			if(summ==0){
				summ=r;
				mod=true;
				break;
			}
			e+=1;
			summ=r;
			summ-=1;
		}
		for(int i=0; i<e; i++)m[i]-=1;
    	int max;//������������ ���������� �������� ����� � ������
    	summ=r;
		max=summ/a;
		i=0;
		int p=0;//��������������
		while(i<a){
			m[i]==max;
			if(m[i]>max)p=p+(m[i]-max);
			i+=1;
		}
		printf("%d %d",e ,p);
}
