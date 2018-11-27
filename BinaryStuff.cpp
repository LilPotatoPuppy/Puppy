#include <iostream>
#include <fstream>
using namespace std;
bool dumbie(int f,  int n, int m[], int i, int *point, int *last){
	n=n/2;
	i=n-1;
	if(f>m[i])return dumbie(f, n, &m[n], i, point+=n, last);
	if(f<m[i])return dumbie(f, n, &m[n], i, point, last+=n);
	if(f==m[i])return true;
	if(dumbie)printf("Number exists in massive");
	if(!dumbie)printf("Number does not exist in massive");
	return true;
}
int main(){
	int i=0;
	ifstream noodle;
	int r=0;
	noodle.open("input.txt");
	int n=0;
	while(!noodle.eof()){
		noodle >> r;
		i++;
		n++;
	}
	int m[n];
	noodle.close();
	ifstream iamtired;
	iamtired.open("input.txt");
	i=0;
	int *last;
	while(i<n){
		iamtired >> m[i];
		cout << m[i];
		i++;
		if(n-i==1) last=&m[i];
	}
	cout << endl;
	int *point=m;
	cout << *point << endl;
	cout << *last << endl;
	printf("Which number ya wanna find in massive? \n");
	int f=0;
	cin>>f;
    int *find = &f;
    iamtired.close();
}

