#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = a--;
	
	int y = 20;
	int z = --y;

//Post-decrement: b mendapatkan nilai a sebelum a di kurangi

	cout << "Nilai a setelah operasi: " << a << endl;
	cout << "Nilai b setelah operasi: " << b << endl;
	
	cout<<endl;

//Pre-decrement: b mendapatkan nilai a setelah a dikurangi

	cout << "Nilai y setelah operasi: " << y << endl;
	cout << "Nilai z setelah operasi: " << z << endl;
	 
	return 0;
}
