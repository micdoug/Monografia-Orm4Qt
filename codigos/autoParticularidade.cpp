const int& constRef(int& valor)
{
    return valor;
}

int main()
{
    int valor = 10;
    //O tipo deduzido é (int) e não (const int&)
    auto numero = constRef(valor);
}