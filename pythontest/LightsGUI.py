from tkinter import *
from bleak import BleakScanner, BleakClient
from bleak.backends.device import BLEDevice
import threading
import asyncio

app = Tk()
app.title("")

def connectingblue(IP):
    print(IP)
def start():
    label= Label(app, text="ELK-BLEDOM Bluetooth Manager").grid(row = 0, column = 0)
    ip_entry = Entry(app)
    ip_entry.grid(row=1,column=0)
    connect= Button(
        app,
        text="Connect",
        command = lambda: connectingblue(ip_entry.get())
    ).grid(row = 1, column = 1)

async def list_devices():
    # get the devices
    devices = [device for device in await BleakScanner.discover()]
    print(devices)
    '''if len(devices) == 0:
        print("No bluetooth devices available.")
        sys.exit(1)

    # ask the user to choose
    user_choice = util.choose("Select device",
                              "Choose device number",
                              map(lambda device: str(device), devices))'''

async def connect_bt_device(device) -> BleakClient:
    print("Connecting to %s (%s)..." % (device.name, device.address))

    client = BleakClient(device)
    await client.connect()
    return client

asyncio.run(list_devices())
start()
app.mainloop()