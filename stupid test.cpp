#include <iostream>

int main(){
	int a;
	int b=-1; //ii?yaeiaue iiia? y?aeee
	int m[a];
	int g;//?enei a y?aeea b
	int i; // n?ao?ee
	printf("How many numbers you will have in massive? \n");
	scanf("%d", &a); // caaaai ?enei iauaeoia a ianneaa
	printf("Numbers in your massive will be in order? \n Print number, bigger than 0 if yes, print 0 if no. \n");
	int t;
	scanf("%d", &t);
	if(t>0){
		printf("Type your minimum number \n");
		scanf("%d", &g);
		g-=1;
		for(i=0; i<a; i++){
			g+=1;
			b+=1;
			printf("m[%d]=%d \n" ,b ,g);
	}	
	}
	else{
		b=-1; // iiia? y?aeee
		g=0; // ?enei a y?aeea
		i=0;
		printf("Tell numbers in massive \n");
		while(i<a){
			b+=1;
			i+=1;
			printf("m[%d]=" , b); //y?aeea ianneaa
			scanf("%d", &g);
		}
	}
		int n; // ?enei eioi?ia io?ii iaeoe a ianneaa
		printf("Type number you want to find in massive \n");
		scanf("%d", &n); // m[b]=g
		i=0;
		bool k = true;
		while(i<a && k){
			i+=1;
			m[b]==n;
			if(m[b]==n){
				k=false;
				printf("Number %d exists in massive" ,n);
			}
			else{
				printf("Number %d does not exist in massive");
			}
	}
	return 0;
}
