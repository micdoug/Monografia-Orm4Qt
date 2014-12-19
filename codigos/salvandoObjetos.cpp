//Declarando um usu�rio
Usuario u;
u.setNome("Michael Dougras da Silva");

//Criando uma inst�ncia de reposit�rio
Orm4Qt::Repository rep(
	new Orm4Qt::PostgreSqlProvider
	("usuario", "senha", "bancoDeDados",
	"servidor"));

//Salvando um objeto no banco de dados
if (rep.saveObject<Usuario>(u))
{
	qDebug() << u.codigo();
}
//Tratamento de erro
else
{
	//Exibe mensagem de erro
	qDebug() << rep.lastError()->description();
}