void funcao(char* valor)
{
    cout << "char*" << endl;
}

void funcao (int valor)
{
    cout << "int" << endl;
}

void main()
{
    funcao(NULL);  //Executa funcao (int valor)
    funcao(nullptr); //Executa funcao(char* valor)
}