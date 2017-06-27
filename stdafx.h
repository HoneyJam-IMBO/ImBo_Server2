// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이 
// 들어 있는 포함 파일입니다.
//

#pragma once

#define DEBUG


#include "../Assets/import/LowLib/Global.h"

//direct 헤더
#include <Mmsystem.h>
#include <math.h>

#include <d3d11.h>
#include <d3dx11.h>
#include <D3DX10Math.h>
#include <d3dcompiler.h>


#include <DirectXMath.h>
#include <DirectXColors.h>
#include <DirectXPackedVector.h>
#include <DirectXCollision.h>

using namespace DirectX;
using namespace DirectX::PackedVector;

inline D3DXVECTOR3&& XMVecToD3DXVec3(const XMVECTOR& xmVec)
{
	XMFLOAT3 xmf3;
	XMStoreFloat3(&xmf3, xmVec);
	return std::move(D3DXVECTOR3(xmf3.x, xmf3.y, xmf3.z));
}
inline XMFLOAT3 XMVFLOAT3Converter(const XMVECTOR& xmVec)
{
	XMFLOAT3 xmf3;
	XMStoreFloat3(&xmf3, xmVec);
	return xmf3;
}

inline XMVECTOR&& XMVECTORConverter(const XMFLOAT3& d3dxv, float wParam = 0.f)
{
	return std::move(XMVectorSet(d3dxv.x, d3dxv.y, d3dxv.z, 0.0f));
}

inline XMVECTOR&& D3DXVec3ToXMVec(const D3DXVECTOR3& d3dxv, float wParam = 0.f)
{
	return std::move(XMVectorSet(d3dxv.x, d3dxv.y, d3dxv.z, 0.0f));
}
//direct 헤더

#include "../Assets/import/LowLib/CriticalSection.h"
#include "../Assets/import/LowLib/MultiThreadSync.h"
#include "../Assets/import/LowLib/MemoryPool.h"
#include "../Assets/import/LowLib/CircularQueue.h"
#include "../Assets/import/LowLib/NetworkSession.h"
#include "../Assets/import/LowLib/PacketSession.h"
#include "../Assets/import/LowLib/Iocp.h"
#include "../Assets/import/LowLib/Stream.h"
#include "../Assets/import/LowLib/MiniDump.h"
#include "../Assets/import/LowLib/IniFile.h"

#include "CircularQueue.h"

#include "Protocol.h"
#include "PT_Structure.h"
#include "PT_ReadPacket.h"
#include "PT_WritePacket.h"



#include "ConnectedSession.h"
#include "ConnectedSessionManager.h"

#include "Timer.h"
#include "Object.h"
//#include "Space.h"
//#include "ServerMain.h"
#include "ServerIocp.h"
//#include "Space.h"

//공간
//#include "Space.h"
#define RANDOM_DIR ((rand() * 0xFFFFFF) / RAND_MAX )-1

//
////프로토콜 관련 정의
//#define STATIC_OBJECT_LIMIT	200
////프로토콜 관련 정의 protocol struct 헤더에 정의되어 있음 
//
#include "DLinkedList.h"
//공간
#include <map>
#include <set>
#include <algorithm>
#include <list>
#include <vector>


static void gotoxy(int x, int y, const char *msg, ...){
#ifdef _DEBUG
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	va_list arg;

	va_start(arg, msg);
	vprintf(msg, arg);
	va_end(arg);

	printf("\n");

#endif
}