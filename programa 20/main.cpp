#include <iostream>

using namespace std;


int main()
{
  int i;
  int j;

  for(i=1; i<=5;i++)
  {
      for (j=5; j>=0;j--)
      {
          cout<<"...";
      }

      cout<<"\n";
  }
    return 0;
}
