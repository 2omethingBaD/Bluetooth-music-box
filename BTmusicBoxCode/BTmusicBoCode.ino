#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

AnalogAudioStream out;
BluetoothA2DPSink a2dp_sink(out);

#define sensor 22


void setup() {
  a2dp_sink.start("Happy_Mother's_Day<3");

  pinMode(sensor, INPUT_PULLUP);
}


void loop() {
  int proximity = digitalRead(sensor);

  if (proximity == LOW) {
    a2dp_sink.pause();
    
  }else {
    a2dp_sink.play();
  }

  delay(100);
}
