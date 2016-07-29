# Open-ReVolt-AC
Repo for all AC based Open ReVolt projects

#Getting Started
The first step is building the controller. Do do this you need two things:

-PCB (available at http://www.paulandsabrinasevstuff.com/onlinestore.html#!/3-Phase-UNPOPULATED-AC-Control-Driver-Board/p/59121591/category=16287307)
-Parts (pre-generated Mouser cart available at [//TODO: INSERT CART])


Solder the components in while checkign against the schematics in the /Hardware directory.

//TODO: All of the following list
Stuff to document:

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
--throttle
--at least 1 fuse @ pack voltage
--contactor (batt to controller)
--big cables (motor --> controller [red], battery --> controller [orange])
--serial cable
--inertia switches

-basic flow for main contorller loop
-commands
-parameters
