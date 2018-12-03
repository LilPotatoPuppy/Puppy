#include <iostream>
#include <fstream>
using namespace std;
bool dumbie(int f, int *point, int *last){
	int middle=(*last-*point)/2;
	if(f>middle)return dumbie(f, point, last=&middle);
	if(f<middle)return dumbie(f, point=&middle, last);
	if(f==middle)return true;
	if(f>*last)return false;
	return false;
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
	int f;
	cin>>f;
	if(!dumbie)printf("Number does not exist in massive");
        if(dumbie)printf("Number exists in massive");
}
