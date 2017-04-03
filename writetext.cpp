#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	
   ofstream writetext("abc.bin",ios::binary);
   if (writetext)
   {
		writetext.read(reinterpret_cast<char*>(&a),sizeof(a);
		writetext.read(reinterpret_cast<char*>(&b),sizeof(b);
		writetext.read(reinterpret_cast<char*>(&c),sizeof(c);
		cout<<endl<<endl;
	}
	else
	{
		cout<<"Error opening abc.txt";
	}
	writetext.close();
	return 0;
}
 

