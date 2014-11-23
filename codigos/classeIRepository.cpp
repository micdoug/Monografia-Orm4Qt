template<class T> class IRepository
{
public:
  //Construtor e destrutor
  IRepository(){}
  virtual ~IRepository(){}

  //Retorna um texto com a descrição do último erro ocorrido.
  QString lastError() const;
  //Cria um novo registro de um objeto no banco de dados
  virtual bool createObject(T &object);
  //Atualiza o registro de um objeto no banco de dados 
  virtual bool updateObject(T &object);
  //Deleta o registro de um objeto no banco de dados
  virtual bool deleteObject(T &object);
  //Seleciona uma lista de objetos do banco de dados 
  //que obedecem os filtros informados.
  virtual bool selectObjects(QList<T> &list, QMap<QString, QVariant> filters);
  //Retorna a quantidade de registros de objetos no banco de dados 
  //que obedecem os filtros informados.
  virtual bool countObjects(int &count, QMap<QString, QVariant> filters);
  //Pesquisa um registro específico a partir do id informado
  virtual bool getObject(const QVariant &id, T &object);
};
