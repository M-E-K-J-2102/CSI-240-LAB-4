//  filename:  functions.h

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

/* Function:   display(int, Account*)
*   Purpose:   prints out the contents of the Accounts array
*       Pre:   array must be initialized and populated
*      Post:   contents are printed to the console
****************************************************************/
void display(int size, Account* ptr)
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
}

/* Function:   promptSize()
*   Purpose:   asks user for array size and verifies it
*       Pre:   none
*      Post:   array has a valid size
****************************************************************/
int promptSize()
{
    int size;

    do {
        cout << "How big should the array be?\n";
        cin >> size;
    } while (size < 1 || size > 1000);

    return size;
}

/* Function:   populate(int, string, Account)
*   Purpose:   populates the array
*       Pre:   array and it's length must be declared
*      Post:   array is filled with Account elements
****************************************************************/
void populate(int size, string filename, Account* ptr)
{
    ifstream file;
    int count = 0;

    // Make sure file opens correctly
    file.open(FILENAME);
    if (file.fail())
    {
        cout << "Failed to open '" << FILENAME << "'\n";
        exit(1);
    }

    // get info from file and store it in the account object
    while (!file.eof() && count < size)
    {
        file >> ptr[count];
        count++;
    }
    file.close();

    return;
}

/* Function:   sort(int, Account*)
*   Purpose:   sorts the array based on the ID attribute
*       Pre:   array must be initialized and populated
*      Post:   array is sorted by IDs from smallest to biggest
****************************************************************/
void sort(int size, Account* ptr)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                Account temp;
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    return;
}