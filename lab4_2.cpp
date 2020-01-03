#include<iostream>
#include<cmath>
using namespace std;
double findDistance(double u,double a,double t){
  cout << "Input u = ";
  cin >> u;
  cout << "Input a = ";
  cin >> a;
  cout << "Input t = ";
  cin >> t;
  return u*t+(0.5*a*pow(t,2));
}

int main(){
  double u,a,t;
  cout << "s = " << findDistance(u,a,t); 
  return 0;
}
