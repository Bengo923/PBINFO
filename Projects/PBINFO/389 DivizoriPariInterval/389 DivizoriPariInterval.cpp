#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int n1, n2, nr, min, max = 0, maxNr = 1;

	cin >> n1 >> n2;

	min = n2;

	for (int i = n1; i <= n2; i++) {
		nr = 1;
		if (i % 2 == 0)
			for (int j = 2; j <= i / 2; j += 2) {
				if (i%j == 0) {
					nr++;
				}
			}
		if (nr > maxNr) {
			maxNr = nr;
			max = 0;
			min = n2;
		}
		if (nr == maxNr) {
			if (i > max) {
				max = i;
			}
			if (i < min) {
				min = i;
			}
		}
	}

	cout << maxNr << " " << min << " " << max;

	system("PAUSE");
	return 0;
}