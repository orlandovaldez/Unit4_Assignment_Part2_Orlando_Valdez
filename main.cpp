/*

*/

#include <iostream>
using namespace std;


int main()

{
  int N = 0;//establish variables
  
      cout << "Enter an arguement: " << endl;//get input from user
      while(!(cin >> N))//check to see if user input is a valid input
      {
        cout << "Must be valid Integer, try again: " << endl;
        cin.clear();
        cin.ignore(100, '\n');
      }
     for(int i = 1;i <= N ; i++)//process user input and display an output to user
       {
          if( (i % 10) == 1 && N >= 11) 
          {
            cout << i << "st Hello" << endl; 
          }
          if(( i % 10)==2)
          {
            cout << i << "nd Hello" << endl;
          }
          if(( i % 10 )==3)
          {
            cout << i << "rd Hello" << endl;
          }
          if((i % 10 )==4 || (i% 10)==5 || (i% 10)==6 || (i% 10)==7 || (i% 10)==8 || (i% 10)==9 ||(i% 10)==0 || i==11 || i==12 || i==13) 
          {
            cout << i << "th Hello" << endl;
          }
          
                 
       
       } 
  
  return 0;
}