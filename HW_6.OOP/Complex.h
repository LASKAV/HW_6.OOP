#pragma once
#include <iostream>

/*
����������� ����� "����������� �����".
��������� ����� �������������� ����������� + � * ��� �������� � ��������� ����������� �����.
����������� �������� << ��� ������ �� ����� ������������ �����

*/

class Complex
{
	float RE;  // ����� A ���������� �������������� ������
	float IM;  // ����� B � ������ ������
public:
	Complex()
	{
		RE = NULL;
		IM = NULL;
	}
	Complex(const float temp_A, const float temp_B)
	{
		this->RE = temp_A;
		this->IM = temp_B;
	}
	~Complex()
	{

	}

	Complex operator + (const Complex& temp_com);
	Complex operator * (const Complex& temp_com);
	friend std::ostream& operator <<(std::ostream& ost, const Complex temp_com);
};

Complex Complex::operator + (const Complex& temp_com)
{
	Complex Result;
	Result.RE = this->RE + temp_com.RE;
	Result.IM = this->IM + temp_com.IM;
	return Result;
}
Complex Complex::operator * (const Complex& temp_com)
{
	Complex Result;
	Result.RE = (this->RE * temp_com.RE) - (this->IM * temp_com.IM);
	Result.IM = (this->IM * temp_com.RE) + (this->RE * temp_com.IM);
	return Result;
}
std::ostream& operator <<(std::ostream& ost, const Complex temp_com)
{
	ost << "Real part = " << float(temp_com.RE)
		<< "\nImaginary part = " << float(temp_com.IM) << "i"
		<< std::endl;

	return ost;
}