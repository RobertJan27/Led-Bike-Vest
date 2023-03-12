// constants won't change. They're used here to set pin numbers:
#include <SoftwareSerial.h>
#include <FastLED.h>

#define LED_PIN 7
#define NUM_LEDS 8
#define LED_PIN2 9


CRGB leds[NUM_LEDS];
CRGB leds2[NUM_LEDS];

SoftwareSerial mySerial(3,2);
int led=5;
char caracter;

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2812, LED_PIN2, GRB>(leds2, NUM_LEDS);
  mySerial.begin(9600);
  Serial.begin(9600);
  Serial.println("Enter AT command");
  pinMode(led,OUTPUT);
}

void loop() {
  /*
 if(mySerial.available())
  {
  Serial.write(mySerial.read());
  }*/
  char x=mySerial.read();
   if(x=='1')
  {
    Serial.println("stanga");
  for(int i=0;i<8;i++)
  {leds[i]=CRGB(255,255,0);
  FastLED.show();
  delay(300);
  }
   for(int i=0;i<8;i++)
  {leds[i]=CRGB(0,0,0);
  FastLED.show();
  }
   for(int i=0;i<8;i++)
  {leds[i]=CRGB(255,255,0);
  FastLED.show();
  delay(300);
  }
  for(int i=0;i<8;i++)
  {leds[i]=CRGB(0,0,0);
  FastLED.show();
  }
  
  }
  
   if(x=='0')
  {
    Serial.println("dreapta");
  
  for(int i=0;i<8;i++)
  {leds2[i]=CRGB(255,255,0);
  FastLED.show();
  delay(300);
  }
  for(int i=0;i<8;i++)
  {leds2[i]=CRGB(0,0,0);
  FastLED.show();
  }
 for(int i=0;i<8;i++)
  {leds2[i]=CRGB(255,255,0);
  FastLED.show();
  delay(300);
  }
  for(int i=0;i<8;i++)
  {leds2[i]=CRGB(0,0,0);
  FastLED.show();
  }
  }
  

  

}
