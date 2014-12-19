//Declarando um usuário
Usuario u;

//Acessando os metadados da classe
qDebug() << u.reflection()->tags()["name"];
qDebug() << u.reflection()->tags()["table"];
qDebug() << u.reflection()->tags()["autocolumn"];

//Acessando os metadados da primeira propriedade
qDebug() << u.reflection()->properties()[0]->tags()["column"];
qDebug() << u.reflection()->properties()[0]->tags()["name"];

//Alterando o valor do atributo codigo para 5
u.reflection()->properties()[0]->setValue(5);

//Acessando o valor do atributo codigo
qDebug() << u.reflection()->properties()[0]->value();