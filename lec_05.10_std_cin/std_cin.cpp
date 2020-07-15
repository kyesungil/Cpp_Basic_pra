#include <iostream>

/* std::cin 사용하기 ignore(), clear(), fail() */

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter a integer number : ";
		int x;
		cin >> x;						  // cin에서는 입력을 buffer에 넣는다.

		if (std::cin.fail())			  // cin 오류시 1을 반환하고 아니면 0을 반환
		{
			std::cin.clear();			  // cin객체의 "내부 상태 플래그"를 초기화시켜서 cin 관련 기능이 정상작동 하도록함!

			std::cin.ignore(32767, '\n'); // buffer 비우기, '\n'까지 무시한다.
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