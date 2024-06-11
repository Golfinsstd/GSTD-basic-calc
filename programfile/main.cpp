/*
---------------calculadora da GSTD---------------
--autor: jabutirsom64
--linguagem:c++
--plafaforma:linux
-------------------------------------------------
*/
//biblioteca utilizada para trabalhar com entrada e saida de dados
#include <iostream>
//definindo o namespace
using namespace std;
//inicio do programa
int main()
{
  //enquanto esse laço while estiver verdadeira, ele ira executar nosso programa
    while(true)
    {
    //variavel utilizada para guardar o sinal da operação que o usuario inserir
    char sinal;
    //variaveis utilizadas para guardar os numeros que o usuario digitar
    float fn =0.0;
    float sn =0.0;
    //solicita a entrada do usuario
    cout << "bem vindo a calculadora da GSTD, para sair, digite seis numeros 0" << "\n";
    cout << "digite sua conta:\n";
    cin >> fn >> sinal >> sn;
    //verifica o sinal da operação e faz a operação solicitada pelo usuario
    switch (sinal)
    {
    //adição
    case '+':
      cout << "resultado:" << fn + sn <<"\n";
    break;
    //subtração
    case '-':
      cout << "resultado:" << fn - sn <<"\n";
    break;
    //multiplicação
    case '*':
      cout << "resultado:" << fn * sn <<"\n";
    break;
    //divisão
    case '/':
      cout << "resultado:" << fn / sn <<"\n";
    break;
    } 
    //caso o usuario digite "000000" em qualquer entrada, o programa ira ser fechado
    if(sinal == 00000)
    {
      break;
    }
    if(fn == 000000) 
    {
      break;
    }  
    if(sn == 000000)
    {
      break;
    }
    }
} 