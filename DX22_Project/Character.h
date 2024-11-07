#pragma once
#include "ObjectBase.h"
class CCharacter : public CObjectBase
{
public:
	CCharacter();
	~CCharacter();
protected:
	float fPosX;		//座標X
	float fPosY;		//座標Y
	float fMoveX;		//移動量X
	float fMoveY;		//移動量Y
	
public:
	void Move();
};

