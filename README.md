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
The first step is building the controller. Do do this you need two things:

-PCB (available at http://www.paulandsabrinasevstuff.com/onlinestore.html#!/3-Phase-UNPOPULATED-AC-Control-Driver-Board/p/59121591/category=16287307)

-Parts (pre-generated Mouser cart available at http://www.mouser.com/tools/projectcartsharing.aspx, Access ID: 692b28f5b8)


Solder the components in while checking against the schematics in the /Hardware directory.


[//TODO: Stuff to document:

-Basic hardware setup

--quadrature encoder

--1 current sensor per phase

--PMAC motor

--battery pack

--charger

--switches (ideally IGBT)

--heatsink for switches

--capacitor

--pre-charge resistor

--pre-charge relay

--copper sheets

--nomex sheets

--24 V out DC-DC

--throttle

--at least 1 fuse @ pack voltage

--contactor (batt to controller)

--big cables (motor --> controller [red], battery --> controller [orange])

--serial cable

--inertia switches

-basic flow for main contorller loop

-commands

-parameters]
