#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int i=0;
	int n=0;
	int r=0;
	ifstream puppy;
	puppy.open("C:\\help\\input.txt");
	while(!puppy.eof()){//��������� ����� �� �������
		puppy>>r;
		n+=1;
	}
	int m[n];
	puppy.close();
	puppy.open("C:\\help\\input.txt");//��������� ����� � �������
	int min=INT_MAX;
	int max=-min;
   	while(!puppy.eof()){
	    puppy>>m[i];
	    if(m[i]<0 || m[i]>1000)cout << "Number" << m[i] << "Is too big or too small"  << endl;
		cout << m[i] << endl;
		if(m[i]>max)max=m[i];//���������� ��� � ��� �����
		if(m[i]<min)min=m[i];
		i+=1;
	}
	r=min;//������ (� r ����������� ��������)
	int rr=r-1;//������� �� i ����� �������������
	i=0;
	int g=max+1-min;
	int c[g];//������ � ���-��� ���� 11122233 max+1-min=3;
	//� ��� �� ��� - �������� ��������� �����
	int k=0;//������������ i � m[i]
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
	int p=0; //������ �[k]
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
}
