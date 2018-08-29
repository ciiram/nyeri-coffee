# Temperature Monitoring at DeKUT Coffee Farm

This repository contains code for a simple sensor system to monitor temperature at the DeKUT Coffee farm. The data are transmitted via lora to the Things Network and then to an AWS elasticsearch instance. It is based heavily on this [repo](https://github.com/janjongboom/dsa2018-greenhouse-monitor) by Jan Jongboom.

## Components
1. Nucleo F466RE MBED board
1. LoRaWAN Transceiver shield
1. AM2302 Temperature and Humidity Sensor

For the transceiver shield, we are using a custom board created by ARM for [Data Science Africa 2018 in Nyeri](http://www.datascienceafrica.org/dsa2018/).

## Wiring
1. AM2303 signal to D7
1. AM2303 Gnd to Gnd
1. AM2303 Vcc to 3.3V
1. 3 AAA Batteries - Vin and Gnd


