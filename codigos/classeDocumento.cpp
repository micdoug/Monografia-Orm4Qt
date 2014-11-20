class Documento
{
public:
    //Construtor e destrutor
    Documento();
    virtual ~Documento();

    //Métodos acessadores
    qlonglong codigo() const;
    void setCodigo(const qlonglong &codigo);
    QString nome() const;
    void setNome(const QString &nome);
    QString descricao() const;
    void setDescricao(const QString &descricao);
    QDateTime ultimaAlteracao() const;
    void setUltimaAlteracao(const QDateTime &ultimaAlteracao);
    quint16 versao() const;
    void setVersao(const quint16 &versao);
    QByteArray arquivo() const;
    void setArquivo(const QByteArray &arquivo);

private:
    //Atributos privados
    qlonglong m_codigo;
    QString m_nome;
    QString m_descricao;
    QDateTime m_ultimaAlteracao;
    quint16 m_versao;
    QByteArray m_arquivo;
};
