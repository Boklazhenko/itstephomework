#include <iostream>
#include "HandBook.h"

int main()
{
    Company nike("Nike", "Smperson", "2345678", "Popova,27", "sport");
    Company puma("Puma", "SmOtherPerson", "3456789", "Permskaya,34", "sport");
    HandBook hb;
    hb.addCompany(nike);
    hb.addCompany(puma);
   cout<< hb.HandBookToString();
   cout << "----------------------------" << endl;
    cout << hb.searchByCriteria("sport");
}


