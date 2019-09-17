#include<iostream>
using namespace std;
int main()
{
	int a[2][3];
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 3; j++)
		{
		cout << "Input a " << i << " " << j << " : ";
		cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "Matrix a\n";
	for(int i = 0 ; i < 2 ; i++)
	{
		cout << endl;
		for(int j = 0 ; j < 3; j++)
		{
		cout <<  a[i][j] << "\t" ;
		}
	}
	cout << endl;
	cout << "\nMatrix a Transpose\n";
	for(int j= 0 ; j < 3; j++)
	{
		cout << endl;
		for(int i = 0 ; i < 2 ; i++)
		{
			cout << a[i][j] << "\t";
		}
	}
	cout << endl;
	return 0 ;
}