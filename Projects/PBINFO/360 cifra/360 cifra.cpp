// #(nr) (nume problema)

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int n, x, uc, invers = 0, nr = 0;
	cin >> n >> x;

	while (n!=0) {
		uc = n % 10;

		if (uc != x) {
			invers = invers * 10 + uc;
		}
		n /= 10;
	}

	if (invers == 0 && n!=0) {
		cout << -1;
		return 0;
	}

	while (invers) {
		nr = nr * 10 + invers % 10;
		invers /= 10;
	}

	cout << nr;

	system("PAUSE"); // ignora asta ms anticipat
	return 0;
}
