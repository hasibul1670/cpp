#include <iostream>
using namespace std;

int main() {

	int myNumbers[5] = {10, 20, 30, 40, 120};
	for (int i : myNumbers) {
		cout << i << "\n";
	}
}