#include <iostream>

using namespace std;

int main()
{
    string try1 = "a simple sentence hello hi 12 34 567";
    double size1 = try1.size();
    int find1 = try1.find("he",0);
    try1[0] = 'B';


    cout << "the size of try1 is = " << size1 << endl;
    cout << try1 << endl;
    //try1.clear();
    cout << try1 << endl;

    return 0;
}