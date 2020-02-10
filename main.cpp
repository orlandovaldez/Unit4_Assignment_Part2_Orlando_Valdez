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
      
      if((N % 10) == 1)
      {
        cout << N << "st" << endl;
      }
    
    --N;


  }while(N != 0);
  

  
  return 0;
}