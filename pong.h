#ifndef PONG_H_INCLUDED
#define PONG_H_INCLUDED

class JUGADOR{
    int x,y;
public:
    JUGADOR(int _x ,int _y);
    void pintar() const;
    void borrar() const;
    void Y(int _y){ y+= _y;}
    int RY(){return y;}
    int RX(){return x;}
};

class PELOTA{
    int x,y;
    int dx, dy;
public:
    PELOTA(int _x, int _y, int _dx, int _dy);
    void pintar() const;
    void borrar() const;
    void mover(JUGADOR A, JUGADOR B);
    void asign(int _x, int _y){x= _x; y= _y;}
};

class MENU{
public:
    void pintar_portada(int &a);
};


#endif // PONG_H_INCLUDED
