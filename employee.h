#pragma once
using std::string;

class Employee{
    const string name;
    bool busy;
    bool forkliftCertificate;
public:
    Employee(string name, bool forkliftCertificate);
    string getName();
    bool getBusy();
    bool getForkliftCertificate();
    void setBusy(bool busy);
    void setForkliftCertificate(bool forkliftCertificate);
};