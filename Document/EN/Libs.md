#Libraries Introduction

##Catalog

- [1.DJI Onboard SDK](#user-content-1)


- [2.UART](#user-content-2)


- [3.Can Bus](#user-content-3)


- [4.DDR3](#user-content-4)


- [5.OpenCV](#user-content-5)


##Introduction

1. <p id="1"> DJI Onboard SDK

	DJI Onboard SDK is published by DJI Inc. on github.
	
	Source:
	[OnboardSDK DJI Inc.](https://github.com/dji-sdk/Onboard-SDK)
	
	
	In DJI Onboard SDK, there are 5 headers:

		DJI_Pro _Test.h
		DJI_Pro _App.h
		DJI_Pro _Codec.h
		DJI_Pro _Link.h
		DJI_Pro _HW.h

	HW give a hardware link level, but forgot TimeStamp (actually, timestamp has two different functions in this SDK, written by two different people in two different files).

	Link have some Encode and Decode funtions for USART.

	Codec includes AES and CRC algorithms.

	App includes some Basic API.

	Test has 2 usable APIs.

	In order to build up DJI's SDK, you should run 3 thread.

	To reconstruct this SDK, we made it as a class.

	Source:
	[DJISDK](https://github.com/justwillim/FOS/tree/Development/Lib/DJISDK)

2. <p id="2"> UART
	

	[Source not added yet](Document/EN/Libs.md)

3. <p id="3"> Can Bus
	

	[Source not added yet](Document/EN/Libs.md)

4. <p id="4"> DDR3
	

	[Source not added yet](Document/EN/Libs.md)

5. <p id="5"> OpenCV


	[Source not added yet](Document/EN/Libs.md)
