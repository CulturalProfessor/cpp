#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p, q;
	cout << "input no. of rows and columns of A:"
		 << " ";
	cin >> p >> q;
	int A[p][q];
	cout << "input elements of A:"
		 << "\n";
	for (int x = 0; x < p; ++x)
	{
		for (int y = 0; y < q; ++y)
		{
			cout << "enter element A" << x + 1 << y + 1 << ":";
			cin >> A[x][y];
		}
	}
	cout << "Matrix A is:" << endl;
	for (int x = 0; x < p; ++x)
	{
		for (int y = 0; y < q; ++y)
		{
			cout << A[x][y] << " ";
		}
		cout << endl;
	}
	int r, s;
	cout << "input no. of rows and columns of B:"
		 << " ";
	cin >> r >> s;
	int B[r][s];
	cout << "input elements of B:"
		 << "\n";
	for (int x = 0; x < r; ++x)
	{
		for (int y = 0; y < s; ++y)
		{
			cout << "enter element B" << x + 1 << y + 1 << ":";
			cin >> B[x][y];
		}
	}
	cout << "Matrix B is:" << endl;
	for (int x = 0; x < r; ++x)
	{
		for (int y = 0; y < s; ++y)
		{
			cout << B[x][y] << " ";
		}
		cout << endl;
	}
	// if (q != r)
	// {
	// 	cout << "Matrix Multiplication is not possible";
	// 	return 0;
	// }
	int mult[p][s];
	for (int x = 0; x < p; ++x)
	{
		for (int y = 0; x < s; ++y)
		{
			mult[x][y] = 0;
			for (int k = 0; k < q; ++k)
				mult[x][y] += A[x][k] * B[k][y];
		}
	}
	cout << "multiplied matrix is :" << endl;
	for (int x = 0; x < p; ++x)
	{
		for (int y = 0; x < s; ++y)
		{
			cout << mult[x][y] << " ";
			if (y == s - 1)
				cout << endl;
		}
	}
	return 0;
}