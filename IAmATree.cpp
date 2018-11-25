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
	cout << n << endl;
	int m[n];
	int *p = m;
    cout << *p;
	
}
