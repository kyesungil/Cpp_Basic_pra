#include <iostream>
/* 6.13 �����Ϳ� const */
using namespace std;

int main()
{
	/*
		1. const �����̸� const ������ ������ �������
	*/
	const int value = 5;
	const int* ptr = &value;
	// *ptr = 6; �ٲ��� ����
	



	/*
		2. �����ͷδ� �ٲ��� �������� �����δ� ���� �ٲܼ� �ִ�
	*/
	int val = 5;
	const int* ptr_v = &val;
	// *ptr_v = 6; �Ұ���
	val = 6; // ����




	/* 
		3. 
		const int* ptr_1 = &value1;
		ptr_1�� ����Ű�� �ִ� ���� �ٲ��� �ʰڴٴ� ��
		ptr_1 ����Ǵ� �ּҰ��� �ȹٲٴ°��� �ƴ�
	*/
	int value1 = 5;
	const int* ptr_1 = &value1;
	// *ptr_1 = 7; �Ұ���

	int value2 = 6;
	ptr_1 = &value2;




	/*
		4. ������ ���
		int *const ptr_s = &s;
		ptr_s(pointer)�� �ִ� �ּҰ��� �ٲܼ� ����
	*/
	int s = 5;
	int *const ptr_s = &s;

	*ptr_s = 10;
	cout << *ptr_s << endl;
	
	int ss = 8;
	// ptr_s = &ss; �Ұ���




	/*
		5. const int* const ptr_k = &k;
		���� �ּҰ��� �ٲܼ� ����.
	*/
	int k = 5;
	const int* const ptr_k = &k;


	return 0;
}