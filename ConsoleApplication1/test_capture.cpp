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
			std::cout << "ラムダ式の中から変数にアクセス: n = " << n
				<< ", m = " << m << "\n";
		});
}
