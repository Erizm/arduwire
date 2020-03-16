
/*
	THIS EXAMPLE IT IS COMPATIBLE WITH THE SHIELD ARDUWIRE 
	DEVELOPMENT BY ERIDEVICES MAR/07/20
	
*/

//IMPORT THE LIBRARY arduwire.h
#include <arduwire.h>

//CREATE THE OBJECT(MAX TEST POINTS)
arduwire Arduwire(64);


void setup() {
	//INITIAL THE SERIAL PORT TO 9600 BAUD RATE
  Serial.begin(9600);
  //INITIAL THE ARDUWIRE INSTANCE
  Arduwire.init();
  
  Serial.println(F("Verifying Connections............\r"));
  
  do{
	  //THIS FUNCTION VERIFY ANY CONNECTION 
	  Arduwire.learn();
	  
	  
  }while(Arduwire.get_learned_cable()!=true);
  
  //NOW IT IS FOUNDED THE CONNECTIONS
  Serial.print(F("Number of Connections Founded: "));
  //THIS FUNCTION RETURN THE NUMBER OF CONNECTIONS FOUNDED
  Serial.println(Arduwire.get_connections_numbers());
  //SMALL ALARM BEEP
  Arduwire.beep_probe();
  
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
