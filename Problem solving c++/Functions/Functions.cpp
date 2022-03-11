#include <iostream>

using namespace std;
 int max_4(int a,int b,int c,int d);
int main()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;

   cout<<max_4(a,b,c,d);

    return 0;
}


 int max_4(int a,int b,int c,int d)
 {

  if(a > b && a >c &&a>d)
        return a;
  else if(b >a &&b>c &&b>d)
        return b;
  else if(c>a && c>b &&c>d)
        return c;
  else
        return d;
 }

