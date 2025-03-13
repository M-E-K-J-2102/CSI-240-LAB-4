//  filename:  account.cpp

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

#include "account.h"

//  initializing the static variable
int Account::mSize = 0;


/*
    Pre: None
   Post: Private members are initialized to default value
Purpose: Initialize private member when an object of the class
         is instantiated
*/
Account::Account()
{
        mId = "";
      mName = "";
   mBalance = 0;
}


/*
    Pre: default value for ID, name and balance
   Post: Private members are initialized to the values provided
Purpose: Initialize private member when an object of the class
         is instantiated
*/
Account::Account(string id, string name, double balance)
{
        mId = id;
      mName = name;
   mBalance = balance;
}


/*
    Pre: None
   Post: Nothing for the time being
Purpose: Clean up the class object
*/
Account::~Account()
{
}


//  assessor
/*
    Pre: None
   Post: The balance of the account is return
Purpose: Retrieve the balance for the account
*/
double Account::getBalance()
{
   return mBalance;
}


/*
    Pre: None
   Post: The ID of the account is return
Purpose: Retrieve the ID for the account
*/
string Account::getID()
{
   return mId;
}


/*
    Pre: None
   Post: The name of the account is return
Purpose: Retrieve the name for the account
*/
string Account::getName()
{
   return mName;
}


//  mutator
/*
    Pre: The new balance value
   Post: The balance of the account is updated
Purpose: Update the balance for the account
*/
void Account::setBalance(double balance)
{
   mBalance = balance;
}


/*
    Pre: The new ID value
   Post: The ID of the account is updated
Purpose: Update the ID for the account
*/
void Account::setID(string id)
{
   mId = id;
}


/*
    Pre: The new name value
   Post: The name of the account is updated
Purpose: Update the name for the account
*/
void Account::setName(string name)
{
   mName = name;
}


// other
/*
    Pre: None
   Post: The static size is returned
Purpose: Retrieve the size for the account
*/
int Account::getSize()
{
   return mSize;
}


/*
    Pre: size
   Post: The static size is updated
Purpose: Update the size for the account
*/
void Account::setSize(int size)
{
   mSize = size;
}


//  overloading operators
/*
    Pre: Account object
   Post: True if the ID of the lhs matches the ID of the
         rhs; otherwise false
Purpose: Evaluate if the two Account objects match
*/
bool Account::operator==(Account rhs)
{
   return mId == rhs.mId;
}


/*
    Pre: ID
   Post: True if the ID of the object matches the specified
         ID; otherwise false
Purpose: Evaluate if the ID of the Account object matches
         the provided ID
*/
bool Account::operator==(string id)
{
   return mId == id;
}


/*
    Pre: ID and Account object
   Post: True if the ID of the lhs matches the ID of the rhs;
         otherwise false
Purpose: Evaluate if the ID of the Account object matches the
         provided ID
*/
bool operator==(string lhs, Account rhs)
{
   return lhs == rhs.mId;
}


/*
    Pre: ID
   Post: True if the ID of the Account does not matches the
         ID of the rhs; otherwise false
Purpose: Evaluate if the two Account objects match
*/
bool Account::operator!=(string rhs)
{
   return !(mId == rhs);
}


/*
    Pre: Account
   Post: True if the ID of the Account does not matches the
         ID of the rhs; otherwise false
Purpose: Evaluate if the two Account objects match
*/
bool Account::operator!=(Account rhs)
{
   return !(mId == rhs.mId);
}


/*
    Pre: ID and Account
   Post: True if the ID of the lhs does not matches the ID
         of the rhs; otherwise false
Purpose: Evaluate if the two Account objects match
*/
bool operator!=(string lhs, Account rhs)
{
   return !(lhs == rhs.mId);
}


//  friend functions
/*
    Pre: input stream and Account object
   Post: The Account object is updated and the updated input
         stream is returned
Purpose: Read a Account object from the input stream
*/
istream& operator>>(istream &input, Account &obj)
{
   string junk;

   cout << "     Enter ID:  ";
   getline(input, obj.mId);
   
   cout << "   Enter Name:  ";
   getline(input, obj.mName);

   cout << "Enter balance:  ";
   input >> obj.mBalance;
   getline(input, junk);

   return input;
}


/*
    Pre: input file stream and Account object
   Post: The Account object is updated and the updated input
         file stream is returned
Purpose: Read a Account object from the input file stream
*/
ifstream& operator>>(ifstream &input, Account &obj)
{
   string junk;

   getline(input, obj.mId);
   getline(input, obj.mName);
   input >> obj.mBalance;
   getline(input, junk);

   return input;
}


/*
    Pre: output stream and Account object
   Post: The Account object is displayed and the updated output
         stream is returned
Purpose: Output a Account object to the output stream
*/
ostream& operator<<(ostream &output, Account obj)
{
   output << "     ID:  " << obj.mId << endl
          << "   Name:  " << obj.mName << endl
          << "Balance:  " << obj.mBalance << endl;

   return output;
}


/*
    Pre: output file stream and Account object
   Post: The Account object is displayed and the updated output
         file stream is returned
Purpose: Output a Account object to the output file stream
*/
ofstream& operator<<(ofstream &output, Account obj)
{
   output << obj.mId << endl
          << obj.mName << endl
          << obj.mBalance << endl;

   return output;
}


/*
    Pre: Account object
   Post: True is the ID object is greater than the ID of the
         Account object in rhs; otherwise false
Purpose: Compare the ID on the lhs and and the rhs
*/
bool Account::operator>(Account rhs)
{
   return mId > rhs.mId;
}