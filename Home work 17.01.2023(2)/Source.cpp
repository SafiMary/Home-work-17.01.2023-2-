#include <iostream>
#include <windows.h>


class  MyException {
public:
	MyException(): _whatStr("���������!������!") {}
	const std::string& what() {
		return _whatStr;
	}
	
	void func(int num) {
		if (num > 5) {
	throw what();
		}
		std::cout << "�������� ������ 5\n";
	}
private:
	std::string _whatStr;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� 1\n";
	//���������� � ��� ������, ����� �� ������ �������� ������.
	
		try {
			while (true) {
				new int[100000000ul];
			}
		}
		catch (const std::bad_alloc& e) {
			std::cerr << "������: " << e.what() << '\n';
		}

		std::cout << "������� 2-4\n";

		MyException a;
		int p = 6;

		try {
			std::cout << "������� ������������ �������\n" << std::endl;
			 a.func(p);
			std::cout << "������� ������������\n" << std::endl;
		}
		catch (const std::string msg) {//��� ����������� ��� �� ��� � � throw
			std::cerr << msg << std::endl;
		}
		



	}

