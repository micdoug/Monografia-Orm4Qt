//Declara um weak_ptr sem inicilização
weak_ptr<int> wptr;

//Abertura de escopo
{
    //Declara um shared_ptr
    shared_ptr<int> sptr = shared_ptr<int>(new int(10));
    //Declara um unique_ptr
    unique_ptr<int> uptr = unique_ptr<int>(new int(10));
    //Inicializa o weak_ptr
    wptr = sptr;
    //Testa se memória ainda não foi desalocada
    if(auto ptr = wptr.lock())
    {
        //Código será executado, pois sptr ainda não perdeu escopo
        cout << *ptr << endl;
    }
} //Fim do escopo, sptr e uptr são desalocados

//Testa se memória ainda não foi desalocada
if(auto ptr = wptr.lock())
{
    //Não será executado, pois sptr perdeu escopo
    cout << *ptr << endl;
}