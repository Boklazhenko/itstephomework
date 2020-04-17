
#include "Overcoat.h"
#include <iostream>
using namespace std;
int main()
{
	
	Overcoat coat ( "Duffle coat","Camel", 10800, 44);
	Overcoat raincoat("Burberry", "Camel", 12900 , 46 );
	Overcoat furCoat(  "Faux fur coat", "Pink", 12000, 48);
	bool result = coat == raincoat;
	cout << result << endl;
	furCoat = coat;
	coat.print();
	furCoat.print();
	bool comp = coat > raincoat;
	cout << comp << endl;
}


