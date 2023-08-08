/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/08/08 17:42:06 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <string>
#include "FileStrReplace.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
		std::exit(EXIT_FAILURE);

	FileStringReplace fileStrReplace(argv[1]);

	fileStrReplace.ReplaceStr(".replace", argv[2], argv[3]);
}