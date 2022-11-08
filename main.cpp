#include <iostream>

using namespace std;
int main () 
{
    // can determine length of array or leave blank when declaring. for example i have 5 numbers but i declared the size is 6 numbers. 
    //so i declare that number later otherwise it would be 0
    int luckyNums[6] = { 2, 5, 8 , 16, 25};
    cout << luckyNums[2] << endl;
    luckyNums[5] = 36;
    for (const int &n : luckyNums) {
        cout << n << "  ";
    }


    return 0;
}