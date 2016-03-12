// -------------------------------------------------------------------------
//    �ļ���      :    NFSkill_def.h
//    ������      :    LvSheng.Huang
//    ����ʱ��    :    2010-10-5 12:05
//    ��������    :    ����Ľṹ��
//
// -------------------------------------------------------------------------
#ifndef NFC_OBJECT_DEF_H
#define NFC_OBJECT_DEF_H

#include "NFItem_def.h"
//#include <vector>

#pragma pack(push,1)

////////////////////////////////////////////////////////////////////////////////

//ְҵ1:��ʿ2ǹ��3: ҽ4:����5�̿�
enum NFJobType
{
    NJT_1,
    NJT_2,
    NJT_3,
    NJT_4,
    NJT_MAX,
};
//����
enum NFRaceType
{
    NRT_1,
    NRT_2,
    NRT_3,
    NRT_4,
    NRT_MAX,
};
//��Ӫ
enum NFCampType
{
    NCT_1,
    NCT_2,
    NCT_3,
    NCT_MAX,
};

//////////////////////////////////////////////////////////////////////////
//0����1��2��3��˸4���ܷ���5��6ƽ��������
enum NFObjectStateType
{
    NOST_IDLE,
    NOST_RUN,
    NOST_WALK,
    NOST_WILK,
    NOST_SKILLFLY,
    NOST_DEAD,
    NOST_SKILLUSE,
};

enum NFLogicStateType
{
	NLST_FREE,//����״̬
	NLST_PVP,//PVP״̬���ڲ������Լ���С״̬��
	NLST_PVE,//PVE״̬���ڲ������Լ���С״̬��
};

enum NFGMComandID
{
    NGMC_ID_ADDEXP,
    NGMC_ID_ADDITEM,
};






















#pragma pack(pop)
#endif