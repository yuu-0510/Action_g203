#pragma once
#include "ObjectBase.h"
class CCharacter : public CObjectBase
{
public:
	CCharacter();
	~CCharacter();
protected:
	float fPosX;		//À•WX
	float fPosY;		//À•WY
	float fMoveX;		//ˆÚ“®—ÊX
	float fMoveY;		//ˆÚ“®—ÊY
	
public:
	void Move();
};

