//Declara��o de um vetor
int vetor[] = {1, 2, 3, 4, 5};
//Acesso sequencial nova sintaxe, com c�pia
for (int i: vetor) { //i copia o valor de cada elemento
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, com refer�ncia
for (int &i: vetor) { //N�o h� c�pia de valores
    cout << i << endl;
}

//Declara��o de um container
vector<int> container = {1, 2, 3, 4, 5};
//Acesso sequencial nova sintaxe, com c�pia
for (int i : container) { //i copia o valor de cada elemento
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, com refer�ncia
for (int &i: container) { //N�o h� c�pia de valores
    cout << i << endl;
}
//Acesso sequencial nova sintaxe, somente-leitura com refer�ncia
for (const int &i: container) {
    cout << i << endl;
}