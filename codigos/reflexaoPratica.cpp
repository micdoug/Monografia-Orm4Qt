#include <QString>
#include "Orm4Qt/annotations.h"

class Usuario
{
public:
	//Construtor e destrutor
	Usuario() = default;
	virtual ~Usuario() = default;

	//Métodos acessadores
	int codigo() const;
	void setCodigo(int codigo);
	QString nome() const;
	void setNome(const QString &nome);

private:
	//Atributos
	int m_codigo;
	QString m_nome;

	//Definição de metadados
	ORM4QT_BEGIN
		CLASS(name = "Usuario", table = "t_usuarios", autocolumn = "codigo")
		PROPERTY(m_codigo, name = "codigo", column = "c_codigo")
		PROPERTY(m_nome, name = "nome", column = "c_nome")
	ORM4QT_END
};