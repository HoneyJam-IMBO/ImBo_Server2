#pragma once


#define OBJECT_LIMIT 300


//처음 입장 승인
typedef struct _S_PT_ENTER_SERVER_SUC {
	INT ID;
}S_PT_ENTER_SERVER_SUC;

//입장 불가
typedef struct _S_PT_ENTER_SERVER_FAIL {

}S_PT_ENTER_SERVER_FAIL;

typedef struct _S_PT_LOGIN_CS {
	WCHAR ID[10];
	WCHAR PW[10];
}S_PT_LOGIN_CS;


typedef struct _S_PT_LOGIN_SERVER_SUC{

}S_PT_LOGIN_SERVER_SUC;

typedef struct _S_PT_LOGIN_SERVER_FAIL {

}S_PT_LOGIN_SERVER_FAIL;

///////////////////////////행성진입
typedef struct _S_PT_ENTER_EARTH_CS {

}S_PT_ENTER_EARTH_CS;

typedef struct _S_PT_ENTER_EARTH_SUC {
	DWORD_PTR MYID;
	INT TEAM;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
}S_PT_ENTER_EARTH_SUC;

typedef struct _S_PT_ENTER_EARTH_FAIL {

}S_PT_ENTER_EARTH_FAIL;
/////////////////////////////////////행성진입

typedef struct _S_PT_ENTER_SERVER_ALL
{
	DWORD_PTR ID;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} S_PT_ENTER_SERVER_ALL;

typedef struct _S_PT_LEAVE_SERVER_ALL
{
	DWORD_PTR ID;
} S_PT_LEAVE_SERVER_ALL;

typedef struct _S_PT_ENTER_SERVER_S
{
	DWORD_PTR MYID;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} S_PT_ENTER_SERVER_S;

typedef struct _S_PT_KEY_INPUT_CS
{
	DWORD DIRECTION;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} S_PT_KEY_INPUT_CS;

typedef struct _S_PT_KEY_INPUT_ALL_SC
{
	DWORD_PTR ID;
	DWORD DIRECTION;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} S_PT_KEY_INPUT_ALL_SC;

typedef struct _S_PT_MOUSE_INPUT_CS
{
	FLOAT CXDELTA;
	FLOAT CYDELTA;
	DWORD MOUSEBUTTON;
} S_PT_MOUSE_INPUT_CS;

typedef struct _S_PT_MOUSE_INPUT_ALL_SC
{
	DWORD_PTR ID;
	FLOAT CXDELTA;
	FLOAT CYDELTA;
	DWORD MOUSEBUTTON;
} S_PT_MOUSE_INPUT_ALL_SC;

typedef struct _S_PT_MOUSE_BUTTON_INPUT_CS
{
	DWORD MOUSEBUTTON;
} S_PT_MOUSE_BUTTON_INPUT_CS;

typedef struct _S_PT_MOUSE_BUTTON_INPUT_ALL_SC
{
	DWORD_PTR ID;
	DWORD MOUSEBUTTON;
} S_PT_MOUSE_BUTTON_INPUT_ALL_SC;

typedef struct _S_PT_FIRE_BULLET_ALL_SC
{
	DWORD_PTR ID;
	DWORD_PTR BULLETID;
} S_PT_FIRE_BULLET_ALL_SC;


typedef struct _S_PT_PUT_OBJ_SC
{
	DWORD_PTR ID;
	INT	TAG;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;

	FLOAT MOVINGDIR_X;
	FLOAT MOVINGDIR_Y;
	FLOAT MOVINGDIR_Z;

	FLOAT SPD;
	FLOAT ACCSPD;
} S_PT_PUT_OBJ_SC;

typedef struct _S_PT_REMOVE_OBJ_SC
{
	DWORD_PTR ID;
	INT TAG;
} S_PT_REMOVE_OBJ_SC;

typedef struct _S_PT_CHANGE_STATE_OBJ_SC
{
	DWORD_PTR ID;
	INT TAG;
	DWORD DIRECTION;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;

	FLOAT MOVINGDIR_X;
	FLOAT MOVINGDIR_Y;
	FLOAT MOVINGDIR_Z;

	FLOAT SPD;
	FLOAT ACCSPD;
} S_PT_CHANGE_STATE_OBJ_SC;


/*
typedef struct _S_PT_PUT_OBJS_SC
{
	INT COUNT;
	DWORD_PTR* ID;
	FLOAT* X;
	FLOAT* Y;
	FLOAT* Z;
	FLOAT* MOVINGDIR_X;
	FLOAT* MOVINGDIR_Y;
	FLOAT* MOVINGDIR_Z;

	FLOAT* SPD;
	FLOAT* ACCSPD;
} S_PT_PUT_OBJS_SC;
*/


