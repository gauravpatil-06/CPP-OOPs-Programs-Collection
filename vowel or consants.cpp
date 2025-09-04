#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter any alphabets:";
   cin>>ch;
   switch(ch)
   {
   	case 'a':
   	case 'e':
   	case 'i':
	case 'o':
	case 'u':		
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': 	cout<<"Alphabets "<<ch<<" is vowels";	
	break;
	default:cout<<"Alphabets "<<ch<<" is consant";
   }
    return 0;
} 
