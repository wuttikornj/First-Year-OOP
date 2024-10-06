/*
 * Thrown.h
 *
 */

#ifndef THROWN_H_
#define THROWN_H_

#include<cstdlib>
#include<iostream>
#include<ctime>
#include<cassert>
using namespace std;

class Thrown {
private:
	int m_range = 4;
public:
	Thrown();
	Thrown(int range);
	int giveAnumber();
	virtual ~Thrown();
};

#endif /* THROWN_H_ */
