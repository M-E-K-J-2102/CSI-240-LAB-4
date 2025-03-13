//  filename:  header.h

/*
     Author:  Wei Kian Chen
Modified by:  Matthew Kane
      Class:  CSI-240-04
 Assignment:  Lab 4
 Created on:  February 22, 2024

Description:
   The project is to create a dynamic array of Account and manipulate
   this array. However, the purpose of this file is merely create
   the Account type

Certification of Authenticity:
   I certify that this is entirely my own work, except where I have given
   fully-documented references to the work of others.I understand the
   definition and consequences of plagiarism and acknowledge that the
   assessor of this assignment may, for the purpose of assessing this
   assignment:
   - Reproduce this assignment and provide a copy to another member of
     academic staff; and/or
   - Communicate a copy of this assignment to a plagiarism checking
     service(which may then retain a copy of this assignment on its
     database for the purpose of future plagiarism checking)
*/


#ifndef HEADER_H
#define HEADER_H

#include "account.h"
#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

const string FILENAME = "data.txt";

void display(int size, Account* ptr);
int promptSize();
void populate(int, string, Account*);
void sort(int, Account*);
#endif