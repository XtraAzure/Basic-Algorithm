#include <iostream>

// 소인수 분해하여 결과를 출력하는 알고리즘을 만듬
// 출처: https://agileflame.tistory.com/5
int main()
{
	int num; // 입력받을 숫자
	int k = 2; // 2부터 1씩 증가하는 숫자

	std::cin >> num; // 숫자 입력

	while (num != 1) // num을 1이 될 때까지 while문으로 돌린다
	{ 
		if (num % k == 0) // 만일 나누기로 나머지가 0이면
		{ 
			std::cout << k << " "; // k를 출력합니다
			num /= k; // 그리고 num을 k로 나눕니다
		}
		else {
			k++; // 이후 k를 1씩 증가합니다
		}
	}
	return 0;
}