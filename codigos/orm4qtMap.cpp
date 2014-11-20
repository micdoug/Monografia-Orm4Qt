//Orm4Qt annotations
ORM4QT_BEGIN
    CLASS(name="Documento", autocolumn="codigo", table="t_documento")
    PROPERTY(m_codigo, name="codigo", column="c_codigo", key=true)
    PROPERTY(m_nome, name="nome", column="c_nome")
    PROPERTY(m_descricao, name="descricao", column="c_descricao")
    PROPERTY(m_ultimaAlteracao, name="ultimaAlteracao",
	     column="c_ultimaalteracao")
    PROPERTY(m_versao, name="versao", column="c_versao")
    PROPERTY(m_arquivo, name="arquivo", column="c_arquivo")
ORM4QT_END
