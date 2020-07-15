#include <iostream>

/* std::cin ����ϱ� ignore(), clear(), fail() */

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter a integer number : ";
		int x;
		cin >> x;						  // cin������ �Է��� buffer�� �ִ´�.

		if (std::cin.fail())			  // cin ������ 1�� ��ȯ�ϰ� �ƴϸ� 0�� ��ȯ
		{
			std::cin.clear();			  // cin��ü�� "���� ���� �÷���"�� �ʱ�ȭ���Ѽ� cin ���� ����� �����۵� �ϵ�����!

			std::cin.ignore(32767, '\n'); // buffer ����, '\n'���� �����Ѵ�.
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n'); 
			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{
		cout << "Enter an operator (+,-) :";
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' | op == '-')
			return op;
		else
			cout << "Invaild operator, please try again" << endl;
	}
	
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
	{
		cout << "Invaild operator" << endl;
	}
}

int main()
{
	int   x = getInt();
	char op = getOperator();
	int   y = getInt();

	printResult(x, op, y);

	return 0;
}