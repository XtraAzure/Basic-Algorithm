#include <iostream>

int main()
{
	// 영어 시험 만점 학생중 가장 높은 수학 시험 점수를 찾는 것

	int M = 0; // 수학 최고점 저장하는 숫자
	int i = 0; // counting 하는 숫자

	int ENG[10] = { 90, 95, 100, 100, 100, 100, 100, 100, 100, 100 };
	int MATH[10] = { 60, 65, 70, 75, 80, 85, 90, 95, 100 };

	while (i < 10)
	{
		if (ENG[i] == 100)
		{
			if (M < MATH[i])
			{
				M = MATH[i];
			}
		}
		i++;
	}

	std::cout << M << std::endl;

	return 0;
}