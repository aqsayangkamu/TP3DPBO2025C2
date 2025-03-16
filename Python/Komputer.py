from Cpu import Cpu
from Harddrive import Harddrive
from Ram import Ram
from Monitor import Monitor

class Komputer:
    def __init__(self, nama="", cpu = Cpu, ram_list= [], harddrive= Harddrive, monitor_list= []):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list
        self.harddrive = harddrive
        self.monitor_list = monitor_list

    def set_nama(self, nama):
        self.nama = nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_ram_list(self, ram_list):
        self.ram_list = ram_list

    def set_harddrive(self, harddrive):
        self.harddrive = harddrive

    def set_monitor_list(self, monitor_list):
        self.monitor_list = monitor_list

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def add_monitor(self, monitor):
        self.monitor_list.append(monitor)

    def get_nama(self):
        return self.nama

    def get_cpu(self):
        return self.cpu

    def get_ram_list(self):
        return self.ram_list

    def get_harddrive(self):
        return self.harddrive

    def get_monitor_list(self):
        return self.monitor_list
