#ifndef Fixed_HPP
# define Fixed_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_point = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& src);
		~Fixed(void);
		Fixed& operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif