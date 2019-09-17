#include <iostream>
using namespace std;

void quicksort ( int arr [ ], int low, int high );
int partition ( int arr [ ], int low, int high );
void swap ( int *a, int *b );

int main ( )
{
	const int size = 50;
	int arr [ size ];
	cout << "Enter elements of array" << endl;
	for ( int i = 0; i < size; i++ )
	{
		cin >> arr [ i ];
	}
	cout << "Array is :";
	for ( int j = 0; j < size; j++ )
	{
		cout << "\t" << arr [ j ];
	}
	int low = 0, high = size - 1;
	quicksort ( arr, low, high );
	cout << endl << "Array after sorting :";
	for ( int k = 0; k < size; k++ )
	{
		cout << "\t" << arr [ k ];
	}
	return 0;
}

void quicksort ( int arr [ ], int low, int high)
{
	int pi;
	if ( low < high )
	{
		pi = partition ( arr, low, high );
		quicksort ( arr, low, pi - 1 );
		quicksort ( arr, pi + 1, high );
	}

}

int partition ( int arr [ ], int low, int high )
{
	int pivot;
	pivot = arr [ high ];
	int i = low - 1;
	for ( int j = low; j <= high - 1; j++ )
	{
		if ( arr [ j ] < pivot )
		{
			i++;
			swap ( &arr [ i ], &arr [ j ] );
		}
	}
	swap ( &arr [ i + 1 ], &arr [ high ] );
	return i + 1;
}

void swap ( int *a, int *b )
{
	int t = *a;
	*a = *b;
	*b = t;
}
