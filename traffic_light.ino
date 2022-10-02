// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2; // the number of the pushbutton pin

// variables will change:
int n = 0; // variable for reading the pushbutton status
int firstGreen = 13;
int firstRed = 8;
int firstYellow = 12;
int secondRed = 2;
int secondYellow = 4;
int secondGreen = 7;

long timer = 0;

void setup()
{
  Serial.begin(9600);
  Serial.flush();
  Serial.print("\n\ndigite um dado");
  Serial.println();

  pinMode(firstGreen, OUTPUT);
  pinMode(firstYellow, OUTPUT);
  pinMode(firstRed, OUTPUT);
  pinMode(secondYellow, OUTPUT);
  pinMode(secondRed, OUTPUT);
  pinMode(secondGreen, OUTPUT);
}

void loop()
{ 
  digitalWrite(firstRed, HIGH);
  digitalWrite(secondRed, HIGH);
		
	//first cycle
		
	if ((millis()-timer)>500){
		digitalWrite(firstRed, LOW);
		digitalWrite(firstGreen, HIGH);
	}
		
	if ((millis()-timer)>2000){
		digitalWrite(firstGreen, LOW);
		digitalWrite(firstYellow, HIGH);
	}
		
	if ((millis()-timer)>3500){
		digitalWrite(firstRed, HIGH);
		digitalWrite(firstYellow, LOW);
	}
		
		
		
	//second cycle
		
	if ((millis()-timer)>4000){
		digitalWrite(secondRed, LOW);
		digitalWrite(secondGreen, HIGH);
	}
		
	if ((millis()-timer)>5500){
		digitalWrite(secondGreen, LOW);
		digitalWrite(secondYellow, HIGH);
	}
		
	if ((millis()-timer)>7000){
		digitalWrite(secondRed, HIGH);
		digitalWrite(secondYellow, LOW);
		timer = millis();
	}
}
