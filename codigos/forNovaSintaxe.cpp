//Declaração de um vetor
int vetor[] = {1, 2, 3, 4, 5};
//Acesso sequencial nova sintaxe, com cópia
for (int i: vetor) { //i copia o valor de cada elemento
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, com referência
for (int &i: vetor) { //Não há cópia de valores
    cout << i << endl;
}

//Declaração de um container
vector<int> container = {1, 2, 3, 4, 5};
//Acesso sequencial nova sintaxe, com cópia
for (int i : container) { //i copia o valor de cada elemento
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, com referência
for (int &i: container) { //Não há cópia de valores
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, somente-leitura com referência
for (const int &i: container) {
    cout << i << endl;
}