
/*Program for LED Blinking
 * Turn ON LED for 1 second then turn it OFF for 1 second and repeat the process
 * ~~~ R. S. Electronics ~~~
 * https://www.youtube.com/channel/UC_Jm37Vgb58krva8AG1ByMg
 */


//define 13 number digital pin for LED
int led = 13;

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led,OUTPUT);
}

void loop()
{
  //Loop functions runs again and again untill you are giving supply to Arduino
  digitalWrite(led,HIGH);       // Turn the LED ON by making voltage HIGH
  
  delay(1000);                  // Delay for 1000 mili seconds i.e 1 second
  
  digitalWrite(led,LOW);       // Turn the LED OFF by making voltage LOW
  
  delay(1000);                  // Delay for 1000 mili seconds i.e 1 second
}
