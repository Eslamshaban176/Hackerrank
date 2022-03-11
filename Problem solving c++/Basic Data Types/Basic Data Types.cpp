#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.

    int i;
    long long l;
    char ch;
    float f;
    double d;
    cin>>i>>l;
    cin>>ch>> f>> d;
    cout<<fixed;
    cout << i <<endl<<l<<endl<<ch<<endl<<setprecision(3)<<f<<endl<<setprecision(9)<<d<<endl;
    return 0;
}
