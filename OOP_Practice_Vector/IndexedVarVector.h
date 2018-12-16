#include <iostream>
using namespace std;
//1. ����������� ����, �� �, � ���� ��������� ����� 2 � 3
class IndexedVarVector
{
private:
	size_t _n;
	double * _v;
public:
//3. ������ ����������� ��������� �����
//	explicit IndexedVarVector(size_t n=10);
	IndexedVarVector(size_t n=10);
	IndexedVarVector(const IndexedVarVector&);
	~IndexedVarVector();
	size_t size() const { return _n;}
	IndexedVarVector& operator=(const IndexedVarVector&);

	double operator[](size_t) const;
	double& operator[](size_t);
};

	ostream& operator<<(ostream&, const IndexedVarVector&);
	void fill(IndexedVarVector& v);
	bool operator==(const IndexedVarVector&, const IndexedVarVector&);
	bool operator!=(const IndexedVarVector&, const IndexedVarVector&);
	double operator*(const IndexedVarVector&,const IndexedVarVector&);
//2. ������������ ��� ��������� �����
	const IndexedVarVector operator*(double, const IndexedVarVector&);
	const IndexedVarVector operator*( const IndexedVarVector&, double);
	const IndexedVarVector operator+(const IndexedVarVector&,const IndexedVarVector&);
