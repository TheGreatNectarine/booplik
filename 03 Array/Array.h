#ifndef _ARRAY_
#define _ARRAY_

#include <iostream>
using namespace std;

typedef double Elem;
// ����� �������� ���� Elem
class Array
{
public:
//	���� ��� ������� ���������� ��������
	class BadArray{};
	explicit Array (size_t);
	~Array();

//	����������� �������� ������
	Elem& operator[] (size_t index);
//	�������� �������� ������
	const Elem& operator[] (size_t index) const;
//	����� ������ (��������)
	size_t size() const;
	void start() const {_pCurrent=_pElem;}
	bool finish() const { return _pCurrent == _pEnd;}
	const Array& operator++() const { _pCurrent++; return *this;}
//	const Array& operator++(int) const;
	const Elem& get() const { return *_pCurrent;}	

private:
	size_t _size;
	Elem * _pElem;
	mutable Elem * _pCurrent;
	Elem * _pEnd;

//	�������� � ������� �� �������� ��� ������
	bool operator== (const Array&) const;
	Array(const Array&);
	Array& operator= (const Array&);
};

ostream& operator<<(ostream &, const Array&);

#endif