#pragma once
#include "ObjectBase.h"
class CCharacter : public CObjectBase
{
public:
	CCharacter();
	~CCharacter();
protected:
	float fPosX;		//���WX
	float fPosY;		//���WY
	float fMoveX;		//�ړ���X
	float fMoveY;		//�ړ���Y
	
public:
	void Move();
};

