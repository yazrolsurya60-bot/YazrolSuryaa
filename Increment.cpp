#include <iostream>
using namespace std;
int main () {
	
	// Increment Prefix :
	int x = 1;
	int y = ++x;
	
		cout << "x = " << x << ", y = " << y;
		
	//Increment Postfix :
	int z = 6;
	int a = z++;
	
	cout << "z = " << z << ", a = " << a << endl;
}
