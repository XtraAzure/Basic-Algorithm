#include <iostream>

int main()
{
	// 다음 등비 수열에 대하여 10번째 항까지의 합을 구하는 알고리즘
	// 2, 6, 18, 54, 162, 486...

	int R = 3; // 공비 
	int A = 2; // 초항
	int S = A; // 저장되는 숫자
	int N = 2; // count용 숫자; 2인 이유는 이미 초항이 1번이라 그럼

	// N인 count하는 숫자가 10이 되기 전까지 등비수열을 진행
	while (N < 10)
	{
		A = A * R; // 현재 초항을 공비와 곱함
		S = A; // 저장되는 숫자에 현재 초항을 더함
		N = N + 1; // count하는 숫자를 1을 증가시킴
	}

	// 등비수열의 마지막 항을 출력함
	std::cout << S << std::endl;

	return 0;
}