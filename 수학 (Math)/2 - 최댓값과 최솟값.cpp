#include <iostream>

int main()
{
	// ���� ���� ���� �л��� ���� ���� ���� ���� ������ ã�� ��

	int M = 0; // ���� �ְ��� �����ϴ� ����
	int i = 0; // counting �ϴ� ����

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