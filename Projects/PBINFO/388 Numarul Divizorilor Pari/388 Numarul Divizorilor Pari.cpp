// #(nr) (nume problema)

#include "stdafx.h"
#include "iostream"
#include "fstream"

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int main()
{
	int n,nr=0;

	cin >> n;

	for (int i = 2; i < n; i+=2) {
		if (n%i == 0) {
			nr++;
		}
	}

	cout << nr;

	system("PAUSE");
	return 0;
}