#include <iostream>

// 등차수열을 나타내는 알고리즘

int main()
{
	int A1 = 2; // 초항
	int D = 6; // 공차
	int S = A1; // 합을 보관하는 변수
	int N = 2; // count하는 숫자
	int AN = 0; // 등차 수열의 N번 숫자

	while (N <= 200)
	{
		AN = A1 + (N - 1) * D; // 등차수열의 공식
		S = S + AN; // 합을 AN만큼 더해서 저장

		// 이후 N을 1씩 증가시킴
		N++;
	}

	// 총 합을 출력함
	std::cout << S << std::endl;

	return 0;
}