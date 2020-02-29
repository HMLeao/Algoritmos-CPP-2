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
};

class Terrestre : public Veiculo
{
private:
    int cap_pass;
public:
    Terrestre(const char * n) : Veiculo(n)
    {
        this->cap_pass = 5;
    }

    void setCapPass(int);
    int getCapPass();
};

class Aquatico : public Veiculo
{
private:
    float carga_max;
public:
    Aquatico(const char * n) : Veiculo(n)
    {
        this->carga_max = 10;
    }
    
    void setCargaMax(float);
    float getCargaMax();
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

    void setVelMax(float);
    float getVelMax();
};