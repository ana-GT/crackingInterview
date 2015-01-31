/**
 * @file q1_1.cpp
 * @brief Check if string has unique characters
 */
#include <iostream>

/**
 * @function main
 */
int main( int argc, char* argv[] ) {

  std::string input;
  std::cout << "Enter the string to evaluate: \n";
  std::cin >> input;
  char c;

  std::cout << "String being evaluated: "<< input << std::endl;

  for( size_t i = 0; i < input.size() - 1; ++i ) {
    c = input[i];
    for( size_t j = i+1; j < input.size(); ++j ) {
      if( c == input[j] ) {
        std::cout << "The string has not unique characters: Character "<<c<< " repeats"<< std::endl;
        return 1;
      }
    }	
  } //

  std::cout << "The string has unique characters "<< std::endl;
  return 0;	
}
