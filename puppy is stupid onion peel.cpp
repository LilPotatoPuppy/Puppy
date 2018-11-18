#include <iostream>
#include<fstream>
using namespace std;

int main(){
	int a;
	int b;
	ifstream puppy;
	puppy.open("E:\input.txt");
	puppy >> a;
	cout<<"number in input file is"<< endl;
	cout << a << endl;
	cout<<"Type number ya wanna put in output file"<< endl;
	cin >> b;
	ofstream peel;
	peel.open("E:\output.txt");
	peel << b;
}
