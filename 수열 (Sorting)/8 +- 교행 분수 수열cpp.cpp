#include <iostream>

// S = 1/(2*3) - 2/(3*4) + 3/(4*5) - ..... + 49/(50*51)

int main()
{
	int K = 0; // counting 숫자
	int S = 0; // 이번 알고리즘의 총 값
	int SW = 0; // 스위치 변수; 0이면 +, 1이면 -

	while (K < 49)
	{
		K++; // K 값 증가
		int L = K / ((K + 1) * (K + 2)); // K 번째 항의 값을 저장함

		if (SW == 0) // 스위치 0인 경우, S에 합을 하고 스위치 값을 1로 전환
		{
			S = S + L;
			SW = 1;
		}
		else // 스위치가 1인 경우, S에 뺃셈을 하고 스위치 값을 0으로 전환
		{
			S = S - L;
			SW = 0;
		}
	}
	// 출력
	std::cout << S << std::endl;

	return 0;
}