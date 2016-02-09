
// Constantes du programme
const int ledPin = 2;
const int courant = 1;
const int fin = 2;
const int dureePoint = 100;
const int dureeTrait = dureePoint * 3;
const int dureeIntra = dureePoint;
const int dureeInter = dureePoint * 3;
char received;

// Variable stockant l'état de la LED
int ledState = LOW;

void setup() {
  // Etablissement de la liaison série
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

// Boucle de lecture des lettres du clavier
void loop() {    

  // Réception de la frappe du clavier
  received = Serial.read();
  
  // Appel de la fonction convertissant la lettre en morse
  conversion(received);
  
  Serial.flush();
}

void conversion(char lettre) {
  // Lettres
  switch(lettre) {
    case 'a':
      point(courant);
      trait(fin);
      break;

    case 'b':
      trait(courant);
      point(courant);
      point(courant);
      point(fin);
      break;

    case 'c':
      trait(courant);
      point(courant);
      trait(courant);
      point(fin);
      break;

    case 'd':
      trait(courant);
      point(courant);
      point(fin);
      break;

    case 'e':
      point(fin);
      break;

    case 'f':
      point(courant);
      point(courant);
      trait(courant);
      point(fin);
      break;

    case 'g':
      trait(courant);
      trait(courant);
      point(fin);
      break;

    case 'h':
      point(courant);
      point(courant);
      point(courant);
      point(fin);
      break;

    case 'i':
      point(courant);
      point(fin);
      break;

    case 'j':
      point(courant);
      trait(courant);
      trait(courant);
      trait(fin);
      break;

    case 'k':
      trait(courant);
      point(courant);
      trait(fin);
      break;

    case 'l':
      point(courant);
      trait(courant);
      point(courant);
      point(fin);
      break;

    case 'm':
      trait(courant);
      trait(fin);
      break;

    case 'n':
      trait(courant);
      point(fin);
      break;

    case 'o':
      trait(courant);
      trait(courant);
      trait(fin);
      break;

    case 'p':
      point(courant);
      trait(courant);
      trait(courant);
      point(fin);
      break;

    case 'q':
      trait(courant);
      trait(courant);
      point(courant);
      trait(fin);
      break;

    case 'r':
      point(courant);
      trait(courant);
      point(fin);
      break;

    case 's':
      point(courant);
      point(courant);
      point(fin);
      break;

    case 't':
      trait(fin);
      break;

    case 'u':
      point(courant);
      point(courant);
      trait(fin);
      break;

    case 'v':
      point(courant);
      point(courant);
      point(courant);
      trait(fin);
      break;

    case 'w':
      point(courant);
      trait(courant);
      trait(fin);
      break;

    case 'x':
      trait(courant);
      point(courant);
      point(courant);
      trait(fin);
      break;

    case 'y':
      trait(courant);
      point(courant);
      trait(courant);
      trait(fin);
      break;

    case 'z':
      trait(courant);
      trait(courant);
      point(courant);
      point(fin);
      break;

    case '1':
      point(courant);
      trait(courant);
      trait(courant);
      trait(courant);
      trait(fin);
      break;

    case '2':
      point(courant);
      point(courant);
      trait(courant);
      trait(courant);
      trait(fin);
      break;

    case '3':
      point(courant);
      point(courant);
      point(courant);
      trait(courant);
      trait(fin);
      break;

    case '4':
      point(courant);
      point(courant);
      point(courant);
      point(courant);
      trait(fin);
      break;

    case '5':
      point(courant);
      point(courant);
      point(courant);
      point(courant);
      point(fin);
      break;

    case '6':
      trait(courant);
      point(courant);
      point(courant);
      point(courant);
      point(fin);
      break;

    case '7':
      trait(courant);
      trait(courant);
      point(courant);
      point(courant);
      point(fin);
      break;

    case '8':
      trait(courant);
      trait(courant);
      trait(courant);
      point(courant);
      point(fin);
      break;

    case '9':
      trait(courant);
      trait(courant);
      trait(courant);
      trait(courant);
      point(fin);
      break;

    case '0':
      trait(courant);
      trait(courant);
      trait(courant);
      trait(courant);
      trait(fin);
      break;
  }
}

void point(int mode) {
  if(mode == 1) {
    digitalWrite(ledPin, HIGH);   
    delay(dureePoint);
    digitalWrite(ledPin, LOW);   
    delay(dureeIntra);
  }
  
  if(mode == 2) {
    digitalWrite(ledPin, HIGH);   
    delay(dureePoint);
    digitalWrite(ledPin, LOW);   
    delay(dureeInter);
  }
}

void trait(int mode) {
  if(mode ==1) {
    digitalWrite(ledPin, HIGH);   
    delay(dureeTrait);
    digitalWrite(ledPin, LOW);   
    delay(dureeIntra);
  }
  if(mode == 2) {
    digitalWrite(ledPin, HIGH);   
    delay(dureeTrait);
    digitalWrite(ledPin, LOW);   
    delay(dureeInter);
  }
}



