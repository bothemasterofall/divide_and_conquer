#define DIV_AND_CON
#define MERGE_SORT

#include "MergeSort.h"
#include <iostream>
using namespace std;

int main()
{
    vector<int> testint, testint2;
    testint.push_back(1);
    testint.push_back(5);
    testint.push_back(0);
    testint.push_back(2);
    testint.push_back(2);
    testint.push_back(8);
    testint.push_back(6);
    testint.push_back(9);

    MergeSort <int> sort;
    testint2 = sort.solve(testint);

    for (int i = 0; i < testint2.size(); i++)
    {
        cout << testint2[i] << " " << endl;
    }

    vector<char> testch, testch2;
    testch.push_back('f');
    testch.push_back('h');
    testch.push_back('a');
    testch.push_back('b');
    testch.push_back('u');
    testch.push_back('p');
    testch.push_back('e');
    testch.push_back('z');

    MergeSort <char> sort2;
    testch2 = sort2.solve(testch);

    for (int i = 0; i < testch2.size(); i++)
    {
        cout << testch2[i] << " " << endl;
    }

    return 0;
}
