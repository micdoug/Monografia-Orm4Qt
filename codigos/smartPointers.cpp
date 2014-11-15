//Declara um weak_ptr sem iniciliza��o
weak_ptr<int> wptr;

//Abertura de escopo
{
    //Declara um shared_ptr
    shared_ptr<int> sptr = shared_ptr<int>(new int(10));
    //Declara um unique_ptr
    unique_ptr<int> uptr = unique_ptr<int>(new int(10));
    //Inicializa o weak_ptr
    wptr = sptr;
    //Testa se mem�ria ainda n�o foi desalocada
    if(auto ptr = wptr.lock())
    {
        //C�digo ser� executado, pois sptr ainda n�o perdeu escopo
        cout << *ptr << endl;
    }
} //Fim do escopo, sptr e uptr s�o desalocados

//Testa se mem�ria ainda n�o foi desalocada
if(auto ptr = wptr.lock())
{
    //N�o ser� executado, pois sptr perdeu escopo
    cout << *ptr << endl;
}