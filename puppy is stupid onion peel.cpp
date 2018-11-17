#include <iostream>
#include<fstream>
using namespace std;

int main(){
	int a;
	ifstream puppy;
	puppy.open("input.txt");
	puppy >> a;
	cout << a << endl;
	
}
