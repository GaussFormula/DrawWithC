#include <iostream>
using std::cout;
const int width = 20;
const int height = 20;
int f(int x, int y);
int main()
{
	int	x, y;
	for (y = 0; y < width; y++)
	{
		for (x = 0; x < height; x++)
		{
			cout << (f(x, y) ? "* " : "  ");
		}
		cout << std::endl;
	}
	system("pause");
	return 0;
}
int f(int x, int y)
{
	return (x - 10)*(x - 10) + (y - 10)*(y - 10) < 8 * 8;
}