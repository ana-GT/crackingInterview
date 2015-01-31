/**
 * @file q1_2.cpp
 * @brief Reverse a c-style string
 */
#include <iostream>
#include <string>


std::string reverseString( const std::string &_input ); 

/**
 * @function main 
 */
int main( int argc, char* argv[] ) {

  std::string input, output;
  std::cout << "Enter the string to be evaluated: \n";
  std::cin >> input;

  // Reverse
  output = reverseString( input );
  std::cout << "Output : "<< output << std::endl;
  return 0;
}

/**
 * @function reverseString
 */
std::string reverseString( const std::string &_input ) {
  
  int N = _input.size();
  std::string::const_iterator it;
  std::cout << "Size: "<< N << std::endl;
  it = _input.end();
  --it; // Point to last element
 
  std::string output; output.resize(N);
  int ind = 0;
  while( ind < N ) {
    output[ind] = *it;
    --it;
    ind++;
  } 

  return output;
} 
