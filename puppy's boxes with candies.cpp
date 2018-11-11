#include <iostream>
/* считываем число коробок (мах значение массива). 
—читываем числа в €чейку массива (конфеты).
—кладываем все конфеты (пр€мо в цикле).
ƒелим на кол-во коробок, -1 от суммы пока остаток не будет =0. (+счетчик на минус от числа (съедание)).
отнимаем от последнего числа массива (метод пузырька перед этим)
делим число на кол-во коробок и записываем это как максимальное допустимое значение числа в €чейке.
сравниваем два числа
из большего вычитаем меньшее и перекладываем (+ счетчик на перекладывание)
условие, если число = мах допустимое, то его не сравниваем
вывод на экран
*/
int main(){
	int a;//коробки
	int i=0;//cчетчик
	printf("How many boxes will be? \n");
	scanf("%d",&a);
	int m[a];
	if(a<1 || a>1000)printf("Type other number");
		int summ=0;//конфеты
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
		printf("e=%d, r=%d, summ=%d \n",e ,r ,summ);
		for(int i=0; i<e; i++)m[i]-=1;
		for(int i=0; i<a; i++)printf("m[%d]=%d \n",i ,m[i]);
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
		printf("p=%d e=%d",p ,e);
}
