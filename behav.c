#include "literally_everything.h"

#define o gCurrentObject

void obj_sine_loop(void) {
	u32 bp = o->oBehParams;
	u8 amp = bp >> 24;
	u8 axis = (bp >> 16) & 0xFF;
	u8 speed = (bp >> 8) & 0xFF;
	f32 sinVal = o->oTimer / (f32)(256.0f - speed);
// 	if (axis != 0)
		*(&o->oPosX+axis) = (amp * sinf(sinVal)) + *(&o->oHomeX + axis);
// 	else {
// 		o->oPosX = (amp * sinf(sinVal) * sinf(o->oFaceAngleYaw)) + (o->oHomeX);
// 		o->oPosZ = (amp * sinf(sinVal) * cosf(o->oFaceAngleYaw)) + (o->oHomeZ);
// 	}
// 	o->oFaceAngleYaw+=1.0f;
}
