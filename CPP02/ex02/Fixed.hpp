#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>
#include <ostream>
#include <type_traits>

class Fixed
{
	private:
		int					_value;
		static const int	_point = 8;
	public:
		Fixed(void);
		Fixed(int val);
		Fixed(float val);
		Fixed(const Fixed& src);
		~Fixed(void);

		Fixed&	operator=(Fixed const& obj);
		Fixed	operator+(Fixed const& obj) const;
		Fixed	operator-(Fixed const& obj) const;
		Fixed	operator*(Fixed const& obj) const;
		Fixed	operator/(Fixed const& obj) const;

		Fixed&		operator++(void);
		Fixed&		operator--(void);
		const Fixed	operator++(int);
		const Fixed	operator--(int);

		bool	operator<(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator>(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream &out, const Fixed &c);

#endif
