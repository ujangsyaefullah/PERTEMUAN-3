#include <iostream>
using namespace std;

int a, b;
//prototype
int tambahkan(int a, int b);

//program utama
int main () {
	cout<<"masukan Nilai A : ";
	cin>>a;
	cout<<"masukan Nilai B : ";
	cin>>b;
	cout<<"Hasil : " <<tambahkan (a,b) <<endl;
	return 0;
	}
	
	int tambahkan (int a, int b) {
	return a + b;
	}