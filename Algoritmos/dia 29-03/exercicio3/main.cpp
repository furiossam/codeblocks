#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double p1, p2, p3, p4, t1, t2, t3, t4, medp, medt, medf, pp, pt;

    cout << "Digite as notas das provas e o peso: " << endl;
    cin >> p1 >> p2 >> p3 >> p4 >> pp;
    cout << "Digite as notas dos trabalhos e o peso: " << endl;
    cin >> t1 >> t2 >> t3 >> t4 >> pt;
    pp = pp/10;
    pt = pt/10;
    medp = (p1+p2+p3+p4)/4;
    medt = (t1+t2+t3+t4)/4;
    medf = (pp*medp) + (pt*medt) / (pp+pt);
    if (medf >= 6)
    {
        cout << "Sua media foi: " << medf << endl;
        cout << "Voce foi aprovado!";
    }
    else
    {
        cout << "Sua medi foi: " << medf << endl;
        cout << "Voce foi reprovado!";
    }
}
