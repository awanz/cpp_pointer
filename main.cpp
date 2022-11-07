#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Awan";
    string* pointer = &name;
    cout << name << " - " << &name << " - " << pointer  << " - " << *pointer << endl;
    return 0;
}
