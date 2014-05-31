class Class
{
public:
    std::function<int()> getLambda()
    {
	return [&]() -> int { return this->valor;};
    }
private:
    int valor;
};