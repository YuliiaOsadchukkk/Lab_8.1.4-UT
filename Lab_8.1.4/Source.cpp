
#include <iostream>
#include <string>
using namespace std;


bool IsOrNot(string str)
{
    if (str.find("***") != -1)
        return true;
        else
            return false;
}

string change(string& str)
{
    while (IsOrNot(str))
        str = str.replace(str.find("***"), 3, "!!");
    return str;
}


int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << endl;

    if (IsOrNot(str))
        cout << "There is a group of three neighbour stars" << endl;
    else
        if (str.length() < 3)
            cout << "Too few symbols" << endl;
        else
        cout << "There is NOT any group of three neighbour stars" << endl;

    cout << endl;
    change(str);
    cout << str << endl;
}