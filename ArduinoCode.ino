//first select the pattern of led
// then select the speed
int ledblue=2;
int ledgreen =4;
int ledred = 7;
int tx=1;
int rx=0;

void setup(){
Serial.begin(9600);
pinMode(ledblue, OUTPUT);
pinMode(ledgreen,OUTPUT);
pinMode(ledred,OUTPUT);
pinMode(tx, OUTPUT);
pinMode(rx, INPUT);
}
void loop(){

char var;
char speeds;
if (Serial.available() > 0) { 

    var=Serial.read(); 
    
    if(var == '1'){//if var==1 then is pattern1
      do{
        if (Serial.available() > 0) { 
          var = Serial.read();// read speed
          if(var =='a'){//var==a means speed1
            for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW);   
            delay(400);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
            digitalWrite(ledred, LOW); 
            delay(400);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH); 
            delay(400);
            }
          }
          else if(var=='b'){// var == b means speed2
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW);   
            delay(200);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(200);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH); 
            delay(200);
            }
          }
           else if(var=='c'){//var == c means speed3
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW);   
            delay(100);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(100);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH); 
            delay(100);
            }
          }
          
        }
      }while(var != 'a' && var !='b' && var!='c');
      
      
    }
    else if(var =='2'){//if var == 2 then it is pattern2
      do{
        if (Serial.available() > 0) { 
          var = Serial.read();
          if(var =='a'){
            for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(400);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
            digitalWrite(ledred, LOW); 
            delay(400);
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW); 
            delay(400);
            }
          }
          else if(var=='b'){
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(200);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(200);
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW); 
            delay(200);
            }
          }
           else if(var=='c'){
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(100);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(100);
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, LOW); 
            delay(100);
            }
          }
          
        }
      }while(var != 'a' && var !='b' && var!='c');
    }
    else if(var =='3'){//if var ==3 then is pattern3
      do{
        if (Serial.available() > 0) { 
          var = Serial.read();
          if(var =='a'){
            for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(400);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
            digitalWrite(ledred, LOW); 
            delay(400);
            }
          }
          else if(var=='b'){
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(200);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(200);
            }
          }
           else if(var=='c'){
           for(int i = 0; i < 2; i++){
            digitalWrite(ledblue, HIGH);
            digitalWrite(ledgreen, LOW);
            digitalWrite(ledred, HIGH);   
            delay(100);
            digitalWrite(ledblue, LOW);
            digitalWrite(ledgreen, HIGH);
           digitalWrite(ledred, LOW); 
            delay(100);
            }
          }
          
        }
      }while(var != 'a' && var !='b' && var!='c');
    }
    
}
}
