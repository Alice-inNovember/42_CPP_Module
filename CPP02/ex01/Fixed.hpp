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
		Fixed& operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &c);

#endif