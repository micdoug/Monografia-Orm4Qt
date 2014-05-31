class Classe
{   
private:
    int inteiro;
    std::string texto;
    
ORM4QT_BEGIN

CLASS(name="Classe", table="tabela")
PROPERTY(inteiro, column="numero")
PROPERTY(texto, column="frase")

ORM4QT_END
};