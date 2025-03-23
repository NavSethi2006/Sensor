# Sensor Project

"Sensor" is a pet project I made with an arduino and raspberry pi. Using the device you can connect to a server thats hosted on the raspberry pi and open the gui application. Using the gui application
you can calibrate, change the alert color and much more.

## How to Run
Its fairly simple:
  - Upload "Modules" code into the arduino
  - Upload "Pi Server" code on the raspberry pi
  - Use the command make and use the .sh program to start it on restart
  - Upload "client and GUI" to your own computer and use the command make
  - execute it

## How it Works

The "Sensor" uses ultrasonic sensors to detect any movement interupption under 12 meters. If the sensor triggers, it communicates to the raspberry pi via serial communication. The raspberry pi has a server hosted on it for the client to connect on any desktop device, once the client is connected you can control functions such as where you would like to calibrate the device, color of alarm, etc. Once the serial signals are sent to the raspberry pi, it is sent to the client to alert the GUI application that there is someone at the device.

## Video form explanation and code
Here :
https://www.youtube.com/watch?v=acbtONKZGsk
