// #163 stergere

#include "stdafx.h"
#include "iostream"
#include "fstream"

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int n,v[100];

int main()
{
	fin >> n;

	for (int i = 0; i < n; i++)
	{
		fin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		fout << v[i];
	}

	return 0;
}

