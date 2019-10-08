#include <iostream>
using namespace std;

#define ROW 3
#define COLUMN 3

void insert_element ( int arr [ ] [ COLUMN ] );
void print_array ( int arr [ ] [ COLUMN ] );
bool isBinaryMatrix ( int arr [ ] [ COLUMN ] );

int main ( )
{
	int arr [ ROW ] [ COLUMN ];
	insert_element ( arr );
	print_array ( arr );
	cout << "Is it Binary matrix?" << endl;
	if ( isBinaryMatrix ( arr ) )
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}

void insert_element ( int arr [  ] [ COLUMN ] )
{
	cout << "Enter elements of array" << endl;
	for ( int i = 0; i < ROW; i++ )
	{
		for ( int j = 0; j < COLUMN; j++ )
		{
			cin >> arr [ i ] [ j ];
		}
	}
}

void print_array ( int arr [ ] [ COLUMN ] )
{
	cout << "Array is:";
	for ( int i = 0; i < ROW; i++ )
	{
		for ( int j = 0; j < COLUMN; j++ )
		{
			cout << "\t" << arr [ i ] [ j ];
		}
	}
	cout << endl;
}

bool isBinaryMatrix ( int arr [ ] [ COLUMN ] )
{
	for ( int i = 0; i < ROW; i++ )
	{
		for ( int j = 0; j < COLUMN; j++ )
		{
			if ( ! ( arr [ i ] [ j ] == 1 || arr [ i ] [ j ] == 0 ) )
			{
				return false;
			}
		}
	}
	return true;
}