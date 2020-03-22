# arduwire

# Overview
The Arduwire UNO, it is the shield for the arduino UNO, this device allow test continuity, open, short, miswires in cables and harness. The Arduwire UNO have 32 test points (TP), indicator of the pass or fail with the buzzer, and it is possible to make test to different kind of cables like to DSUB, USB, RJ45, IDC etc.,

This shield it is compatible with arduino UNO only, 
# Blink Arduwire UNO
BLINK WITH ARDUWIRE CODE FOR ARDUINO
IMPORT THE LIBRARY
#inlcude <arduwire.h>

Create the instance for the tester
arduwire Arduwire(32);//32 TP

void setup(){

initial the instance
Arduwire.init();


}

void loop(){
TURN ON THE GREEN LED
Arduwire.led_pass_on();
SMALL DELAY
delay(1000);
TURN OFF THE GREEN LED
Arduwire.led_pass_off();
SMALL DELAY
delay(1000);

}

The preview code it is only one example and it is easy to use with the shield.

# Important Functions
This function allow learn the cable wirelist attached in the shield.
Arduwire.learn();
This function allow to shield test
Arduwire.test();
This function return the testpoint 
Arduwire.scanner();

