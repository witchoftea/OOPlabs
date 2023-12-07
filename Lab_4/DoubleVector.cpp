// DoubleVector.cpp: implementation of the CDoubleVector class.
#include "DoubleVector.h"
#include <stdio.h> // For NULL const
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

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

double CDoubleVector::calc() const
{
	double sum1 = 0;
	double dr1 = 0;
	for (int i = 0; i < 11; i++)
	{
		sum1 += log10(abs(1 - (cos(m_pData[i]) * cos(m_pData[i]))));
	}
	dr1 = sin(sum1) * sin(sum1);
	double dr2 = 0;
	for (int i = 0; i < 11; i++)
	{
		dr2 += cos(abs(1 - sin(m_pData[i])));
	}
	double S = 0;
	S = dr1 / dr2;
	return S;
}


void CDoubleVector::saveresult()
{
	ofstream outfile("saveresult.txt");
	outfile << calc();
	outfile.close();
}

void CDoubleVector::savedata()
{
	ofstream outfile("data.bin");
	for (int i = 0; i < m_size; i++) {
		outfile << m_pData[i] << ' ';
	}
	outfile.close();
}

void CDoubleVector::readdata()
{
	double k = 0;
	ifstream infile("data.bin");
	while (infile >> k) {
		cout << k<< ' ';
	}
	infile.close();
}