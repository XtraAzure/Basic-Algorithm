#include <iostream>

int main()
{
	int T[10] = { 150, 160, 170, 180, 190, 200, 210,220,230,240 };
	int sum = 0;
	int N = 0;
	int i = 1;
	int avg = 0;

	while (i < 10)
	{
		if (T[i] > 200)
		{
			sum += T[i];
			N++;
		}
		i++;
	}

	avg = sum / N;

	std::cout << avg << std::endl;

	return 0;
}