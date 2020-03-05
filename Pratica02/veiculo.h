#include <iostream>

using namespace std;


class Veiculo 
{
protected:
    string nome;
public: 
    Veiculo(const char * n)
    {
        this->nome = n;
        cout << "Um novo veiculo foi criado com o nome " << this->nome  << endl;
    }

    virtual ~Veiculo()
    {
        cout << "o veiculo " << this->nome << " foi destruido" << endl;
    }
    virtual void mover() = 0;
};



class Terrestre : public virtual Veiculo
{
private:
    int cap_pass;
public:
    Terrestre(const char * n) : Veiculo(n)
    {
        this->cap_pass = 5;
    }

    virtual ~Terrestre()
    {
        cout << "o veiculo terrestre " << this->nome << " foi destruido" << endl;
    }

    void setCapPass(int);
    int getCapPass();
    void mover();

protected:
    Terrestre() : Veiculo("subclasse Terrestre") {}
};



class Aquatico : public virtual Veiculo
{
private:
    float carga_max;
public:
    Aquatico(const char * n) : Veiculo(n)
    {
        this->carga_max = 10;
    }
    
    virtual ~Aquatico()
    {
        cout << "o veiculo aquatico " << this->nome << " foi destruido" << endl;
    }

    void setCargaMax(float);
    float getCargaMax();
    void mover();
protected:
    Aquatico() : Veiculo("subclasse Aquatico") {}
};



class Aereo : public Veiculo
{
private:
    float vel_max;
public:
    Aereo(const char * n) : Veiculo(n) 
    {
        this->vel_max = 100;
    }    

    virtual ~Aereo()
    {
        cout << "o veiculo aereo " << this->nome << " foi destruido" << endl;
    }

    void setVelMax(float);
    float getVelMax();
    void mover();
};




class Anfibio : public Terrestre, public Aquatico
{
public:
    Anfibio(const char * nome) : Veiculo(nome), Terrestre(), Aquatico(){}
    void mover();
};