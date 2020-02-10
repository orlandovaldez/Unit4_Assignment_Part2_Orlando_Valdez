//

#include <iostream>
using namespace std;


int main()

{
  int N = 0;
  int stop = 0;
  do

  {

      cout << "Enter an arguement: " << endl;
      while(!(cin >> N))
      {
        cout << "Must be valid Integer, try again: " << endl;
        cin.clear();
        cin.ignore(100, '\n');
      }
      
      for(int i =1; i <= stop; i++)
      {
        if( (N % 10) == 1)
        {
          cout << N << "st" << endl;
        }
        else( (N % 10) == 2);
        {
          cout << N << "nd" << endl;
        }
        if( ((N % 10) == 4) || ((N % 10) == 5))
        {
          cout << N << "th" << endl;
        }
      }


  }while(N != 0);

  
  return 0;
}