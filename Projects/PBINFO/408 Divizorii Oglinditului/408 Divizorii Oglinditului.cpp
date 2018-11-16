#include "stdafx.h"
#include "iostream"

using namespace std;

int oglindit(int n) {
	int ogl = 0, uc;
	while (n) {
		uc = n % 10;
		n /= 10;
		ogl = ogl * 10 + uc;
	}
	return ogl;
}

int main()
{
	int n,nrD=1;

	cin >> n;

	for (int i = 1; i <=oglindit(n/2); i++) {
		if (oglindit(n) % i == 0) {
			nrD++;
		}
	}

	cout << nrD;

	system("PAUSE");
	return 0;
}