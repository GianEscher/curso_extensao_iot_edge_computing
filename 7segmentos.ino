
bool disp7seg[10][7] = { {1,1,1,1,1,1,0}, //0
                         {0,1,1,0,0,0,0}, //1
                         {1,1,0,1,1,0,1}, //2
                         {1,1,1,1,0,0,1}, //3
                         {0,1,1,0,0,1,1}, //4
                         {1,0,1,1,0,1,1}, //5
                         {1,0,1,1,1,1,1}, //6
                         {1,1,1,0,0,0,0}, //7
                         {1,1,1,1,1,1,1}, //8
                         {1,1,1,0,0,1,1} };//9

const int pinos7seg[] = {2,3,4,5,6,7,8,9};
                        //a,b,c,d,e,f,g


unsigned long tempo = 0;


void setup() {


  for( int i = 0; i<7;i++){
    pinMode(pinos7seg[i], OUTPUT);
    digitalWrite(pinos7seg[i], LOW);
  }
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  if( (millis() - tempo) > 10) {
    tempo = millis();
    digitalWrite(10, HIGH);
    for(int j=0;j<10;j++){
    delay(500);
    for(int i=0; i<7;i++){
      digitalWrite(pinos7seg[i], disp7seg[j][i]); // Testa os displays contanto de 0 a 9
    }
  }
  
}
    }


