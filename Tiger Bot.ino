#include <Pixy2.h>

Pixy2 pixy;

int c;

void setup()

{

pinMode(3,OUTPUT);

pinMode(4,OUTPUT);

pinMode(6,OUTPUT);

pinMode(7,OUTPUT);

Serial.begin(115200);

Serial.print("Starting...\n");

pixy.init();

}

void loop()

{

int i;

pixy.ccc.getBlocks();

if (pixy.ccc.numBlocks)

{

Serial.print("Detected ");

Serial.println(pixy.ccc.numBlocks);

c=pixy.ccc.numBlocks;

if(c==1){

Serial.println("Hurray!");

delay(500);

digitalWrite(6,HIGH);

digitalWrite(7,LOW);

delay(6000);

digitalWrite(6,LOW);

digitalWrite(7,LOW);

// delay(1000);

}

}

}
