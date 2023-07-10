/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStrReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:03:20 by junlee2           #+#    #+#             */
/*   Updated: 2023/07/10 16:19:23 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FileStrReplace.hpp"
#include <cstdlib>

FileStringReplace::FileStringReplace(std::string inFileName)
{
	this->inFileName = inFileName;
	this->inFile.open(inFileName, std::ios_base::in);
	if (!inFile.is_open())
		std::exit(EXIT_FAILURE);
	//파일의 마지막으로 이동
	inFile.seekg(0,std::ios::end);
	//마지막 위치를 저장 (파일의 크기)
	inFileLen = inFile.tellg();
	//파일 크기만큼 string 크기 늘리기
	inFileText.resize(inFileLen);
	//위치 지정 처음으로 원상복구
	inFile.seekg(0, std::ios::beg);
	//읽기
	inFile.read(&inFileText[0], inFileLen);
}

void FileStringReplace::ReplaceStr(std::string outFileName, std::string toFind, std::string toChange)
{
	this->outFileName = inFileName + outFileName;
	this->toFind = toFind;
	this->toChange = toChange;

	while()
	{
		
	}
}
