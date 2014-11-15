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
  //Declarando container unificado
  function<const string()> funcao = nullptr;
  //Atribuindo e utilizando uma fun��o
  funcao = getTexto;
  cout << funcao() << endl;
  //Atribuindo e utilizando um m�todo
  Exemplo e;
  funcao = bind(&Exemplo::getTexto, &e); //relaciona inst�ncia
  cout << funcao() << endl;
}