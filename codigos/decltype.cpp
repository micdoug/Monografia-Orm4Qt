const int& constRef(int& valor)
{
    return valor;
}

int main()
{
    int valor = 10;
    //O tipo deduzido � (const int&)
    decltype(constRef(valor)) numero = constRef(valor);
    //Simplifica��o proposta na C++14
    decltype(auto) num = constRef(valor);
}