//Exemplo de expressão lamda
function<const string()> lambda = []() { return string("Exemplo."); };
//Executando a expressão
cout << lambda() << endl;
