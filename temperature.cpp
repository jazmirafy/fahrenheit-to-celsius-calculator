#include <iostream>

int main() {
  
  double tempf, tempc;
  
  // prompt the user to enter a temperature
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  
  //calculate it in celsius using formula
  tempc = (tempf - 32) / 1.8;

  //tell the user the temp in cels
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

  return 0;
  
}
