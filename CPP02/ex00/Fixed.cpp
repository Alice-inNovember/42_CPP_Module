#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj) {
		this->_value = obj.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const
{

	std::cout << "getRawBits member function called" << std::endl;

	return _value;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	_value = raw;
}
