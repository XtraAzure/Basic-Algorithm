#include <iostream>

int main()
{
	// 1부터 10까지 S = 1! + ... + 100!을 구하는 알고리즘

	int N = 1; // 숫자를 세는 숫자
	int F = 1; // 현재 수의 팩토리얼
	int S = 1; // 총 팩토리얼 합

	while (N < 10)
	{
		N++; // counting 숫자 증가

		F = F * N; // 다음 팩토리얼로 넘어감 (예시: 4!을 5!로)
		S = S + F; // 총 팩토리얼 합을 구함
	}

	std::cout << S << std::endl;
}