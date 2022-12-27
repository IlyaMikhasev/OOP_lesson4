#include "String.h"
#include <cstring>
String::String(const char* data):_data(new char[strlen(data)+1]) {//+1 для добовления в строку \0
	std::cout << "String constraction activate\n";
	strcpy(_data, data);
}

String::~String(){
	std::cout << "Destraction \n";
	if (_data != nullptr)//лучше проверять на нулевой указатель , возможно непредсказуемое поведение
		delete[] _data;
}

String::String(String& other) :_data(new char[strlen(other._data)+1]) {
	std::cout << "Constraction string activate\n";
	strcpy(_data, other._data);
}

String& String::operator=(String& other) {
	std::cout << "operator= was called\n";
	if (this != &other){
		if (_data != nullptr) {
			delete[] _data;
		}
		_data = new char[strlen(other._data) + 1];
		strcpy(_data, other._data);
	}
	return *this;
}



String& String::operator=(const char* other){
	std::cout << "operator = \n";
	if (_data != other) {
		delete[] _data;
	}
	_data = new char[strlen(other) + 1];
	strcpy(_data, other);
	return *this;
}
//String String::operator+(String& other){
//	char* newDATA = new char[strlen(_data) + strlen(other._data) + 1];
//	strcpy(newDATA, _data);//копирование строки
//	strcat(newDATA, other._data);//канкотенация
//	String resStr(newDATA);
//	delete[] newDATA;//обьязательно не забыть удалить выделенную память
//	return resStr;
//}
//s[i]==s.operator[i]
char String::operator[](size_t index){
	return _data[index];
}

