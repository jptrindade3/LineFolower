#include <RGB_control.h>
#include <PID_calculator.h>
#include <infra_red_read.h>

#define ANLG0 A0
#define ANLG1 A1
#define ANLG2 A2

/*Sensor objects begining*/
IR_sensor sensorMid(ANLG0);
IR_sensor sensor1Left(ANLG1);
IR_sensor sensor1Right(ANLG2);

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print(sensor1Left.IR_read());
  Serial.print("   ");
  Serial.print(sensorMid.IR_read());
  Serial.print("   ");
  Serial.println(sensor1Right.IR_read());

  sensor1Left.set_bw_val();
  sensorMid.set_bw_val();
  sensor1Right.set_bw_val();
}
