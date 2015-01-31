/**
 * @file q1_4.cpp
 * @brief Rotate in place
 */
#include <iostream>

int elem( int* mat, int i, int j, int N ) {

  return mat[i*N + j];
}

void set( int* mat, int i, int j, int N, int elem ) {
  mat[i*N + j] = elem;
}

void print( int* mat, int N ) {

  for( int i = 0; i < N; ++i ) {
    for( int j = 0; j < N; ++j ) {
      std::cout << elem( mat, i,j,N) <<" ";
    }
    std::cout << std::endl;
  }

}

int* rotate( int* _mat, int N );

int main( int argc, char* argv[] ) {

  int N;
  std::cout << "Enter the size of the matrix: \n";
  std::cin >> N;

  int* mat = new int[N*N];
  int* rotMat = new int[N*N]; 

  // Fill mat:
  int count = 0;
  for( size_t i = 0; i < N; ++i ) {
    for( size_t j = 0; j < N; ++j ) {
      set( mat, i,j, N, count );
      count++;
    }
  }

  rotMat = rotate(mat, N);

  std::cout << "Printing Mat" << std::endl;
  print(mat, N);
  std::cout << "Printing rot Mat" << std::endl;
  print( rotMat, N );


  return 0;
}


int* rotate( int* _mat, int N ) {

  int* output = new int[N*N];
  int a, b, c, d;

  for( int i = 0; i < N; ++i ) {
    for( int j = i; j < N - 1 - i; ++j ) {
       a = elem( _mat, i,j, N);
       b = elem( _mat, j, N-1-i, N );
       c = elem( _mat, N-1-i, N-1-j, N);
       d = elem( _mat, N-1-j,i, N );

       set( output, i,j, N, d );
       set( output, j, N-1-i, N, a );
       set( output, N-1-i, N-1-j, N, b );
       set( output, N-1-j,i, N, c );
    } 
  }

  if( N % 2 == 1 ) { int c = (N-1)/2; set( output, c, c, N, elem(_mat,c,c,N) ); }

  return output;
}
