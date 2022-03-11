#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2,temp;
   cin>>s1>>s2;
   cout<<s1.size()<<" "<<s2.size()<<endl<<s1+s2<<endl;
   temp = s1[0];
   s1[0] = s2[0];
   s2[0] = temp[0];
   cout<<s1<<" "<<s2<<endl;

    return 0;
}
