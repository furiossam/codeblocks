#include <iostream>

using namespace std;

int main()
{
   int numero,contador,negativo=0;

   cout << "Digite quantos numeros serao analisados:" << endl;
   cin >> contador;
   do
   {

       cout << "Digite o numero: " << endl;
       cin >> numero;
       if (numero < 0 )
       {
           cout << "OK..." << endl;
           negativo++;
           contador--;
       }
       else
       {
           cout << "OK.." << endl;
           contador--;
       }
   }
   while (contador !=0);
   cout << "Voce tem um total de " << negativo << " numeros negativos.";

}
