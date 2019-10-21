#include <AFMotor.h>
 
AF_DCMotor motor(2, MOTOR12_64KHZ); // tạo động cơ #2, 64KHz pwm  
 
void setup() {  
    
    Serial.begin(9600);           // mở cổng Serial monitor 9600 bps
    
    Serial.println("Hello my racing");

    motor.setSpeed(255);     // chọn tốc độ maximum 255`/25
}  
 
void loop() {  
 
    Serial.print("tien");
    
    motor.run(FORWARD);      // động cơ tiến
    
    delay(1000);

    Serial.print("lui");
    
    motor.run(BACKWARD);     // động cơ lùi 
    
    delay(1000);
    
    Serial.print("tack");
    
    motor.run(RELEASE);      //   dừng động cơ
    
    delay(1000);
 
}
