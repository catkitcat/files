#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	
   ofstream writetext("abc.txt");
   if (writetext)
   {
		writetext<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

		cout<<endl<<endl;
	}
	else
	{
		cout<<"Error opening abc.txt";
	}
	writetext.close();
	return 0;
}
 

