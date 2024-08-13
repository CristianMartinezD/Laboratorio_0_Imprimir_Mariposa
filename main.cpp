#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingresa el numero de la base: "; cin >> n;

    for(int fila=1; fila <= n; fila++){
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";
        for (int espacios=1; espacios <= (n-fila)*2; espacios++) cout<<" "; // Este for imprime (n-fila)*2 espacios en cada iteración.
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";

        cout<<endl;


    }


    return 0;
}
