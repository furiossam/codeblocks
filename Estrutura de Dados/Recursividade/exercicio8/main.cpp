#include <iostream>
#include <stdio.h>

using namespace std;

void inversorCadeia(char *string)
{
    if(*string)
    {
	  inversorCadeia(string+1);
	  putchar(*string);
    }
}
int main()
{

}
