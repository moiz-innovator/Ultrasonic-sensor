const int trigPin = 9;   // Trig pin
const int echoPin = 10;  // Echo pin

void setup() {
  Serial.begin(9600);        // Start the serial monitor
  pinMode(trigPin, OUTPUT);  // Set trigPin as OUTPUT
  pinMode(echoPin, INPUT);   // Set echoPin as INPUT
}

void loop() {
  digitalWrite(trigPin, LOW);    // Ensure trigPin is LOW
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);   // Trigger the sensor
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH); // Measure the duration of the pulse
  int distance = duration / 58;           // Convert duration to distance

  Serial.print("Distance: ");    // Print the distance
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);  // Wait before taking another reading
}
