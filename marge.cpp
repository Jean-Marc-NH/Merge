#include <iostream>

using namespace std;

void merge(int* p, int* q)
{

	int* end = (q - p) + q;
	int aux = 0;
	int* r = p;

	for (; p < q; p++)
	{
		r = p;
		for (;r < end; r++)
		{
			if (*r < *p)
			{
				aux = *p;
				*p = *r;
				*r = aux;
			}
		}
	}
	for (; q < end; q++)
	{
		r = q;
		for (; r < end; r++)
		{
			if (*r < *q)
			{
				aux = *q;
				*q = *r;
				*r = aux;
			}
		}
	}
}

int main()
{

	int A[10]{ 2, 10, 8, 0, 30, 7, 97, 23, 63, 99 };
	int* x = A;
	int* y = A + 5;


	cout << "Array: ";

	for (int* p = A; p < A + 10; p++) {
		cout << *p << "|";
	}

	cout << "\n";

	merge(x, y);

	cout << "Merge: ";

	for (int* p = A; p < A + 10; p++) {
		cout << *p << "|";
	}

}

