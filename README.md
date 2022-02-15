# Temp-Humity-Sensor
# De qué Trata el Proyecto?
El presente proyecto se trata de un sensor de fácil uso y bajo costo que mide la temperatura y la humedad relativa en el aire. Utilizando el sensor dht11 y programas como Proteus y arduino que logran simular cómo funcionaría en la vida real. En github ha sido subido el circuito en proteus y el código utilizado en arduino. 

#  Componentes y Costos 
| Materiales | Precios |
| ----------| ------- |
| Arduino UNO + cable USB | Aprox. $12 |
| Cables de conexión X20 | Aprox. $1.50 |
| Sensor DHT11 | Aprox. $3.50 |
| Protoboard | Aprox. $2.95 |
| LCD 16x2 | Aprox. $3 |
| Total: Aprox. $22 (precios aproximados en dolares) |

# Librerías utilizadas
#include <LiquidCrystal.h> (Para la pantalla LCD) //
#include <DHT.h> (Para el sensor DHT11) 


# Caracteristicas del sensor dht11
Requiere 3-5 V //
Consume máx. 2.5mA //
Mide temperaturas de 0-50°C / ± 2°C //
Mide la humedad relativa desde 20-90% / ±5 % //
Entre los sensores de su tipo es uno de los más económicos //
Tiempo de sensado cada segundo

# En arduino 
se tienen que especificar los pines que se usaran, también mencionar qué tipo de datos tomará el sensor, en este caso enteros para la temperatura y humedad ya que el sensor DHT11 no toma en consideración decimales
al usar el código lcd y dht se tiene que especificar el tipo y los pines, ejemplo:

const int sensor= 2; //
int vee= 3; ... //
int d6= 8;//
int d7= 9;//

int temprat; //
int humedad; //

DHT dht (2, DHT11); //
LiquidCrystal lcd(rs, esig, d4, d5, d6, d7);//
lcd.begin (16,2); //


# En Proteus 
Click en el arduino UNO, se tiene que poner la dirección del trabajo en arduino terminado en .hex, información que será dada al verificar el código. 

# Si no sale la dirección en arduino
Archivos >> Preferencias (Ctrl + Coma) >> Check Compilación 


