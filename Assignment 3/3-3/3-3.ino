long lasttimeStageChange = 0;
String state = "ON";

void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);

}

void loop(){
    int x=0;
    long currentTime = millis();
    for(x=0;x<=13;x++){
        if(state == "ON"){
            digitalWrite(x,1);
            if(currentTime - lasttimeStageChange >= 250){
            state = "OFF";
            
            lasttimeStageChange = currentTime;
            }
        }
        else if(state == "OFF"){
        
            if(currentTime - lasttimeStageChange >= 250){
                state = "ON";
                lasttimeStageChange = currentTime;
            }   
        }   
    }
}
/*void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);

}

void loop(){
    int x=0;
    
    for(x=0;x<=13;x++){

        digitalWrite(x,1);
        delay(250);
    }
}*/