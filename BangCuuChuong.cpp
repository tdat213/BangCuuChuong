#include <iostream>
using namespace std;

int main() {

/*	int n;
	cout << "Nhap so: ";
	cin >> n;
*/


	for(int n = 2; n <= 9; n++)



	if (n < 1 || n > 10) {
		cout << "So ko hop le!";
	}
	else {
		for (int i = 1; i <= 10; i++) {
			cout << n << " x " << i << " = " << n * i << endl;
		}
	}

	return 0;
}