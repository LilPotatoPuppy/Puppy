#include <iostream>

int main(){
	int a;
	int b=-1; //���������� ����� ������
	int m[a];
	int g;//����� � ������ b
	int i; // �������
	printf("How many numbers you will have in massive? \n");
	scanf("%d", &a); // ������ ����� �������� � �������
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
		b=-1; // ����� ������
		g=0; // ����� � ������
		i=0;
		printf("Tell numbers in massive \n");
		while(i<a){
			b+=1;
			i+=1;
			printf("m[%d]=" , b); //������ �������
			scanf("%d", &g);
		}
	}
		int n; // ����� ������� ����� ����� � �������
		printf("Type number you want to find in massive \n");
		scanf("%d", &n); // m[b]=g
		i=0;
		for(i=0;i<a;i++){
			m[b]==n;
	}
	if(m[b]==n){
		printf("number %d exists in massive m" ,n);		
	}
	else{
		printf("number %d does not exist in massive m" ,n);
	}
}
