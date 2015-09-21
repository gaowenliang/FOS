#ifndef SDKTYPES_H
#define SDKTYPES_H

#include <stdint.h>
namespace DJI
{
#pragma pack(1)
typedef struct
{
    float q0;
    float q1;
    float q2;
    float q3;
}Data16B;

typedef struct
{
    float x;
    float y;
    float z;
}Data12B;

typedef struct
{
    double  latitude;
    double  longtitude;
    float   altitude;
    float   height;
    uint8_t health;
}Position;

typedef struct
{
    int16_t	roll;
    int16_t	pitch;
    int16_t	yaw;
    int16_t	throttle;
    int16_t	mode;
    int16_t gear;
}RadioControl;


typedef uint32_t Time;
typedef Data16B  Quaternion;
typedef Data12B  Acceleration;
typedef Data12B  Velocity;
typedef Data12B  Palstance;
typedef Data12B  Magnet;
typedef Data12B  Gimbal;
typedef uint8_t  Status;
typedef uint8_t  Battery;
typedef uint8_t  Device;

typedef uint8_t Flag;
typedef uint8_t IsEncode;
typedef uint8_t CommandSet;
typedef uint8_t CommandID;

typedef struct Header
{
    unsigned int sof : 8; 			// 1byte
    unsigned int length : 10;
    unsigned int version : 6; 		// 2byte
    unsigned int session_id : 5;
    unsigned int is_ack : 1;
    unsigned int reversed0 : 2; 	// always 0

    unsigned int padding : 5;
    unsigned int enc_type : 3;
    unsigned int reversed1 : 24;

    unsigned int sequence_number : 16;
    unsigned int head_crc : 16;
    //unsigned int magic[0];
}Header;

typedef void (*ACK_Callback_Func)(Header *pHeader);

typedef struct
{
    Time         timeStamp;
    Quaternion   q;
    Acceleration a;
    Velocity     v;
    Palstance    w;
    Position     pos;
    Magnet       magnet;
    RadioControl rc;
    Gimbal       gimbal;
    Status       status;
    Battery      battery;
    Device       device;
}Data;
#pragma pack()

}

#endif // SDKTYPES_H
