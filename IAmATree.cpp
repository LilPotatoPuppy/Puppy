#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int n=0; // m[n]
	int r=0; //резерв
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
	ifstream lel;
	lel.open("input.txt");
	int *last;
	while(i<n){
		lel >> m[i];
		if(n-i==1)*last = m[i];
		i++;
	}
	int *p = m;
    cout << *p << endl;
	cout << *last << endl;
	printf("Which number ya wanna find in massive? \n");
	int find=0;
	cin>>find;
	bool noodle = false;
	r=0;
	/*if(n%2==0){
		r=n/2;
		i=r-1;
		m[i]==find;
		if(m[i]>find){
			*last=m[i];
		}
	}*/
}
