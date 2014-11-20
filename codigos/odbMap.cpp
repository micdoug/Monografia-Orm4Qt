//Mapeamento com o ODB Orm
#pragma db object(Documento) table("t_documento")
#pragma db member(Documento::m_codigo) id auto column("c_codigo")
#pragma db member(Documento::m_nome) column("c_nome")
#pragma db member(Documento::m_descricao) column("c_descricao")
#pragma db member(Documento::m_ultimaAlteracao) \
    column("c_ultimaalteracao")
#pragma db member(Documento::m_versao) column("c_versao")
#pragma db member(Documento::m_arquivo) column("c_arquivo")

//Estrutura usada para contar a quantidade de registros
#pragma db view object(Documento)
struct DocumentoInfo
{
    #pragma db column("count(" + Documento::m_codigo + ")")
    std::size_t quantidade;
};

//Estrutura utilizada para limitar as propriedades pesquisadas
#pragma db view object(Documento)
struct DocumentoView
{
    #pragma db column(Documento::m_codigo)
    qlonglong codigo;
    #pragma db column(Documento::m_nome)
    QString nome;
    #pragma db column(Documento::m_descricao)
    QString descricao;
    #pragma db column(Documento::m_ultimaAlteracao)
    QDateTime ultimaAlteracao;
    #pragma db column(Documento::m_versao)
    quint16 versao;
};
