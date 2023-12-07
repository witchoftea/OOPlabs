// DoubleVector.cpp: implementation of the CDoubleVector class.
#include "DoubleVector.h"
#include <stdio.h> // For NULL const
#include <iostream>

void CDoubleVector::init(int size) {
	m_size = size;
	m_pData = new double[m_size];
	for (int i = 0; i < m_size; i++) m_pData[i] = 0;
}

CDoubleVector::CDoubleVector()
{
	m_size = 1;
	m_pData = new double[m_size];
	for (int i = 0; i < m_size; i++) m_pData[i] = 0;
}

CDoubleVector::CDoubleVector(const CDoubleVector& data)
{
	m_size = data.getSize();
	m_pData = new double[m_size];
	for (int i = 0; i < m_size; i++) m_pData[i] = data.get(i);
}

CDoubleVector::~CDoubleVector()
{
	clear();
}

int CDoubleVector::getSize() const
{
	return m_size;
}

void CDoubleVector::clear()
{
	m_size = 0;
	delete[] m_pData;
	m_pData = NULL;
}

double CDoubleVector::get(int index) const
{
	return m_pData[index];
}

void CDoubleVector::set(int index, double v)
{
	if ((m_size > 0) && (index < m_size)) m_pData[index] = v;
}

double CDoubleVector::getAvgValue() const
{
	double sum = 0;
	for (int i = 0; i < m_size; i++) sum += m_pData[i];
	return sum / (double)m_size;
}

double CDoubleVector::getMax() const 
{
	double max = m_pData[0];
	for (int i = 0; i < m_size; i++){
		if (max<m_pData[i+1]) {
			max = m_pData[i+1];
		}
	}
	return max;
}

double CDoubleVector::getMin() const
{
	double min = m_pData[0];
	for (int i = 0; i < m_size; i++) {
		if (m_pData[i]<min) {
			min = m_pData[i];
		}
	}
	return min;
}

void CDoubleVector::vectprint() const 
{
	for (int i = 0; i < m_size; i++) {
		std::cout << m_pData[i] << ' ';
	}
	std::cout << '\n';
}