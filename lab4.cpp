//  filename:  lab4.cpp

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
#include "header.h"


int main()
{
    int size = 0;

    // Prompt user for array size and check it is a valid size
    size = promptSize();

    // Declare dynamic array of specified size
    Account* arr = new Account[size];

    // Populate arr 
    populate(size, FILENAME, arr);

    // Display populated array
    cout << "\n\n\t\tUNSORTED ARRAY\n\n";
    display(size, arr);

    // Sort the array
    sort(size, arr);

    // Display sorted array
    cout << "\n\n\t\tSORTED ARRAY\n\n";
    display(size, arr);

    // Delete dynamic array before code termination
    delete[] arr;

	return 0;
}