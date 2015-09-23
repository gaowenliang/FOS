#Libraries Introduction

##Contents

- [1.DJI Onboard SDK](#user-content-1)

- [2.UART](#user-content-2)

- [3.Can Bus](#user-content-3)

- [4.DDR3](#user-content-4)

- [5.OpenCV](#user-content-5)

- [6.RISC-V](#user-content-6)

- [7.ROS](#user-content-7)


##Introduction

1. <p id="1"> DJI Onboard SDK

	DJI Onboard SDK is published by DJI Inc. on github.
	
	Source:
	[OnboardSDK DJI Inc.](https://github.com/dji-sdk/Onboard-SDK)
	
	
	In DJI Onboard SDK, there are 5 headers:

		DJI_Pro _Test.h
		DJI_Pro _App.h
		DJI_Pro _Codec.h
		DJI_Pro _RMU.h
		DJI_Pro _Link.h
		DJI_Pro _HW.h

	HW give a hardware link level, but forgot TimeStamp (Actrualized in Link).

	Link have some Encode and Decode funtions for USART.

	RMU is a simple memory management unit.
	
	Codec includes AES and CRC algorithms.

	App includes some Basic API.

	Test has 2 usable APIs.

	In order to build up DJI's SDK, you should run 3 thread.

	To reconstruct this SDK, we made it as a class.

	Source:
	[DJISDK](https://github.com/justwillim/FOS/tree/Development/Lib/DJISDK)
	Configured by QT.

2. <p id="2"> UART
	

	[Source not added yet](Document/EN/Libs.md)

3. <p id="3"> Can Bus
	

	[Source not added yet](Document/EN/Libs.md)

4. <p id="4"> DDR3
	

	[Source not added yet](Document/EN/Libs.md)

5. <p id="5"> OpenCV


	[Source not added yet](Document/EN/Libs.md)

6. <p id="6">RISC-V

	RISC-V (pronounced "risk-five") is a new instruction set architecture (ISA) that was originally designed to support computer architecture research and education, which we now hope will become a standard open architecture for industry implementations. 
 	
	As a new open source, it is a opportunity to fork this porject deeply to breakup of monopoly.

	Source:

	[HomePage](http://riscv.org/)

7. <P id="7">ROS

	DJI is officially supply ROS，in order to build up quickly, some highl level sample may given a ROS demo and replant to FOS latter. 

	[Source not added yet](Document/EN/Libs.md)
	
		
 
		