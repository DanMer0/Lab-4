#include <algorithm>

#include <vector>

#include <iostream>

using namespace std;


int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    auto result = find_if(v.begin(), v.end(), [](int a)
        {
            int b;
            cin >> b;
            return a == b;
          

        });
        if (result == v.end())
            cout << "Number was not found!" << endl;
        else
            cout << "Number found at index : " << *result << endl;

        return 0;
}