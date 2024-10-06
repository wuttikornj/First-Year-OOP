/*
 * Thrown.cpp
 *
 */

#include "Thrown.h"



Thrown::Thrown() {
	// Providing a seed value
	srand((unsigned) time(NULL));

}

Thrown::Thrown(int range)
:m_range(range)
{
	if(m_range <=0){
		cout<<"Range not valid. Program execution aborted... "<<endl;
	}
	// Providing a seed value
	srand((unsigned) time(NULL));

}

int Thrown::giveAnumber()
{

	return (std::rand() % m_range) + 1 ;
}

Thrown::~Thrown() {
	// TODO Auto-generated destructor stub
}

