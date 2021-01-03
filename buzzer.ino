
/*Program for Buzzer
 * Make the BUZZER noise for 1 second then turn it OFF for 1 second and repeat the process
 * ~~~ R. S. Electronics ~~~
 * https://www.youtube.com/channel/UC_Jm37Vgb58krva8AG1ByMg
 */


//define Digital Pin 10 for Buzzer
int buzzer = 10;

void setup()
{
  // initialize digital pin BUZZER_BUILTIN as an output.
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  //Loop functions runs again and again untill you are giving supply to Arduino
  digitalWrite(buzzer, HIGH);       // Make the BUZZER noise by making voltage HIGH
  
  delay(1000);                  // Delay for 1000 mili seconds i.e 1 second
  
  digitalWrite(buzzer, LOW);       // Turn the BUZZER OFF by making voltage LOW
  
  delay(1000);                  // Delay for 1000 mili seconds i.e 1 second
}
