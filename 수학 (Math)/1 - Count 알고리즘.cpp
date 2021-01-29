#include <iostream>

int main()
{
	int JUMSU[10] = { 50,55,60,65,70,75,80,85,90,95 };
	int cnt = 0;
	int i = 0;

	while (i < 10)
	{
		if (JUMSU[i] > 80)
		{
			cnt++;
		}
		i++;
	}

	std::cout << cnt << std::endl;

	return 0;
}