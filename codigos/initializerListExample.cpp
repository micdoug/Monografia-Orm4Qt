//Inicializa��o de vetores
int vetor[] = {1, 2, 3, 4};  //V�lido em C++98
//Inicializa��o de containers
vector<int> lista1 = {1, 2, 3, 4}; //V�lido em C++11

//Declara��o da classe Container<T>
template<typename T> class Container {
   Container(const initializer_list<T> &list);
};
    
//V�lido em C++11 j� que a classe Container<T> tem um construtor
//que recebe como par�metro um objeto do tipo initializer_list<T>
Container<int> lista2 = {1, 2, 3, 4}; 