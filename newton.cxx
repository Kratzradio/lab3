#include <iostream>
#include <complex>

using namespace std;

complex<double> func(complex<double> x){
  
  x = x-((x*x*x - 1.0)/(3.0*x*x));
  
  
 return x;
}

int main(){
  
  complex<double> z0;
  complex<double> z;
  complex<double> dz;
  int i;
  
 
  for(double k =-2; k<=2; k+=0.5){
    for(double j=-2; j<=2; j+=0.5){
      
	z0 = complex<double>(k, j);
	  i = 0;
	  dz = 1;
	  while(i<=400 && abs(dz)>=1e-8){
            z = func(z0);
	    dz = z-z0;
	    z0 = z;
	    i++;
	  }
	cout << k << "\t" << j << "\t" << i << endl;
    }
  }
  return 0;
}
