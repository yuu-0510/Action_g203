#pragma once
#include "Character.h"
#include "Wire.h"
#define GRAVITI (9.80665) //�d�͉����x

class CPlayer : public CCharacter
{
public:
	CPlayer();
	~CPlayer();

private:
	bool bJumpFlg;		//�W�����v�t���O
	//???				//�����蔻��a
	CWire* m_Wire;		//���C���[�N���X
	float fPosX;
	float fPosY;

private:
	void CheckCollision(/*���W�A�����蔻��*/);			//�����蔻��֐�
	void Move();										//�ړ��֐�


};

