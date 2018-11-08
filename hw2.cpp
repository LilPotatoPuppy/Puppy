#include <iostream>

int main(){
	int a=1000; //число
	int b;
	int i;
	int a1;//резерв
	int summ=0;
	while(a>999 && a<10000){
		a1=a;
		i=0;
		summ=0;
		b=0;
		while(i<4){
			i+=1;
			b=a%10;
			a/=10;
			summ+=b;
		}
		if(summ==15){
			printf("a=%d" ,a1);
		}
		a=a1;
		a+=1;
	}
	
}
