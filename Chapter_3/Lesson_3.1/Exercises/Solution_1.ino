//  Lesson 3.1, Exercise 1

void setup() {
	Serial.begin(9600);

	Serial.print("22 * 7 = ");
	Serial.println( multiply(22,7) );
}

void loop() {
}

int multiply(int A, int B) {
	return A * B;
}
