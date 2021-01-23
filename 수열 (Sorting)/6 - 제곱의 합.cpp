#include <iostream>

// S = (100x1)^2 + (99x2)^2 + ... (2x99)^2 + (1x100)^2을 구하는 알고리즘

int main()
{
	int S = 0; // 총 합을 저장하는 숫자
	int A = 0; // counting 하는 숫자
	int B = 0; // (B * A)에 B를 위치하는 숫자
	int C = 0; // C는 (B*A)의 곱을 나타내는 숫자

	while (A < 100)
	{
		A++; // counting 숫자 증가
		B = 101 - A; // B 숫자를 세팅을 합니다 (알고리즘 예시의 첫 숫자 위치)
		C = A * B; // C 숫자 값을 구합니다 
		C = C * C; // C를 제곱합니다
		S = S + C; // S를 C값을 더하면서 저장합니다
		
	}

	std::cout << S << std::endl;

	return 0;
}