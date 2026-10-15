#include <iostream>
using namespace std;

int main()
{
	int array[4][5] = { {10,11,12,13,14} , {20,21,22,23,24} , {30,31,32,33,34} , {40,41,42,43,44} };
	int rows = sizeof(array) / sizeof(array[0]);
	int cols = sizeof(array[0]) / sizeof(array[0][0]);
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			cout << array[r][c] << " ";
		}
		cout << endl;
}
