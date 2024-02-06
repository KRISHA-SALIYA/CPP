#include <iostream>
using namespace std;

class customer
{
private:
    int custId;
    string Name;
    int custAge;
    string custCity;
    int custMobile;
    int custValid;
    string custTelecom;

public:
    void setdata()
    {
    
        cout << "Enter your id :";
        cin >> custId;
        cout << "Enter your name :";
    	cin>> Name;
        cout << "Enter your age :";
        cin >> custAge;
        
        cout << "Enter your city :";
        cin>> custCity;
        cout << "enter your mobile number :";
        cin >> custMobile;
        cout << "Enter your simcard validity :";
        cin >> custValid;
      
        cout << "Enter your telecom name :";
        cin >> custTelecom;
    }
    void getdata()
    {
        
        cout << "customer id   :" << custId << endl
         << "customer name :" << Name<< endl
		 << "customer age  :" << custAge << endl
		 << "customer city :" << custCity << endl
         << "customer mobile number :" << custMobile << endl
         << "customer simcard validity :" << custValid<< endl
         << "customer telecom name :" << custTelecom<< endl;
    }
};
int main()
{
	customer c, c1, c2, c3, c4;

    c.setdata();
    c1.setdata();
    c2.setdata();
    c3.setdata();
    c4.setdata();

    
    cout << "---------- CUSTOMER RECORD ----------";
    

    c.getdata();
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c4.getdata();
}
