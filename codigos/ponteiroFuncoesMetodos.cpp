class Exemplo {
public:
    const string getTexto()
    { return m_texto; }
    //...
private:
    string m_texto;
};

const string getTexto()
{ return string("Exemplo de função."); }

int main()
{
    //Ponteiro para função
    const string (*funcao) () = &getTexto;
    //Ponteiro para método
    const string (Exemplo::*metodo)() = &Exemplo::getTexto;

    //Utilizando o ponteiro de funçao
    cout << funcao() << endl;
    //Utilizando o ponteiro de método
    Exemplo ex;
    cout << (ex.*metodo)() << endl;

    funcao = metodo; //Inválido
    metodo = funcao; //Inválido
}