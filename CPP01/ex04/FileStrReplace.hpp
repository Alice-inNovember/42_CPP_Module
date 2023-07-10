/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStrReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:53:28 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/10 16:19:04 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTRREPLACE_HPP
# define FILESTRREPLACE_HPP

# include <fstream>
# include <string>

class FileStringReplace
{
	private:
	std::string		outFileName;
	std::ifstream	outFile;
	std::string		inFileName;
	std::ifstream	inFile;
	std::string		inFileText;
	int				inFileLen;
	std::string		toFind;
	std::string		toChange;
	public:
	FileStringReplace(std::string inFileName);
	void ReplaceStr(std::string outFileName, std::string toFind, std::string toChange);
};

#endif