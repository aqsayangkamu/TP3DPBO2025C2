#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Monitor.cpp"


using namespace std;


class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    vector<Monitor> monitorList;
public:
    Komputer()
    {


    }


    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, vector<Monitor> monitorList)
    {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
        this->monitorList = monitorList;
    }


    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }


    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }    
    
    void setHarddrive(Harddrive harddrive)
    {
        this->harddrive = harddrive;
    }
    
    void setMonitor(vector<Monitor> monitorList)
    {
        this->monitorList = monitorList;
    }    
    
    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }
    
    void addMonitor(Monitor monitor)
    {
        this->monitorList.push_back(monitor);
    }

    string getNama()
    {
        return this->nama;
    }


    Cpu getCpu()
    {
        return this->cpu;
    }


    vector<Ram> getRamList() // return vector
    {
        return this->ramList;
    }
    
    
    Harddrive getHarddrive()
    {
        return this->harddrive;
    }
    
    vector<Monitor> getMonitorList() // return vector
    {
        return this->monitorList;
    }

    ~Komputer()
    {


    }
};
