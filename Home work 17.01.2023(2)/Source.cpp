#include <iostream>
#include <windows.h>


class  MyException {
public:
	MyException(): _whatStr("Осторожно!Ошибка!") {}
	const std::string& what() {
		return _whatStr;
	}
	
	void func(int num) {
		if (num > 5) {
	throw what();
		}
		std::cout << "Значение меньше 5\n";
	}
private:
	std::string _whatStr;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Задание 1\n";
	//Вызывается в том случае, когда не удаётся выделить память.
	
		try {
			while (true) {
				new int[100000000ul];
			}
		}
		catch (const std::bad_alloc& e) {
			std::cerr << "Ошибка: " << e.what() << '\n';
		}

		std::cout << "Задание 2-4\n";

		MyException a;
		int p = 6;

		try {
			std::cout << "Попытка использовать функцию\n" << std::endl;
			 a.func(p);
			std::cout << "Функция использована\n" << std::endl;
		}
		catch (const std::string msg) {//тип указывается тот же что и в throw
			std::cerr << msg << std::endl;
		}
		



	}

