<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
	int ujian[] = {85, 90, 78, 92, 88};
	int indeks = 0;
	int x = 1;
	
	while(ujian[indeks] >= 4 && x <=  5) {
		cout << "Nilai ke-"<< x++ << ": " << ujian[indeks++] << endl;
	}
}
