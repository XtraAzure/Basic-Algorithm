#include <iostream>

// 피보나치 수열 100번째 항까지의 합을 구하는 알고리즘
int main()
{
	int A = 1; // 초기값1
	int B = 1; // 초기값2
	int S = A + B; // 피보나치 합
	int N = 2; // count하는 숫자
	int C = 0; // A + B를 저장하는 숫자

	// 피보나치 수열이 100번 될 때까지
	while (N < 100)
	{
		// A + B를 더합니다
		C = A + B;

		// 그리고 S에 더하면서 저장을 합니다
		S = S + C;
		
		// 초기값을 다음 값으로 저장으로 저장합니다
		A = B;
		B = C;

		// count하는 숫자인 N을 1씩 증가합니다
		N = N + 1;
	}

	// 피보나치 총 합을 출력합니다
	std::cout << S << std::endl;

	return 0;
}