#include <iostream>
template<class T>void f(const T& fn)
{
	fn();
}
int main()
{
	int n = 12345;
	int m = 500;

	f([n, m]()
		{
			std::cout << "�����_���̒�����ϐ��ɃA�N�Z�X: n = " << n
				<< ", m = " << m << "\n";
		});
}
