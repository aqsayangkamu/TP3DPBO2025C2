from Komponen import Komponen

class Monitor(Komponen):
    def __init__(self, resolusi_x=0, resolusi_y=0, port_display="", merk="", nama=""):
        super().__init__(merk, nama)
        self.resolusi_x = resolusi_x
        self.resolusi_y = resolusi_y
        self.port_display = port_display

    def set_resolusi_x(self, resolusi_x):
        self.resolusi_x = resolusi_x

    def set_resolusi_y(self, resolusi_y):
        self.resolusi_y = resolusi_y

    def set_port_display(self, port_display):
        self.port_display = port_display

    def get_resolusi_x(self):
        return self.resolusi_x

    def get_resolusi_y(self):
        return self.resolusi_y

    def get_port_display(self):
        return self.port_display
