#include <iostream>
int main(){
	int a;//коробки
	int i=0;//cчетчик
	scanf("%d",&a);
	int m[a];
	if(a<1 || a>1000)printf("Type other number");
		int summ=0;//конфеты
		while(i<a){
			scanf("%d",&m[i]);
			summ+=m[i];
			if(m[i]<0 || m[i]>1000)printf("Type other number");
			i+=1;
		}
		bool mod = false;
		int r;
		int e=0; //конфеты которые нужно съесть
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
    	int max;//максимальное допустимое значение числа в €чейке
    	summ=r;
		max=summ/a;
		i=0;
		int p=0;//перекладывание
		while(i<a){
			m[i]==max;
			if(m[i]>max)p=p+(m[i]-max);
			i+=1;
		}
		printf("%d %d",e ,p);
}
