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
	int ii=0;
	while(rr<g){
		p=c[k];
		while(ii<p){
			m[i] = min;
			ii+=1;
			i++;
		}
		min+=1;
		rr+=1;
		ii=0;
		k+=1;
	}
	i=0;
	printf("\n");
	while(i<n){
		cout << m[i];
		i++;
	}
	i=0;
	cout << "\n" << endl;
	printf("Which number ya wanna find in massive? \n");
	int f=0;
	cin>>f;
	int *find = &f;
	int *last;
	while(i<n){
		if(n-i==1) last = &m[i];
		i++;
	}
   	int *point = m;
   	cout << *point << endl;
   	cout << *last << endl;
   	//çàêîí÷èëè ôîðìèðîâàíèå óêàçàòåëåé, ìàññèâà, èñêîìîãî ÷èñëà
   	bool iwantnoodle = false;
   	r=0;
   	while(!iwantnoodle){
   		if(n%2==0){
   		    r=n/2;
   	    	i=r-1;
   	   		if(m[i]==f){
   	    		iwantnoodle = true;
   	    		break;
			}
   	    if(m[i]<f)point = &m[i+1];
   	    if(m[i]>f)last = &m[i];
		}
	}
	if(iwantnoodle)cout << "Number " << f << " exists in massive" << endl;
}
