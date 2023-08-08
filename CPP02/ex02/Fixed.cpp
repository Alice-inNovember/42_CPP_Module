#include "Fixed.hpp"
#include <malloc/_malloc.h>
#include <cmath>
#include <iostream>
#include <ostream>

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
	_value = roundf(val * (1 << _point));
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

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a >= b)
		return a;
	else
		return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a <= b)
		return a;
	else
		return b;
}

//======================<연산자 오버로딩>======================
Fixed& Fixed::operator=(Fixed const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj) {
		this->_value = obj.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(Fixed const& obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const& obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const& obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const& obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	const Fixed temp(this->toFloat());

	this->_value += 1;
	return temp;
}

const Fixed Fixed::operator--(int)
{
	const Fixed temp(this->toFloat());

	this->_value -= 1;
	return temp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& c)
{
	return out << c.toFloat();
}

bool Fixed::operator<(const Fixed& obj) const
{
	return _value < obj.getRawBits();
}

bool Fixed::operator<=(const Fixed& obj) const
{
	return _value <= obj.getRawBits();
}

bool Fixed::operator>(const Fixed& obj) const
{
	return _value > obj.getRawBits();
}

bool Fixed::operator>=(const Fixed& obj) const
{
	return _value >= obj.getRawBits();
}

bool Fixed::operator==(const Fixed& obj) const
{
	return _value == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed& obj) const
{
	return _value != obj.getRawBits();
}
