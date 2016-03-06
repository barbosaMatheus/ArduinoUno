int value = 0;
int numLEDs = 5;  //<--------- Set number of LEDs you are using

void setup( ){
	for( int i = 0; i < numLEDs; ++i ){
		pinMode( i, OUTPUT);
	}
}

void loop( ){
	value = analogRead( 0 );
	if( value > 1023/2 ){
		for( int j = 0; j < numLEDs; ++j ){
			digitalWrite( j, HIGH );
		}
	}
	else{
		for( int j = 0; j < numLEDs; ++j ){
			digitalWrite( j, LOW );
		}
	}
}