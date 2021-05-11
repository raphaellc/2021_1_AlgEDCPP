#include <iostream>
#include "ClasseGenerica.h"
#include <string>
int main() {
	ClasseGenerica<int, std::string> int_cg;
	ClasseGenerica<float, std::string> float_cg;
	ClasseGenerica<std::string, std::string> str_str_cg;
	int_cg.defineVG(10);
	float_cg.defineVG(5.5);
	int_cg.defineDG("inteira");
	float_cg.defineDG("float");
	str_str_cg.defineVG("classe de strings");
	str_str_cg.defineDG("todos os tipos são strings");

	std::cout << int_cg.obtemDG() << int_cg.obtemVG() << std::endl;
	std::cout << float_cg.obtemDG() << float_cg.obtemVG() << std::endl;
	std::cout << str_str_cg.obtemDG() << str_str_cg.obtemVG() << std::endl;

	system("pause");
	return 0;
}