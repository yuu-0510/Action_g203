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
	bool bJumpFlg;							//�W�����v�t���O
	float fHalfSizeX;						//�����蔻��
	float fHalfSizeY;						//�����蔻��
	CWire* m_Wire;							//���C���[�N���X
	
private:
	void CheckCollision(/*���W�A�����蔻��*/);			//�����蔻��֐�
	void Move();										//�ړ��֐�


};

