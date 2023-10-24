#ifndef NEURONA_H
#define NEURONA_H

using namespace std;

class Neurona
{
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;

public:
    Neurona(int _id, float _voltaje, int _posicion_x, int _posicion_y, int _red, int _green, int _blue)
        : id(_id), voltaje(_voltaje), posicion_x(_posicion_x), posicion_y(_posicion_y), red(_red), green(_green), blue(_blue){
    }
    int getID() const{
        return id;
    }
    float getVoltaje() const{
        return voltaje;
    }
    int getPosicion_x() const{
        return posicion_x;
    }
    int getPosicion_y() const{
        return posicion_y;
    }
    int getRed() const{
        return red;
    }
    int getGreen() const{
        return green;
    }
    int getBlue() const{
        return blue;
    }
    void print() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Voltaje: " << voltaje << std::endl;
        std::cout << "Posici�n X: " << posicion_x << std::endl;
                std::cout << "Posici�n Y: " << posicion_y << std::endl;
                         std::cout << "Red: " << red << std::endl;
        std::cout << "Green: " << green << std::endl;
        std::cout << "Blue: " << blue << std::endl;
    }
};

#endif // NEURONA_H