typedef struct _S_PT_PUT_OBJS_SC
{
INT COUNT;
DWORD_PTR ID[OBJECT_LIMIT];
INT TAG[OBJECT_LIMIT];
FLOAT X[OBJECT_LIMIT];
FLOAT Y[OBJECT_LIMIT];
FLOAT Z[OBJECT_LIMIT];
FLOAT MOVINGDIR_X[OBJECT_LIMIT];
FLOAT MOVINGDIR_Y[OBJECT_LIMIT];
FLOAT MOVINGDIR_Z[OBJECT_LIMIT];

FLOAT SPD[OBJECT_LIMIT];
FLOAT ACCSPD[OBJECT_LIMIT];
} S_PT_PUT_OBJS_SC;



typedef struct _S_PT_REMOVE_OBJS_SC
{
	INT COUNT;
	DWORD_PTR ID[OBJECT_LIMIT];
	INT TAG[OBJECT_LIMIT];

} S_PT_REMOVE_OBJS_SC;


typedef struct _S_PT_PUT_PLAYER_SC
{
	DWORD_PTR ID;
	DWORD DIRECTION;
	FLOAT RIGHTX;
	FLOAT RIGHTY;
	FLOAT RIGHTZ;
	FLOAT UPX;
	FLOAT UPY;
	FLOAT UPZ;
	FLOAT LOOKX;
	FLOAT LOOKY;
	FLOAT LOOKZ;
	FLOAT POSX;
	FLOAT POSY;
	FLOAT POSZ;
} S_PT_PUT_PLAYER_SC;

typedef struct _S_PT_REMOVE_PLAYER_SC
{
	DWORD_PTR ID;
} S_PT_REMOVE_PLAYER_SC;

typedef struct _S_PT_CHANGE_STATE_PLAYER_SC
{
	DWORD_PTR ID;
	DWORD DIRECTION;
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} S_PT_CHANGE_STATE_PLAYER_SC;

typedef struct _S_PT_ROOM_JOIN_CS
{
	INT ID;
	INT ROOM_NUM;
} S_PT_ROOM_JOIN_CS;

typedef struct _S_PT_ROOM_JOIN_SCC_SC
{
	INT SLOT_ID;
	INT SLOT_COUNT;
} S_PT_ROOM_JOIN_SCC_SC;

typedef struct _S_PT_ROOM_JOIN_SC
{
	INT SLOT_ID;
	BOOL READY;
	INT CHARACTER;

} S_PT_ROOM_JOIN_SC;


typedef struct _S_PT_ROOM_CREATE_CS
{
	INT ID;
} S_PT_ROOM_CREATE_CS;

typedef struct _S_PT_ROOM_CREATE_SC
{
	INT ROOM_ID;
} S_PT_ROOM_CREATE_SC;

typedef struct _S_PT_ROOM_CREATE_SCC_SC{//실패란 없다
	INT ROOM_ID;
} S_PT_ROOM_CREATE_SCC_SC;


typedef struct _S_PT_ROOM_DATA_CHANGE_CS {
	INT ROOM_ID;
	INT SLOT_ID;
	BOOL READY;
	INT CHARACTER;
} S_PT_ROOM_DATA_CHANGE_CS;

typedef struct _S_PT_ROOM_DATA_CHANGE_SC {
	INT SLOT_ID;
	BOOL READY;
	INT CHARACTER;
} S_PT_ROOM_DATA_CHANGE_SC;

typedef struct _S_PT_ROOM_ADDPLAYER_SC {
	INT SLOT_COUNT;
} S_PT_ROOM_ADDPLAYER_SC;

typedef struct _S_PT_ROOM_OUT_SC {
	INT SLOT_COUNT;
} S_PT_ROOM_OUT_SC;


typedef struct _S_PT_CHANGE_SLOTID_SC {
	INT SLOT_ID;
} S_PT_CHANGE_SLOTID_SC;

typedef struct _S_PT_FREQUENCY_MOVE_SC
{
	INT SLOT_ID;
	FLOAT POSX;
	FLOAT POSY;
	FLOAT POSZ;
	FLOAT ANGLEY;
} S_PT_FREQUENCY_MOVE_SC;

typedef struct _S_PT_FREQUENCY_MOVE_CS
{
	FLOAT POSX;
	FLOAT POSY;
	FLOAT POSZ;
	FLOAT ANGLEY;
} S_PT_FREQUENCY_MOVE_CS;