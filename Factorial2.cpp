#include <iostream>  
using namespace std;  
int main()  
{  
   int i=1,fact=1,number; 

  cout<<"Enter any Number: ";    
  cin>>number;    

  while (i<=number)
  {
    fact=fact*i;
    i++;
  }
  
cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  
  return 0;  
} 