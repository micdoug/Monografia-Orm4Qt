//Inicialização de vetores
int vetor[] = {1, 2, 3, 4};  //Válido em C++98
//Inicialização de containers
vector<int> lista1 = {1, 2, 3, 4}; //Válido em C++11

//Declaração da classe Container<T>
template<typename T> class Container {
   Container(const initializer_list<T> &list);
};
    
//Válido em C++11 já que a classe Container<T> tem um construtor
//que recebe como parâmetro um objeto do tipo initializer_list<T>
Container<int> lista2 = {1, 2, 3, 4}; 