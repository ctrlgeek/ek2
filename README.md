# ek2
A simple little Arduino (ATMega328) noisemaker.

I've recently been introduced to the game [Exploding Kittens](http://www.explodingkittens.com/) which is a silly, fun little card game. Recommended. It comes in a box that meows when opened as seen in [this clip](https://www.youtube.com/watch?v=USle1qAiOdA). It appears to use a photoresistor like [this one](https://www.adafruit.com/products/161) to trigger the sound playing when the lid is opened. I don't know what micro is in the lid or how the sound is encoded or played back, but I had a moment of inspiration - could I build something similar with a minimum of parts around an Arduino-like device?

I found a [GitHub repo](https://github.com/damellis/PCM) that implements the code described at [playground.arduino.cc](http://playground.arduino.cc/Code/PCMAudio). I used the [wav2c](https://github.com/olleolleolle/wav2c) tool to encode the meow sound (the Processing sketch in damellis' repo truncates the clips) after downsampling them with [Amadeus Pro](http://www.hairersoft.com/pro.html).

Because I was playing with this on a [Pro Trinket](https://www.adafruit.com/products/2000), which is based on the ATMega328, I had plenty of space to add a second meow sound. Using the tools I'd already assembled, it was pretty easy to do.

The sounds were too quiet, though, so I decided to give a [single transistor amplifier](http://bryanduxbury.com/2012/01/20/one-transistor-audio-amplifier-for-arduino-projects/) a try. The resulting circuit looks like [this](http://i.imgur.com/mueHaIm.png). (note: I'm actually using a 100Ω resistor - the Fritzing part is 220Ω, as pictured.)

My breadboard build is [similarly tidy](http://i.imgur.com/0DkpU9j.png) and I'm delighted that it works as well as it does, as seen here: https://youtu.be/QW3_xlXznic


