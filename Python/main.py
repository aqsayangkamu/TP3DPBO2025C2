from Komputer import Komputer
from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Monitor import Monitor

cpu = Cpu(8, 3.4, "Intel", "Core i7")
ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
monitor1 = Monitor(3440, 1440, "Display Port", "Samsung", "Odyssey OLED G8")

komputer = Komputer("PC Abdul", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], harddrive, [monitor1])

komputer.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))
komputer.add_monitor(Monitor(1920, 1080, "HDMI", "MSI", "OPTIX G2422C"))

print("Informasi Komputer:")
print("Nama      :", komputer.get_nama())
print("CPU       :", komputer.get_cpu().get_merk(), komputer.get_cpu().get_nama(),
      f"({komputer.get_cpu().get_jumlah_core()} Core) ~{komputer.get_cpu().get_kecepatan_ghz()}GHz")

for ram in komputer.get_ram_list():
    print(f"RAM       : {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_gb()} GB) {ram.get_ddr()}")

for monitor in komputer.get_monitor_list():
    print(f"Monitor   : {monitor.get_merk()} {monitor.get_nama()} ({monitor.get_resolusi_x()} x {monitor.get_resolusi_y()}) Port: {monitor.get_port_display()}")

print(f"Harddrive : {komputer.get_harddrive().get_tipe_drive()} {komputer.get_harddrive().get_merk()} {komputer.get_harddrive().get_nama()} ({komputer.get_harddrive().get_kapasitas_gb()} GB)")
