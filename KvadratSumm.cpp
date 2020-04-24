// KvadratSumm.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>nul");
    int n, s, k;
    
    cout << "Enter upper border for sum: ";
    cin >> n;

    for (k = 1, s = 0; k <= n; s += k * k, k++);
    cout << "Kvadrat sum from 1 to " << n << ": " << s << endl;
    
    system("pause > nul");
}