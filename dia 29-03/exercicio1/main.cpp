#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int a,b,c,d,e,maior,menor;
    cout << "Digite o valor do 1º até o 5º número:" << endl;
    cin >> a >> b >> c >> d >> e;
    if (a>b)
    {
      if (a>c)
      {
          if (a>d)
          {
              if (a>e)
              {
                  maior = a;
              }
              else
              {
                  maior = e;
              }
          }
          else
          {
            if (d>e)
            {
                maior = d;
            }
            else
            {
                maior = e;
            }
          }
      }
      else
      {
        if (c>d)
        {
            if (c>e)
            {
                maior = c;
            }
            else
            {
                maior = e;
            }
        }
        else
        {
            if (d>e)
            {
                maior = d;
            }
            else
            {
                maior = e;
            }
        }
      }
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                if (b>e)
                {
                    maior = b;
                }
                else
                {
                    maior = e;
                }
            }
            else
            {
                if (d>e)
                {
                    maior = d;
                }
                else
                {
                    maior = e;
                }
            }
        }
        else
        {
            if (c>d)
            {
                if (c>e)
                {
                    maior = c;
                }
                else
                {
                    maior = e;
                }
            }
            else
            {
                if (d>e)
                {
                    maior = d;
                }
                else
                {
                    maior = e;
                }
            }
        }
    }

    cout << "O maior e: " << maior << "\n";
    if (a<b)
    {
      if (a<c)
      {
          if (a<d)
          {
              if (a<e)
              {
                  menor = a;
              }
              else
              {
                  menor = e;
              }
          }
          else
          {
            if (d<e)
            {
                menor = d;
            }
            else
            {
                menor = e;
            }
          }
      }
      else
      {
        if (c<d)
        {
            if (c<e)
            {
                menor = c;
            }
            else
            {
                menor = e;
            }
        }
        else
        {
            if (d<e)
            {
                menor = d;
            }
            else
            {
                menor = e;
            }
        }
      }
    }
    else
    {
        if (b<c)
        {
            if (b<d)
            {
                if (b<e)
                {
                    menor = b;
                }
                else
                {
                    menor = e;
                }
            }
            else
            {
                if (d<e)
                {
                    menor = d;
                }
                else
                {
                    menor = e;
                }
            }
        }
        else
        {
            if (c<d)
            {
                if (c<e)
                {
                    menor = c;
                }
                else
                {
                    menor = e;
                }
            }
            else
            {
                if (d<e)
                {
                    menor = d;
                }
                else
                {
                    menor = e;
                }
            }
        }
    }

    cout << "O menor e: " << menor;

}
