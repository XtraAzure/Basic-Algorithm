#include <iostream>

// S = 1 - 2 + 3 - 4 + ..... - 100�� ���� ���ϴ� �˰���

int main()
{
	int N = 0; // counting �ϴ� ����
	int S = 0; // ���� �ڿ��� ������ ��

	while (N < 100)
	{
		N++; // N�� �����ϰ� S�� +�� ����
		S = S + N;
		N++; // N�� �����ϰ� S�� -�� ����
		S = S - N;
	}

	std::cout << S << std::endl;

	// S = 5 - 10 + 15 - 20 + 25 ... - 100

	int S1 = 0; // ���� 5���� ������ ��
	int SW = 1; // ����ġ ����
	int NN = 1; // counting �ϴ� ����

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