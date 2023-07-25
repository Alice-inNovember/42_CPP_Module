#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <malloc/_malloc.h>

//======================<생성자>======================
Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val << _point;
}

Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf (val * (1 << _point));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

//======================<소멸자>======================
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//======================<맴버함수>======================
int Fixed::getRawBits() const
{
	return _value;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _point));
}

int Fixed::toInt(void) const
{
	return roundf(toFloat());
}

//======================<연산자 오버로딩>======================
Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
	return out << c.toFloat();
}
