class Exemplo {
public:
    const string getTexto()
    { return m_texto; }
    //...
private:
    string m_texto;
};

const string getTexto()
{ return string("Exemplo de fun��o."); }

int main()
{
    //Ponteiro para fun��o
    const string (*funcao) () = &getTexto;
    //Ponteiro para m�todo
    const string (Exemplo::*metodo)() = &Exemplo::getTexto;

    //Utilizando o ponteiro de fun�ao
    cout << funcao() << endl;
    //Utilizando o ponteiro de m�todo
    Exemplo ex;
    cout << (ex.*metodo)() << endl;

    funcao = metodo; //Inv�lido
    metodo = funcao; //Inv�lido
}