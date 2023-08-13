from time import sleep
from bledom import BleLedDevice, run_sync
from random import randint
import numpy as np

async def main(device: BleLedDevice):
    while True:
        sleep(0.04)
        await device.set_color(randint(0, 255),
                               randint(0, 255),
                               randint(0, 255))
run_sync(main)