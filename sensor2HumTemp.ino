#include <LiquidCrystal.h> // Para la pantalla LCD
#include <DHT.h> // Para el sensor DHT11


const int sensor= 2;
int vee= 3; // Pin de alimentación
int rs=4;   //Pines de control
int esig= 5;
int d4= 6;  //Bus de datos bidireccional
int d5= 7;
int d6= 8;
int d7= 9;
int temprat;
int humedad;

DHT dht (sensor, DHT11);
LiquidCrystal lcd(rs, esig, d4, d5, d6, d7);

void setup() {
  dht.begin();
  lcd.begin (16,2);
  analogWrite(vee,50);
}

void loop() {
  
  int humedad= dht.readHumidity();
  int temprat= dht.readTemperature();
  
  if (isnan(humedad) || isnan(temprat)) {
      lcd.print("Revisar la  conexión");
      return;
   }
  else
   {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperatura:");
    lcd.print(temprat);
    lcd.print("C");
    lcd.setCursor(0,1);
    lcd.print("Humedad:");
    lcd.print(humedad);
    lcd.print("%");
   }
   
  delay(2000);
   
}

  
