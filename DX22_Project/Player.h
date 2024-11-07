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
	bool bJumpFlg;		//ジャンプフラグ
	//???				//当たり判定a
	CWire* m_Wire;		//ワイヤークラス
	
private:
	void CheckCollision(/*座標、当たり判定*/);			//当たり判定関数
	void Move();										//移動関数


};

