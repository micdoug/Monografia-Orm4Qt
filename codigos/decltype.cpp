const int& constRef(int& valor)
{
    return valor;
}

int main()
{
    int valor = 10;
    //O tipo deduzido é (const int&)
    decltype(constRef(valor)) numero = constRef(valor);
    //Simplificação proposta na C++14
    decltype(auto) num = constRef(valor);
}