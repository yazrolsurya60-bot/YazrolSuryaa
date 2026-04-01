#include <iostream>
using namespace std;

int main() {
	int angka = 3;
	for(int i = 0; i < 30; i++) {
		if (angka % 3 == 0)
		cout << angka << " ";
		++angka;
	}
	return 0;
}
