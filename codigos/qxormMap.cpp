//Macro que ativa mecanismo de classes friend
QX_REGISTER_FRIEND_CLASS(Entidades::Documento)

//Macros extras definidas no arquivo de definição da classe
QX_REGISTER_PRIMARY_KEY(Entidades::Documento, qlonglong)
#if  defined(Q_OS_WIN32)
  QX_REGISTER_COMPLEX_CLASS_NAME_HPP_EXPORT_DLL(Entidades::Documento, \
              qx::trait::no_base_class_defined, 0, Documento)
#elif  defined(Q_OS_LINUX)
  QX_REGISTER_COMPLEX_CLASS_NAME_HPP(Entidades::Documento, \
        qx::trait::no_base_class_defined, 0, Documento)
#endif

//Reimplementação de método de registro de metadados
namespace qx
{
  template<> void register_class(QxClass<Entidades::Documento> &t)
  {
      t.setName("t_documento");
      t.id(&Entidades::Documento::m_codigo, "c_codigo");
      t.data(&Entidades::Documento::m_nome, "c_nome");
      t.data(&Entidades::Documento::m_descricao, "c_descricao");
      t.data(&Entidades::Documento::m_ultimaAlteracao, 
      "c_ultimaalteracao");
      t.data(&Entidades::Documento::m_versao, "c_versao");
      t.data(&Entidades::Documento::m_arquivo, "c_arquivo");
  }
}
