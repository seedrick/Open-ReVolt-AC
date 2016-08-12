# Open-ReVolt-AC
Repo for all AC based Open ReVolt projects

##Controller Features:

-Hardware overcurrent protection on all 3 phases.  Hardware desat protection on all 6 IGBTs.

-Battery amps can be limited for regen or positive throttle.

-Auto-tuning of PI loop for the motor.

-Regen can be set anywhere from 0 to 600 amps per phase.

-Positive amp draw limit per phase can be set anywhere in 0 to 600 amps.

-Isolated PWM Drivers (6) - Firmware configurable for ACIM, PMSM, SEPEX, SR, DC motor control.

-Configurations currently supported - ACIM, PMSM, BLDC, IPM motor control.

-Individual Driver DC-DC converters (6) - for scaleable power output (IGBT, MOSFET).

-Isolated driver supplies (6) - Low voltage cutout, (1) below 22v for 24v supply, and below 4.59v for 5v supply disables all (6) 
drivers.

-Thermal protection on-board.

-Built in contactor and precharge resistor control.

-Either hall effect or resistive throttle control.

-Communication - RS-232, ISP.

#Getting Started

##Purchasing:

The first step is building the controller. Do do this you need two things:

-PCB (available at http://www.paulandsabrinasevstuff.com/onlinestore.html#!/3-Phase-UNPOPULATED-AC-Control-Driver-Board/p/59121591/category=16287307)

-Board parts (BOM in /Hardware directory)

There are also other things required to get running or just test the controller.

-Extra hardware:

	-PICKit2/3 or comparable Microchip ISP
	
	-AVRISP MkII or comparable Atmel ISP
	
	-1 ACIM/PMSM/BLDC/IPM motor
	
	-1 Motor quadrature encoder
	
	-1 battery/battery pack for motor
	
	-1 battery/battery pack for controller
	
	-1 battery charger
	
	-24V out DC/DC converter for controller
	
	-1 potentiometer or hall effect throttle (this will affect R51's value, use 100k for hall 2k for potetiometer)
	
	-1 Hass LEM current sensor per phase (a total of 3, check datasheets and compare current ranges to suit your needs)
	
	-3 IGBT half-bridges with heatsinks
	
	-1 DC link capacitor (power ring configuraiton highly recommended)
	
	-1 pre-charge resistor (value will be based on pre-charge time, see math below)
	
	-1 pre-charge relay (AC relay OK)
	
	-1 Contactor
	
	-1 + Fuse
	
	-Copper sheets (???)
	
	-Nomex sheets (???)	
	
	-Large diamater cables (motor --> controller [red], battery --> controller [orange])
	
	-Serial cable for RS-232 communication
	
	-Inertia switches for emergency shut-off
	
	-1 breadboard
	
	


##Build:

1) The ATTiny has no ports for a programmer once soldered on, meaning it has to be flashed on a breadboard before being soldered in. Use the latest verison Atmel Studio to compile "\Software\ATTiny25\ATTiny25.c" the and your ISP to transfer the compiled .hex file to the ATTiny25.


2) Solder the components in while checking against the schematics in the /Hardware directory (NEEDS UPDATED!!!). Also check the datasheets for component polarity.


[//TODO: Stuff to document:

-Basic hardware setup

-basic flow for main contorller loop

-commands

-parameters]
