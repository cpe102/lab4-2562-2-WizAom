#include<iostream>
#include<cmath>
using namespace std;
int findDivision(int x){
    int n=2;
    while(n<=x){
        if(x%n==0){
            return n;
        }
        n++;
    }
}
main()
{
    int x;
    cout << "Input x = ";
    cin >> x;
    cout << findDivision(x);
}

