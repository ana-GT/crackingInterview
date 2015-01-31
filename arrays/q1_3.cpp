#include <iostream>
#include <string>

std::string eraseRepetitions( std::string _input );

int main( int argc, char* argv[] ) {

  std::string input, output;
  std::cout << "Enter string to evaluate: \n";
  std::cin >> input;


  output = eraseRepetitions( input ); 
  std::cout << "Output with no repetitions: "<< output << std::endl;

  return 0;
}


/**
 * @function eraseRepetitions
 */
std::string eraseRepetitions( std::string _input ) {

 int N = _input.size();
 int n;
 char c;
  std::string output; output.resize(N); 
  

 // The first element always go in the output
  output[0] = _input[0];
  n = 1;
  bool isThere;

  if( N == 1 ) { return output; }

 for( size_t i = 1; i < N; ++i ) {
    c = _input[i];   
    isThere = false; 

    for( size_t j = 0; j < n; ++j ) {
      if( c == output[j] ) {
        isThere = true;
        break;
      }
    }

   if( isThere == false ) {
     output[n] = c;
     n++; 
   }
 }
 
 return output;

}
