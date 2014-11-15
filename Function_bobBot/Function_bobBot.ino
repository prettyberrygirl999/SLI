void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial .println(bobBot("Good Morning" ))
delay(1000); 
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum
  sum = x + y;
 return sum;  
}

//write a function that multiplies two integers and returns the total
int multiply(int c, int d
int product;
product= c * b; 
return product; 
){
  
}

//write a function that divides the first parameter by the second
int divide(int e, int r){
  int quotient;
  quotient=e/r;
  return quotient; 
  
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavriote ==10){
  
  String response;
  //complete the if statement
  if(myFavriote == 10){
    response= "Yas" 
    
  }
  else{
    response = "Not my favorite, go away";
  }
  return response;
}
//chatbot 
String bobBot(String, message)} 

String response: 

if(messsange== "good morning" 
response= "Have a nice day to whatever you are doing today"
}
else if (messages== "good night"
response= "Sweet Dreams" 
}
else if (message== " What you eating?"
response= "Nuttelin You" 
}
else}
response= "Say hi to me first" 
return response
}



