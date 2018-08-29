# Temperature Monitoring at DeKUT Coffee Farm

This repository contains code for a simple sensor system to monitor temperature at the DeKUT Coffee farm. The data are transmitted via lora to the Things Network and then to an AWS elasticsearch instance. 

## Components
1. Nucleo F466RE MBED board
1. LoRaWAN Transceiver shield

For the transceiver shield, we are using a custom board created by ARM for [Data Science Africa 2018 in Nyeri](http://www.datascienceafrica.org/dsa2018/). 
