/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:56:55 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/12 13:15:52 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "FileStrReplace.hpp"

int main(int argc, char **argv)
{
	FileStringReplace fileStrReplace(argv[1]);

	fileStrReplace.ReplaceStr(".", std::string toFind, std::string toChange)
}