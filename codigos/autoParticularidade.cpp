const int& constRef(int& valor)
{
    return valor;
}

int main()
{
    int valor = 10;
    //O tipo deduzido � (int) e n�o (const int&)
    auto numero = constRef(valor);
}