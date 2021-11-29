/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

int getnumber(std::string number){

  if (number == "zero" || number == "0"){

    return 0;

  }

  if (number == "one" || number == "1"){

    return 1;

  }

  if (number == "two" || number == "2"){

    return 2;

  }

  if (number == "three" || number == "three"){

    return 3;

  }

  if (number == "four" || number == "4"){

    return 4;

  }

  if (number == "five" || number == "5"){

    return 5;

  }

  if (number == "six" || number == "6"){

    return 6;

  }

  if (number == "seven" || number == "7"){

    return 7;

  }

  if (number == "eight" || number == "8"){

    return 8;

  }

  if (number == "nine" || number == "9"){

    return 9;

  }

  else {

    printf("Invalid input");
    exit(0);

  }

}

void addition(double first, double second){

  double result;

  result = first + second;

  std::cout <<"The sum of " << first << " and " << second << " is " << result;

}

void subtraction (double first,double second){

  double result;

  result = first - second;

  std::cout <<"The difference of " << first << " and " << second << " is " << result;

}

void multiplication(double first, double second){

  double result;

  result = first * second;

  std::cout <<"The product of " << first << " and " << second << " is " << result;

}

void division(double first, double second){

  double result;

  result = first / second;

  std::cout <<"The quotient of " << first << " and " << second << " is " << result;

}

int main() {

  char operation;
  double first, second, result;
  std::string one, two;

  std::cout << "Enter two operands and an operation:\n";

  std::cin >> one >> two >> operation;

  first = getnumber(one);
  second = getnumber(two);

  if (operation == '+') {

    addition(first,second);

  }

  if (operation == '-') {

    subtraction(first,second);

  }

  if (operation == '*') {

    multiplication(first,second);

  }

  if (operation == '/') {

    division(first,second);

  }

  return 0;

}