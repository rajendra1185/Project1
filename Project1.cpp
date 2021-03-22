// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print4();
void print3();
void print2();

void print();
void print6();
void print5();
void print7();
void print8();
void print9();
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int>v;
    vector<int>::iterator it;
    int number;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        v.push_back(number);
    }
    int quer;
    int qn;
    cin >> quer;
    bool check = false;
    for (int i = 0; i <= quer; i++)
    {
        cin >> qn;
        for (it = v.begin(); it != v.end(); it++)
        {
            if (*it == qn)
            {
                cout << "Yes" << " " << it - v.begin() + 1 << endl;
                check = true;
                break;
            }
            check = false;
        }
        if (!check)
        {
            vector<int>::iterator low;
            low = lower_bound(v.begin(), v.end(), qn);
            cout << "No" << " " << *low << endl;
        }
    }
    return 0;
}
void print4()
{
    cout << "test4" << endl;
}
void print3()
{
    cout << "test2" << endl;
}
void print2()
{
    cout << "test2" << endl;
}
void print()
{
    cout << "test1" << endl;

}
void print6()
{
    cout << "test6" << endl;
}
void print5()
{
    cout << "test5" << endl;
}
void print7()
{
    cout << "test5" << endl;
}
void print8()
{
    cout << "test8" << endl;
}
void print9()
{
    cout << "test9" << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
