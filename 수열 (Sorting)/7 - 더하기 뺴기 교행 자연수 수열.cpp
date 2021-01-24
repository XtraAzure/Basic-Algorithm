#include <iostream>

// S = 1 - 2 + 3 - 4 + ..... - 100의 값을 구하는 알고리즘

int main()
{
	int N = 0; // counting 하는 숫자
	int S = 0; // 교행 자연수 수열의 합

	while (N < 100)
	{
		N++; // N을 증가하고 S를 +인 상태
		S = S + N;
		N++; // N을 증가하고 S를 -인 상태
		S = S - N;
	}

	std::cout << S << std::endl;

	// S = 5 - 10 + 15 - 20 + 25 ... - 100

	int S1 = 0; // 교행 5배율 수열의 합
	int SW = 1; // 스위치 변수
	int NN = 1; // counting 하는 숫자

	while (NN < 100)
	{
		NN = 5 * NN;
		
		if (SW == 1)
		{
			S1 = S1 + NN;
		}
		else
		{
			S1 = S1 - NN;
		}
		SW = -SW;
	}

	std::cout << S1 << std::endl;
	

	return 0;
}