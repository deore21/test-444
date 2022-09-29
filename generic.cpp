#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum ,product;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number ;

  sum = first_number + second_number ;

  product = first_number * second_number ;


  cout << first_number << " + " <<  second_number << " + " <<  " = " << sum; 

  cout << first_number << " + " <<  second_number << " * " <<  " = " << product;
