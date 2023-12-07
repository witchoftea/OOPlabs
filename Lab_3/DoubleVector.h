#pragma once
class CDoubleVector
{
private:
	double* m_pData;
	int m_size;

public:
	CDoubleVector();
	CDoubleVector(const CDoubleVector& data);
	~CDoubleVector();

	int getSize() const;
	void clear();
	double get(int index) const;
	void set(int index, double v);
	double getAvgValue() const;
	void init(int size);
	double getMin() const;
	double getMax() const;
	void vectprint() const;
};

