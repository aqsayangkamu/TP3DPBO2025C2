#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;


class Monitor : public Komponen
{
private:
    int resolusi_x;
    int resolusi_y;
    string port_display;
public:
    Monitor()
    {


    }


    Monitor(int resolusi_x, int resolusi_y, string port_display, string merk, string nama) : Komponen(merk, nama)
    {
        this->resolusi_x = resolusi_x;
        this->resolusi_y = resolusi_y;
        this->port_display = port_display;
    }


    void setresolusi_x(int resolusi_x)
    {
        this->resolusi_x = resolusi_x;
    }
    
    void setresolusi_y(int resolusi_y)
    {
        this->resolusi_y = resolusi_y;
    }


    void setport_display(float port_display)
    {
        this->port_display = port_display;
    }


    int getresolusi_x()
    {
        return this->resolusi_x;
    }
    
    int getresolusi_y ()
    {
        return this->resolusi_y ;
    }


    string getport_display()
    {
        return this->port_display;
    }


    ~Monitor()
    {


    }
};
