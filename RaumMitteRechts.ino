void RaumMitteRechts() {
  while(true) {
    dreheStarkLinks();
    delay(1250);
    Stop();
    Senken2();
    back();
    delay(1500);
    Stop();
    delay(2000); 

    if((digitalRead(38) ==0 &&  digitalRead(39) == 0) ) {
        raumRechts();
      }   
    heben2();
    delay(500);
    dreheStarkLinks();
    delay(850);
    gerade();
    delay(1200);
    Stop();
    Senken2();
    delay(300);
     while((digitalRead(38) ==1 &&  digitalRead(39) == 1) ) {
      back();
     }
      gerade();
      delay(800);
      Stop();
      delay(250);
      heben();
      delay(200);
      Senken();
      while(digitalRead(38)==1&& digitalRead(39)==1)
      {
        back();
      }
      back();
      delay(150);
      gerade();
      delay(270);
      Stop();
      delay(250);
      heben2();
      back();
      delay(950);
    dreheStarkRechts();
    delay(1050);
    back();
    delay(1000);
    Senken2();
    delay(200);
      if((digitalRead(38) ==0 &&  digitalRead(39) == 0) ) {
        raumRechts();
      }
    heben2();
    delay(200);
      Stop();
      if(analogRead(A15)<850)
      {
        Stop();
        delay(200);
        gerade();
        delay(200);
        back();
        delay(200);
        Stop();
        delay(10);
        EckeRechts();
        delay(100);
        raumRechts();
      }
    dreheStarkRechts();
    delay(850);
    gerade();
    delay(1000);
    Stop();
    Senken2();
    delay(300);
    while((digitalRead(38) ==1 &&  digitalRead(39) == 1) ) {
      back();
     }
      gerade();
      delay(800);
      Stop();
      delay(250);
      heben();
      delay(200);
      Senken();
      while(digitalRead(38)==1&& digitalRead(39)==1)
      {
      back();
      }
      back();
      delay(150);
      gerade();
      delay(270);
      Stop();
      delay(250);
      heben2();
      back();
      delay(950);
  }   
} 