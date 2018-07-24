#include <iostream>

using namespace std;

int main()
{
    int a,q,termo;
    a = 1;
    q =4;
    termo = a;
    do
    {
        cout << termo << "\t";
        termo = termo*q;
    }
    while (termo<200);
}
