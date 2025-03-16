#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "Monitor.cpp"


using namespace std;


int main() {
    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    Monitor monitor1(3440, 1440, "Display port", "Samsung", "odyssey oled g8");


    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive, {monitor1});
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
    komputer.addMonitor(Monitor(1920, 1080, "HDMI", "MSI", "OPTIX G2422C"));
   
    cout << "Informasi Komputer:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Cpu       : " << komputer.getCpu().getMerk() << ' ' << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core) " << "~" << komputer.getCpu().getKecepatanGHz() << "GHz" << endl;
    for (Ram& ram : komputer.getRamList())
    {
        cout << "Ram       : ";
        cout << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getKapasitasGB() << " GB) " << ram.getDdr() << endl;
    }
    for (Monitor& monitor : komputer.getMonitorList())
    {
        cout << "Monitor   : ";
        cout << monitor.getMerk() << ' ' << monitor.getNama() << " (" << monitor.getresolusi_x() << " x " << monitor.getresolusi_y() << ") " << "Port Connected : " << monitor.getport_display() << endl;
    }
    cout << "Harddrive : " << komputer.getHarddrive().getTipeDrive() << ' ' << komputer.getHarddrive().getMerk() << ' ' << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB) " << endl;



    return 0;
}
