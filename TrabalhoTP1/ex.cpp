#include"mylib.h"
//MENU


void ex1(){

    int x = 1;

    while (x) {
        int line, col;

        char border, fill;

        cout << "\n==========================[Desenha Retangulo]==========================\n";

        cout << "\nDigite a quantidade de linhas: ";
        cin >> line;
        cout << "\nDigite a quantidade de colunas: ";
        cin >> col;
        cout << "\nDigite o char de contorno: ";
        cin >> border;
        cout << "\nDigite o char para o preenchimento: ";
        cin >> fill;
        cout << '\n';
        desenha_retangulo_preenchido(line,col,border,fill);

        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex2(){

    int x = 1;
    while (x) {
        double raio;
        cout << setprecision(2)<<fixed;

        cout << "\n==========================[Volume Esfera]==========================\n";

        cout <<"\nDigite a medida do raio: ";
        cin >> raio;
        cout << "\nVolume: " << volume_esfera(raio);

        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex3(){

    int x = 1;
    while (x) {
        unsigned long long int num;
        unsigned long long int fat;
        cout << setprecision(2)<<fixed;
        cout << "\n==========================[Fatorial]==========================\n";

        cout << "\nDigite um numero iinteiro entre 0 e 20:";
        cin >> num;
        if(num > 20){
            cout << "\nNumero indisponivel\n";
            cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        }
        else{
            fat = fatorial(num);
            cout << "\nFatorial de: "<< num << " = " << fat;
            cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        }
        cin >> x;
        system("cls");
    }

}
void ex4(){

    int x = 1;
    while (x) {
        int num;
        cout << "\n==========================[Fibonacci]==========================\n";

        cout << "\nDigite o numero para sequencia fibonacci na sequencia: ";
        cin >> num;
        cout << "\nSequencia: " << fib(num);
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex5(){

    int x = 1;
    while (x) {
        int num;
        cout << "\n==========================[Numero Regular]==========================\n";

        cout<<"\nDigite um numero inteiro: ";
        cin >> num;
        bool is_reg = reg(num);

        cout << "\n"<<num; if(is_reg==0) cout<< " Nao";
        cout<< " é regular.\n";

        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex6(){

    int x = 1;
    while (x) {
        int n, p;
        cout << "\n==========================[Combinacoes]==========================\n";

        cout << "\nDigite o valor de N: ";
        cin >> n;
        cout << "\nDigite o valor de P menor que N: ";
        cin >> p;
        if(p > n || n > 20)
            cout << "\nValor de N deve ser menor que 20\n";
        else
            cout << "\nTotal de combinacoes: " << comb(n,p) << endl;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex7(){

    int x = 1;
    while (x) {
        string palavra;
        bool is_pal;
        cout << "\n==========================[Palindromo]==========================\n";

        cout << "\nDigite uma palavra: ";
        cin >> palavra;
        is_pal = palindromo(palavra);
        cout <<"\n=> " <<palavra;
        if(is_pal == 0) cout << " Nao";
        cout << " é palindromo.\n";
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex8(){

    int x = 1;
    while (x) {
        string palavra;
        string minusc;
        cout << "\n==========================[Minusculas]==========================\n";

        cout << "\nDigite palavras com letra maiusculas: ";
        cin.ignore();
        getline(cin, palavra);
        minusc = to_lower_case( palavra );
        cout << "\nConvertido: " << minusc <<"\n\n";
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex9(){

    int x = 1;
    while (x) {
        string palavra;
        string maiusc;
        cout << "\n==========================[Maiusculas]==========================\n";

        cout << "\nDigite palavras com letra minuscula: ";
        cin.ignore();
        getline(cin, palavra);
        maiusc = to_upper_case( palavra );
        cout <<"\nConvertido: " << maiusc;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex10(){

    int x = 1;
    while (x) {
        string text;
        int length;
        char border;
        cin.ignore();
        cout << "\n==========================[Centralizar Texto]==========================\n";

        cout << "\nDigite um texto: ";
        getline(cin,text);
        cout << "\nDigite a Largura da caixa: ";
        cin  >> length;
        cout << "\nDigite char para prencher a borda: ";
        cin  >> border;
        cout << '\n';
        caixa_com_texto_centralizado(length,  border,  text);
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex11(){

    int x = 1;
    while (x) {
        int a,b,c;
        cout << "\n==========================[Ordenacao Numeral]==========================\n";

        cout << "\nDigite primeiro valor: ";
        cin >> a;
        cout << "\nDigite o segundo valor: ";
        cin >> b;
        cout << "\nDigite o terceiro valor: ";
        cin >> c;
        troca(&a,&b,&c);
        cout << "\nSequencia: " << a << "" << b << "" << c << '\n';
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex12(){

    int x = 1;
    while (x) {
        char str[1000];
        cout << "\n==========================[Tamanho String]==========================\n";
        int size;

        cout << "\nDigite uma palavra: ";
        cin.ignore();
        gets(str);
        size = strlen(str);
        cout << "\n" << str << " tem o tamanho de " <<  size  << " caracteres.\n";
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex13(){

    int x = 1;
    while (x) {
        char str[100];
        char str1[100];
        cin.ignore();
        string m = "[13]  COMPARA STRING";
        cout << "\n==========================[Comparar String]==========================\n";

        cout << "\nDigite uma palavra: ";
        gets(str);
        cout << "\nDigite outra palavra: ";
        gets(str1);
        char* s = str;
        char* t = str1;
        int result = compare(s,t);
        switch(result){
            case 1:
                cout << "\n" << str << " lexicofraficamente posterior a " << str1 << "\n";
                break;
            case -1:
                cout << "\n" << str << " lexicofraficamente anterior a " << str1 << "\n";
                break;
            case 0:
                cout << "\nDuas palavras sao iguais.\n";
                break;
        }
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex14(){

    int x = 1;
    while (x) {
        char p[100] = "99999999";
        cout << "\n==========================[String Int]==========================\n";

        cout << "\nDigite um numero inteiro de 0 a 9: ";
        cin.ignore();
        gets(p);
        int size = strlen(p);
        int y = toInt(p);
        cout << "\nConvertido: " << y;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex15(){

    int x = 1;
    while (x) {
        string str;
        cin.ignore();
        cout << "\n==========================[Remove Espacos]==========================\n";

        cout << "\nDigite um texto: ";
        getline(cin, str);
        string str1 = substr(str);
        cout <<"\nEspacos removidos: " <<str1 << endl;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex16(){

    int x = 1;
    while (x) {
        string str;
        char ch;
        cin.ignore();
        cout << "\n==========================[Quebrar String]==========================\n";

        cout << "\nDigite um texto: ";
        getline(cin, str);
        cout << "\nDigite um char: ";
        ch = getchar();
        int n;
        cout << "\n" << str << endl;
        string* s =  split(str,ch,n);
        printText(s,n);
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex17(){

    int x = 1;
    while (x) {
        cin.ignore();
        cout << "\n==========================[Buscar String]==========================\n";

        cout << "\nDigite uma palavra: ";
        string str;
        getline(cin, str);
        cout << "\nDigite outra palavra: ";
        string str1;

        getline(cin, str1);
        int pos = find(str, str1);

        if(pos > (int) str.length()){
            cout << "\n=> " << str1 <<" nao e encontrada em "<<str<<"\n";
        }
        else{
            cout << "\n=> " << str1 <<" comeca na posicao "<< pos <<" de "<< str << endl;
        }
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex18(){

    int x = 1;
    while (x) {
        char str[100];
        char str1[100];
        cin.ignore();
        cout << "\n==========================[Soma numero gigantes]==========================\n";

        cout << "\nDigite primeiro numero: ";
        gets(str);
        cout << "\nDigite segundo numero:  ";
        gets(str1);
        char* p = str;
        char* q = str1;
        char* sum = soma_numeros_gigantes(p,q);
        cout <<"\nTotal: " << sum << endl;
        delete [] sum;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex19(){

    int x = 1;
    while (x) {
        int v[1000];
        int n,i;
        int less;
        int greater;
        cout << "\n==========================[Maior e Menor]==========================\n";

        cout << "\nDigite quantidade de numeros do vetor: ";
        cin >> n;
        if(n == 1)
           greater = less = 0;
        for( i=0;i<n;i++){
            cout << "\nDigite o termo " << i+1 <<" do vetor: ";
            cin>>v[i];
        }
        v[i] = 0;
        int* p = v;

        search(p, greater, less);
        cout <<"\nMaior: " << greater
             <<"\nMenor: " <<less;
        delete [] p;
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
void ex20(){

    int x = 1;
    while (x) {
        int column;
        int line;
        string m = "[20] SOMA MATRIZ";
        cout << "\n==========================[Soma de matriz]==========================\n";

        cout << "\nInforme quantidade de linhas: ";
        cin >> line;
        cout << "\nInforme quantidade de colunas: ";
        cin >> column;
        int** A = newmat(line, column);
        int** B = newmat(line, column);
        cout << "\nDigite os valores da matriz A:\n\n";
        readmat(A,line,column);
        cout << "\nDigite os valores da matriz B:\n\n";
        readmat(B,line,column);
        int** C =  soma_matriz(A,B,line, column);
        cout << "\nSoma das matriz A e B sao:\n\n";
        coutmat(C,line,column);
        deletemat(A,line);
        deletemat(B,line);
        deletemat(C,line);
        cout << "\nVoltar   [0]\nContinua [1]\n-> ";
        cin >> x;
        system("cls");
    }

}
