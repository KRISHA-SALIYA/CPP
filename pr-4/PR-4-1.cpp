#include <iostream>
#include <string.h>
using namespace std;

class Message
{
private:
    string  n = "paras";
    string n1;
public:
    Message(string n1)
    {
        cout << "MESSAGE :" << string;
    }
};
int main()
{
    Message m1;
}
/*Q.1 Write a Program to create a Message class with a constructor
that takes a single string with a default value. Create a private
 member of the typed string, and in the constructor simply assign
the argument string to your internal string. Create two overloadd
member functions called print( ): one that takes no arguments and
simply prints the message stored in the variable and one that takes
a string argument,which it prints in addition to the internal message.
*/