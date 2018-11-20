#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int i=0;
	int n=0;
	int r=0;
	ifstream puppy;
	puppy.open("\\help\\input.txt");
	while(!puppy.eof()){//n?eouaaai ?enei ye ianneaa
		puppy>>r;
		n+=1;
	}
	int m[n];
	puppy.close();
	puppy.open("\\help\\input.txt");//n?eouaaai ?enea a ianneaa
	int min=INT_MAX;
	int max=-min;
   	while(!puppy.eof()&&i<n){
	    puppy>>m[i];
	    if(m[i]<0 || m[i]>1000)cout << "Number" << m[i] << "Is too big or too small"  << endl;
		cout << m[i] << endl;
		if(m[i]>max)max=m[i];//iaoi?aaiea iei e iao ?enea
		if(m[i]<min)min=m[i];
		i+=1;
	}
	r=min;//?aca?a (n r auiieiy?ony iia?aoee)
	int rr=r-1;//n?ao?ee oe i aoaao caaaenoaiaaii
	i=0;
	int g=max+1-min;
	int c[g];//iannea n eie-aii oeo? 11122233 max+1-min=3;
	//n iao ii iei - aeaiacii n?aaiaiey ?enae
	int k=0;//aeuoa?iaoeaa i a m[i]
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
	k=0;
	
	while(k<g){
		printf("c[%d]=%d \n",k ,c[k]);
		k+=1;
	}
	rr=0;
	k=0;
	int p=0; //?aca?a n[k]
	i=0;
	ofstream peel;
    peel.open("\\help\\output");
	while(rr<g){
		p=c[k];
		while(i<p){
			peel << min;
			i+=1;
		}
		min+=1;
		rr+=1;
		i=0;
		k+=1;
	}
}
