QSqlDatabase database = QSqlDatabase::addDatabase("QPSQL"); //Etapa (1)
database.open();	//Etapa (1)
QSqlQuery query("comando sql"); //Etapa (2)
query.exec();	//Etapa (3)
//** Processa o resultado retornado, etapa (4) **//
database.close();	//Etapa (5)