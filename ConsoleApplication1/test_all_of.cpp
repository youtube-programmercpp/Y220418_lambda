#include <algorithm>
#include <iostream>
int main()
{
	int a[] = { -1, 1, 20, 50, 99, 800 };
	
	if (std::all_of(a, std::end(a), [](int n) 
		{

			return n > 0;

		})) {
		//�S���� true �ł���c�S���� n > 0 �𖞂����c�S�������ł���
		std::cout << "�S�Ă���\n";
	}
	else {
		//�ǂꂩ��i�܂��͂���ȏ�j�� n > 0 �𖞂����Ȃ��c�ǂꂩ�͕��܂��͂O�ł���
		std::cout << "�ǂꂩ�� 0 ����\n";
	}
}
