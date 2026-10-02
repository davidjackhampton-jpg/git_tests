#include <iostream>
#include <vector>
#include <string>

using namespace std;

void addxy(int &x, int &y) 
{
    x + y;
} 

int main()
{
    int x, y;
    string operation;
    cout << "enter first number" << endl; 
    cin >> x;
    cout << "enter second number" << endl;
    cin >> y;
    cout << "enter operation" << endl;
    cin >> operation;
    if (operation == "add") {
        addxy(x, y);
    }

    return 0;
}