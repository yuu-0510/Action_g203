#pragma once
#include "Character.h"
#include "Wire.h"
#define GRAVITI ()

class CPlayer : public CCharacter
{
public:
	CPlayer();
	~CPlayer();

private:
	bool bJumpFlg;		//�W�����v�t���O
	//???				//�����蔻��
	CWire* m_Wire;		//���C���[�N���X
	
private:
	void CheckCollision(/*���W�A�����蔻��*/);			//�����蔻��֐�
	void Move();										//�ړ��֐�


};
