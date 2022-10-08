#include <iostream>
#include <vector>
#include <string>

using namespace std;

// #define PI 3.14


int main()
{
    vector<string> msg {"hello", "c++", "world", "from", "vs code", "and the c++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
     
    cout << endl;
    
    // float s = PI * 5 * 2;

    // cout << s <<endl;
    
}