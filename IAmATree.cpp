#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int n=0; // m[n]
	int r=0; //ðåçåðâ
	ifstream puppy;
	puppy.open("input.txt");
	while(!puppy.eof()){
		puppy>>r;
		n+=1;
	}
	puppy.close();
	cout << n << endl;
	int m[n];
	int i=0;
	int min=INT_MAX;
	int max=-min;
	ifstream lel;
	lel.open("input.txt");
	while(i<n){
		lel >> m[i];
		if(m[i]>max)max=m[i];
		if(m[i]<min)min=m[i];
		i++;
	}
	i=0;
	r=min;
	int rr=r-1;
	int g=max+1-min;
	int c[g];
	int k=0;
	while(rr<max){
		c[k]=0;
		while(i<n){
			r==m[i];
			if(r==m[i])c[k]+=1;
			i+=1;
		}
		k+=1;
		r+=1;
		rr+=1;
		i=0;
	}
	rr=0;
	k=0;
	int p=0; //?aca?a n[k]
	i=0;
	while(rr<g){
		p=c[k];
		while(i<p){
			cout << min;
			i+=1;
		}
		min+=1;
		rr+=1;
		i=0;
		k+=1;
	}
	cout << "\n" << endl;
	int *point = m;
	printf("Which number ya wanna find in massive? \n");
	int find=0;
	cin>>find;
	i=0;
   	
}
