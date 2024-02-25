#include <iostream>  
using namespace std;  
int main()  
{  
   int i=1,fact=1,number; 

  cout<<"Enter any Number: ";    
  cin>>number;    

do{
    fact=fact*i;
    i++;
} while(i<=number);

  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  
  return 0;  
} 