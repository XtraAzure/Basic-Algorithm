#include <iostream>

// ���������� ��Ÿ���� �˰���

int main()
{
	int A1 = 2; // ����
	int D = 6; // ����
	int S = A1; // ���� �����ϴ� ����
	int N = 2; // count�ϴ� ����
	int AN = 0; // ���� ������ N�� ����

	while (N <= 200)
	{
		AN = A1 + (N - 1) * D; // ���������� ����
		S = S + AN; // ���� AN��ŭ ���ؼ� ����

		// ���� N�� 1�� ������Ŵ
		N++;
	}

	// �� ���� �����
	std::cout << S << std::endl;

	return 0;
}