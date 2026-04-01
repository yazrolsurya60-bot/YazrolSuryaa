#include <iostream>
using namespace std;

int main() {
	int angka;
	
	cout << "Masukkan angka awal: ";
	cin>>angka;
	
	while (angka) {
		cout<<angka--<<endl;
	}
	cout<<"LIFTOFF!"<<endl;
	return 0;
}
