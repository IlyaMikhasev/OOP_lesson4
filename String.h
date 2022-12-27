#pragma once
#include <iostream>
class String
{
public:
	String(const char* data);
	~String();
	String(String& other);//����������� �����������
	String& operator=(String& other);//��� ������������ str = str;
	String& operator=(const char* other);//��� ������������ str = "abc";
	//String operator+(String& other);
	char operator[](size_t index);
	friend std::ostream& operator<<(std::ostream& os, String& s){
		for (size_t i = 0; i < strlen(s._data); i++){
			os << s[i];
		}
		return os;
	}
private:
	char* _data = nullptr;
};

