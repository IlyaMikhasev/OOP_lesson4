#include <iostream>
#include "String.h"
//�� ��� �������� ����������� ��������� +,-,*, � �� �������� ���,������� ����� ��� ��������� ���� ������������
int main() {
	setlocale(LC_ALL, "Russian");
	String str("abc");
	String str1(str);
	std::cout << str1 << '\n';	
	String str2 = "Baaloc";
	str1 = str2;
	std::cout << str1 << '\n';
	String str3("Alice");
	//str = str1 + str3;
	std::cout << str << '\n';
	return 0;
}