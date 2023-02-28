// TP01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "----------------------------------------------\n";
    cout << " Estrutura de Dados - Calculo de Media em C++\n";
    cout << "----------------------------------------------\n\n";

    float p1 = 0.0F;
    float p2 = 0.0F;
    string nome = "";

    cout << " Digite seu nome: ";
    cin >> nome;
    cout << "\n Digite a nota de sua P1: ";
    cin >> p1;
    while (p1 < 0 || p1 > 10) {
        cout << " Valor invalido. Digite uma nota de 0 a 10 para a P1: ";
        cin >> p1;
    }
    cout << "\n Digite a nota de sua P2: ";
    cin >> p2;
    while (p2 < 0 || p2 > 10) {
        cout << " Valor invalido. Digite uma nota de 0 a 10 para a P2: ";
        cin >> p2;
    }
    cout << "\n================================================================\n";

    float media = (p1 + p2) / 2;

    if (media < 6) {
        cout << " Sua media foi '" << media << "', " << nome << ". Voce esta REPROVADO(A)!!";
        cout << "\n================================================================\n\n\n";
    }
    else {
        cout << " Sua media foi '" << media << "', " << nome << ". Parabens, Voce esta APROVADO(A)!!";
        cout << "\n================================================================\n\n\n";
    }
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
