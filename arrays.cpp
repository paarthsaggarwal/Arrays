# include <iostream>

using namespace std;

int main()
{
    int firstNums[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    firstNums[99] = 11;

    cout << firstNums[6];

    return 0;
}
