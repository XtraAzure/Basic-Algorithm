#include <iostream>

// ���μ� �����Ͽ� ����� ����ϴ� �˰����� ����
// ��ó: https://agileflame.tistory.com/5
int main()
{
	int num; // �Է¹��� ����
	int k = 2; // 2���� 1�� �����ϴ� ����

	std::cin >> num; // ���� �Է�

	while (num != 1) // num�� 1�� �� ������ while������ ������
	{ 
		if (num % k == 0) // ���� ������� �������� 0�̸�
		{ 
			std::cout << k << " "; // k�� ����մϴ�
			num /= k; // �׸��� num�� k�� �����ϴ�
		}
		else {
			k++; // ���� k�� 1�� �����մϴ�
		}
	}
	return 0;
}