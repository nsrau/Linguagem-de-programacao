using namespace std;

class Retangulo
{
public:
    void setArea(int altura, int largura) {
        this->altura = altura;
        this->largura = largura;
    };
    int getCalArea()
    {
        return altura * largura;
    };

private:
    int altura;
    int largura;
};
