#include <iostream>
using namespace std;
int main()
{
  int i,j,rows;
  cout<<"Enter the number of rows: ";
  cin>>rows;
  for(i=1;i<=rows;++i)
    {
      for(j=1;j<=i;++j)
        {
          cout<<j<<" ";
        }
      cout<<"\n";
    }
  return 0;
}

/*

OUTPUT:
Enter the number of rows: 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/