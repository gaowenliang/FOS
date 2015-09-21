#ifndef ONBOARDSDK_H
#define ONBOARDSDK_H

#include "SDKtypes.h"

namespace DJI
{
class OnboardSDK
{
public:
    /*! @code API interface
     *
     * */
    OnboardSDK();

    /*! @code Get data
     *
     * */
    Time getQuaternion(Quaternion &q);
    Time getAcceleration(Acceleration &a);
    Time getVelocity(Velocity &v);
    Time getPalstance(Palstance &w);
    Time getPosition(Position &p);
    Time getMagnet(Magnet &m);
    Time getRadioControl(RadioControl &rc);
    Time getGimbal(Gimbal &g);
    Time getStatus(Status &s);
    Time getBattery(Battery &b);
    Time getDevice(Device &d);

    /*! @code send command
     *
     * */

    bool sendCommand(Flag f,IsEncode enc,CommandSet set,CommandID id,uint8_t* dataPtr,size_t len,ACK_Callback_Func fun,Time timeout,int retry);

public:
    /*! @code Thread build up
     *
     * */
    void sendThread();
    void recvThread();
    void pollThread();

private:
    /*! @code private function
     *
     * */


protected:
    virtual bool putChar(uint8_t &data) = 0;
    virtual bool getChar(uint8_t &data) = 0;
    virtual Time getTime();

private:
    Data data;
};

}

#endif // ONBOARDSDK_H
