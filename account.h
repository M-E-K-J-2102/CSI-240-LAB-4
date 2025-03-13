//  filename:  account.h

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


#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Account  
{
   protected:
      string mId, mName;
      double mBalance;

      static int mSize;

   public:
      //  constructor
      Account();

      //  copy constructor
      Account(string id, string name, double balance);

      //  deconstructor
      ~Account();

      //  Accessor
      double getBalance();
      string getID();
      string getName();

      //  mutator
      void setBalance(double balance);
      void setID(string id);
      void setName(string name);

      //  other
      static int  getSize();
      static void setSize(int size);

      //  overloading operators
      friend ostream& operator<<(ostream& output, Account obj);
      friend ofstream& operator<<(ofstream& output, Account obj);
      friend istream& operator>>(istream& input, Account& obj);
      friend ifstream& operator>>(ifstream& input, Account& obj);
      bool operator==(Account rhs);
      bool operator==(string rhs);
      friend bool operator==(string lhs, Account rhs);
      bool operator!=(Account rhs);
      bool operator!=(string rhs);
      friend bool operator!=(string lhs, Account rhs);
      bool operator>(Account rhs);
};

#endif