#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
    
    
unsigned int a,b;
string name[]={"one","two","three","four","five","six","seven","eight","nine"};
cin>>a>>b;



    for(int i=10; a < i && a <=b ;a++)
    {
        cout <<name[a-1]<<"\n";
        
    
    }
    
    
    for(int j=10; b >= j;j++)
    {
        if(j %2 ==0)
            cout<<"even\n";
        else
            cout<<"odd\n";    
    }
    


    
    
    return 0;
}
