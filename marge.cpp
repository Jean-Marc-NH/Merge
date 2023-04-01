#include <iostream>

using namespace std;

void merge(int* p, int* q)
{

	int* end = (q - p) + q;
	int aux = 0;

	for (; (p + 1) < q; p++)
	{

		if (*p > *(p + 1)) 
		{
			aux = *p;
			*p = *(p + 1);
			*(p + 1) = aux;
		}
	}

	aux = 0;

	cout << *q;

	for (; (q + 1) < end; q++)
	{
		if (*q > *(q + 1)) 
		{
			cout << *(q + 1);
			aux = *q;
			*q = *(q + 1);
			*(q + 1) = aux;
		}
	}

	for (; p < q && q < end; p++, q++)
	{
		if (*p > *q)
		{
			aux = *p;
			*p = *q;
			*q = aux;
		}
	}

}

int main()
{

	int A[10]{ 8, 6, 8, 40, 30, 87, 97, 23, 63, 99 };
	int* x = A;
	int* y = A+5;


	cout << "Array: ";

	for (int* p = A; p < A + 10; p++) {
		cout << *p << "|";
	}

	cout << endl << "X: " << *x << "   Y: " << *y << endl;

	merge(x, y);

	cout << "Megerge: ";

	for (int* p = A; p < A + 10; p++) {
		cout << *p << "|";
	}

}


