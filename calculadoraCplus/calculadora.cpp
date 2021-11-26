#include <iostream>

using namespace std;

int main(){
    int numero1,numero2,resultado;
    char operacao;
    float div;

    cout<<"Digite o primeiro numero: "<<endl;
    cin>>numero1;
    cout<<"Digite o segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Digite a operacao : "<<endl;
    cin>>operacao;

    switch(operacao)
    {
        case '+':
            resultado = numero1 + numero2;
            cout<< "Soma: "<<resultado<<endl;
            break;
        case '-':
            resultado = numero1 - numero2;
            cout<< "Subtracao: "<<resultado<<endl;
            break;
        case '*':
            resultado = numero1 * numero2;
            cout<< "Multiplicacao: "<<resultado<<endl;
            break;
        case '/':
        if(numero2 != 0)
        {
            div = (float)numero1 / numero2;
            resultado = numero1 / numero2;
            cout<< "Divisao: "<<div<<endl;
        }else{
            cout<<"Divisao por zero não existe";
        }
            break;
        default:
            cout<<"Operacao inexistente"<<endl;
            break;
    }

    return 0;
}
