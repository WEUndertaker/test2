// Strings 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<fstream>

int main()
{
	char string1[100] = "car";
	//fgets(string1, 100, stdin);//ia o adresa ca parametru, baga '\n' la sfarsit	

	int lengthOfString1 = strlen(string1);//baga un "/n" la sfarsit
	string1[strlen(string1) - 1] = '/0';
	
	char string2[100] = "plane";
	int compareStrings = strcmp(string1, string2);//<0 if string1 < string2, 0 if string1 == string2, >0 if string1 > string2

	strcpy_s(string1, string2);//copiaza string2 in string1
	strncpy_s(string1, string2, 3);//copiaza primele 3 caractere
	
	strcat_s(string1, string2);//lipeste string2 la string1
	strncat_s(string1, string2, 3);//lipste primele 3 caractere
	
	std::cout << string1 << std::endl;
	std::cout << string2 << std::endl;
	int pozitiaLitereiL = strchr(string1, 'l') - string1;//returneaza adresa primei aparitii a literei sau NULL
	std::cout << pozitiaLitereiL << std::endl;
	int pozitiaSubsiruluiPlane = strstr(string1, string2) - string1;//returneaza adresa primei aparitii a subsirului sau NULL
	std::cout << pozitiaSubsiruluiPlane << std::endl;

	char string3[100] = "ana are mere, pere";
	char delimiters[100] = " ,\n";
	char* remainingString = nullptr;
	char* token = strtok_s(string3, delimiters, &remainingString);
	token = strtok_s(nullptr, delimiters, &remainingString);
	std::cout << token << std::endl;

	char string4[100] = "4127";
	int number4 = atoi(string4);//number from string
	std::cout << number4 << std::endl;
	std::cout << _strrev(string4) << std::endl;// reverse string
	
	char string5[100] = "12 7";
	int a = 0, b = 0;
	sscanf_s(string5, "%d%d", &a, &b);
	std::cout << a << " " << b << std::endl;

    return 0;
}

