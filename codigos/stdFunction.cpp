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
  //Declarando container unificado
  function<const string()> funcao = nullptr;
  //Atribuindo e utilizando uma função
  funcao = getTexto;
  cout << funcao() << endl;
  //Atribuindo e utilizando um método
  Exemplo e;
  funcao = bind(&Exemplo::getTexto, &e); //relaciona instância
  cout << funcao() << endl;
}