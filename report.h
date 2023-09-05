#include <iostream>
#include <string.h>

 #include "complaint.h"
bool isValidContact(string phnNum);
bool isValidSapid(string sapid);
bool isValidEmail(string EmailId);
using namespace std;
class report : public complaint{


    string statuss;
    string status;
    string sapid;
    


    public:
    void set();
    void get();
    void getsolved();
    void registerc();
    string getstatus();
    string getstatuss();
    string getsapid();
    void adminlogin();
};