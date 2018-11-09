#include <iostream>

int main(){
	int a;
	int n; // number we need to find
	printf("How many numbers you will have in massive? \n");
	scanf("%d", &a); // max number of massive
	printf("Type number you want to find in massive \n");
	scanf("%d", &n);
	printf("Tell numbers in massive \n");
	int m[a];
	bool k = false;
	int i=0; // count, number of massive
		while(i<a){
			printf("m[%d]=",i); //m[0] ect;
			scanf("%d", &m[i]);
			m[i]==n;
			if(m[i]==n) k=true;
			i+=1;
		}
		if(k)printf("number %d exists in massive",n);
		if(!k) printf("number %d does not exists in massive",n);
}
