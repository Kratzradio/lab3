#include <iostream>
#include <complex>

using namespace std;

complex<double> func(double y) {
      
      complex<double> j = complex<double>(0,1.0);
      complex<double> z = tan(y*(1.0+j));
      
      return z;
}

int main(){

  // Example how to declare a single complex variable:
   complex<double> x;
  int N = 100;
  complex<double> p[N];
  double dphi = 6.0/(N-1);		//Schrittabstände
  double phi = -3;
  
  for(int k = 0; k <= N; k++){
	  //x = complex<double> (0,phi);
	  //p[k] = exp(x);
	 p[k] = func(phi);
	 phi = (k*dphi)-3;   
  }
  
  for(int k = 0; k <=N; k++)
	  cout << (k*dphi)-3 << "\t" << real(p[k]) << "\t" << imag(p[k]) << "\t" << abs(p[k]) << endl;
  
  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
