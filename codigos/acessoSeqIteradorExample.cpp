//Declaração de um container
vector<int> container = {1, 2, 3, 4, 5};
//Acesso sequencial via iteradores do tipo constantes
for (vector<int>::const_iterator i = container.cbegin(); 
     i != container.cend(); ++i) {
    cout << *i << endl;
}
//Acesso sequencial via iteradores do tipo não constantes
for (vector<int>::iterator i = container.begin(); 
     i != container.end(); ++i) {
    cout << *i << endl;
}