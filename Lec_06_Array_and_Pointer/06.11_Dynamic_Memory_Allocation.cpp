#include <iostream>
/* 6.11 �޸� ���� �Ҵ� new�� delete */
using namespace std;

int main()
{
										  // int var = 7 �� ���� ���
	int* ptr = new (std::nothrow) int{7}; // os���� 4byte(int)�Ҵ� ������, �� �޸� �ּҸ� �˷��ش�.
	int* ptr2 = ptr;

	delete ptr;							  // os���� �޸𸮸� �����ش�.
	ptr  = nullptr;						  // run-time error ����
	ptr2 = nullptr;
	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;	// �ּҰ� ���
		cout << *ptr << endl;   // run-time error
	}


	// �ڡڡ� Memory leak (�޸� ����)
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	
	return 0;
}


/*
	�ڡڡ� �޸� �Ҵ� 3����

	1. static memory allocation
	   ���������� Ȥ�� static������ ���� �ѹ������ ���α׷��� ������ ���� 
	   ��� �޸𸮸� �����ִ� �͵��� �ǹ��Ѵ�.

	 - ��ǻ�� ���̾𽺿��� static�̶�� ���� ������ ���� ���� ��(=������ Ÿ��)�� �Ͼ�� ���� ���Ѵ�. 
	   Static memory allocation�� ���α׷��� ����Ǳ� ���� �̸� �޸𸮸� �Ҵ��ϴ� ���� ���Ѵ�. 
	   Ǯ� ���� ������ Ÿ�ӿ� code section, data section, BSS section�� �޸𸮿� �̸� �ö󰡴� ���� ���Ѵ�
	   Static allocation�� Ư¡�� �������� life cycle�� ���α׷��� ���۰� ���ᰡ ��ġ�ϴ� ���̴�.


	2. �ڵ� memory allocation(�ڵ� �޸� �Ҵ�) 
	   ������ �����ϰų� �����迭�� �������� ��, �� ������ ������ ���� �������
	   �ٽ� �޸𸮰� os�� �Ҵ��� �ȴ�.
	   
	   ���� �޸� �Ҵ�
	   ����� ũ��� �����Ǹ�, �߰��� ũ�⸦ �ٲ� �� ����.
	   �Ҹ��Ҷ� �ڵ����� �ü���� �޸𸮸� ȸ���Ѵ�.

	 - stack�� �Ҵ�ȴ�. stack memory�� �۴�.


	3. Dynamic memory allocation(���� �޸� �Ҵ�)
	 - heap�� �Ҵ�. heap�� stack�� ���ؼ� �ξ� ũ��.


	
*/