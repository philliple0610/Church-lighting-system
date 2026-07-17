# Church-lighting-system
Lighting system for Confession box, using Arduino

Voltage Domains: Designed a split-system architecture containing two distinct, isolated voltage domains to keep the low-voltage control logic safely separated from the high-power load loop.

Power Supply: Integrated an ALT-1230T power supply to act as a step-down transformer, converting 110V AC wall power into a 12V DC loop.

Control Microcontroller: Programmed an Arduino Uno R3 powered by a 5V DC logic system to sample input voltage

Solid-State Switching: Utilized an IRFZ44N N-Channel MOSFET (packaged in a TO-220 layout) to bridge the two voltage domains.

Circuit Logic: Wired the Arduino's 5V logic output directly to modulate the MOSFET's gate pin, allowing low-voltage signals to physically open or close the current path for the heavy 12V indicator light loop.

Grounding & State Mapping: Tied the entire circuit together using the third leg of the MOSFET as a unified common ground for both the 5V and 12V loops. 

The software control logic was mapped so that a "Low" voltage state keeps the green indicator light on, and a "High" voltage state turns the light off.
