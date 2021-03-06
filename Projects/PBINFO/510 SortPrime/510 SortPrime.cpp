// #(510) (SortPrime)

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include <algorithm>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int n, v[1001];
bool ok;

bool prim(int nr) {
	int nrDivizori = 0;
	int i = 2;


	while (i <= nr / 2) {
		if (nr%i == 0) {
			nrDivizori++;
		}
		i++;

		if (nrDivizori > 0) {
			break;
		}
	}


	if (nrDivizori == 0 && nr != 1 && nr != 0) {
		return true;
	}
	else {
		return false;
	}
}

void bubbleSort(int arr[], int n) {
	bool swapped = true;
	int j = 0;
	int tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	bubbleSort(v, n);

	for (int i = 0; i < n; i++) {
		if (prim(v[i])) {
			cout << v[i] << " ";
		}
	}

	system("PAUSE");
	return 0;
}