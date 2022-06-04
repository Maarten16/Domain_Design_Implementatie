#include <iostream>
#include "employee.h"
using std::string;
using std::cout;

//constructor initialization list
Employee::Employee(string name, bool forkliftCertificate)
        :name(name), forkliftCertificate(forkliftCertificate)
{cout << name << " created";}

//getters
bool Employee::getBusy() {return busy;}
bool Employee::getForkliftCertificate() {return forkliftCertificate;}
string Employee::getName() {return name;}

//setters
void Employee::setBusy(bool busy) {this->busy = busy;}
void Employee::setForkliftCertificate(bool forkliftCertificate) {this->forkliftCertificate = forkliftCertificate;}


