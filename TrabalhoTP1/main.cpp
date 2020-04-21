#include"mylib.h"
using namespace std;

int main(){

    int ex;

    cout << "----------------------------Funcoes----------------------------"<<endl;
    cout << "(01) Desenha retangulo \t\t\t (11) Ordenar tres numeros" <<endl;
    cout << "(02) Volume esfera \t\t\t (12) Tamanho string" <<endl;
    cout << "(03) Fatorial \t\t\t\t (13) Compara string" <<endl;
    cout << "(04) Fibonacci \t\t\t\t (14) Converte string para int" <<endl;
    cout << "(05) Numero Regular \t\t\t (15) Remove espacos em branco inicio e fim" <<endl;
    cout << "(06) Combinacoes \t\t\t (16) Quebrar string" <<endl;
    cout << "(07) Palindromo \t\t\t (17) Buscar na string" <<endl;
    cout << "(08) Converte para minusculas \t\t (18) Soma numeros gigantes" <<endl;
    cout << "(09) Converte para maiusculas \t\t (19) Maior e menor do vetor" <<endl;
    cout << "(10) Centralizar texto \t\t\t (20) Soma matriz" <<endl;

    cout << "\n\nDigite o numero da funcao escolhida ou 0 para finalizar: ";
    cin  >> ex;

    while (ex) {
        switch (ex) {
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;
            case 10:
                ex10();
                break;
            case 11:
                ex11();
                break;
            case 12:
                ex12();
                break;
            case 13:
                ex13();
                break;
            case 14:
                ex14();
                break;
            case 15:
                ex15();
                break;
            case 16:
                ex16();
                break;
            case 17:
                ex17();
                break;
            case 18:
                ex18();
                break;
            case 19:
                ex19();
                break;
            case 20:
                ex20();
                break;
            default:
            system("cls");
            cout << "\n-------------------------=Numero invalido=-------------------------\n\n\n";
        }

        cout << "----------------------------Funcoes----------------------------"<<endl;
        cout << "(01) Desenha retangulo \t\t\t (11) Ordenar tres numeros" <<endl;
        cout << "(02) Volume esfera \t\t\t (12) Tamanho string" <<endl;
        cout << "(03) Fatorial \t\t\t\t (13) Compara string" <<endl;
        cout << "(04) Fibonacci \t\t\t\t (14) Converte string para int" <<endl;
        cout << "(05) Numero Regular \t\t\t (15) Remove espacos em branco inicio e fim" <<endl;
        cout << "(06) Combinacoes \t\t\t (16) Quebrar string" <<endl;
        cout << "(07) Palindromo \t\t\t (17) Buscar na string" <<endl;
        cout << "(08) Converte para minusculas \t\t (18) Soma numeros gigantes" <<endl;
        cout << "(09) Converte para maiusculas \t\t (19) Maior e menor do vetor" <<endl;
        cout << "(10) Centralizar texto \t\t\t (20) Soma matriz" <<endl;

        cout << "\n\nDigite o numero da funcao escolhida ou 0 para finalizar: ";
        cin  >> ex;
    }
}
