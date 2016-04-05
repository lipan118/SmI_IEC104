/*
 * static_model.h
 *
 * automatically generated from simpleIO_direct_control.scd
 *
 * ������ ������ ��� ������� �� ��������� ������� � ����� ��� 61850-7-3.
 *
 * ����� ���������� ��� ���������� ����� (����������� �� ������ Common Logical Node Class)
 * Mod			INC			�����											������������ ��������
 * Beh			INS			���������										������������ ��������
 * Health		INS			���������										������������ ��������
 * NamPlt		LPL			���������� ������								������������ ��������
 * OpCntRs		INC			������������ ������� ������������				������������ ��������
 *
 * ���������� � ���������
 * Str			ACD			����											������������ ��������
 * Op			ACT			������������									������������ ��������
 * TmASt		CSD			�������� �����-������� ��������������			�������������� ��������
 *
 * �������
 * TmACrv		CURVE		��� �����-������� ��������������				�������������� ��������
 * StrVal		ASG			������� �� ����
 * TmMult					�������������� ������� �� �������
 * MinOpTmms	ING			����������� ����� ������������
 * MaxOpTmms	ING			������������ ����� ������������
 * OpDlTmms		ING			������� �� �������
 * TypRsCrv		ING			��� �������������� ��������
 * RsDlTmms		ING			������� ������� ��������
 * DirMod		ING			������������ �����
 *
 *
 *
 *
 *
 *
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_GenericIO;

// -----------------------------------------------------------------------------
// LN LLN0 - ���������� ���� ����. ��. 61850-7-4 �.5.3.4
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_LLN0;

// Mod ��. 61850-7-3 �.7.5.4
extern DataObject    iedModel_GenericIO_LLN0_Mod;					// �����
extern DataAttribute iedModel_GenericIO_LLN0_Mod_q;					// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Mod_t;					// 		����� �������
extern DataAttribute iedModel_GenericIO_LLN0_Mod_stVal;				// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel;			//		������ ����������

// Beh ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LLN0_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_LLN0_Beh_stVal;				// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Beh_q;					// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Beh_t;					// 		����� �������

// Health ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LLN0_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_LLN0_Health_stVal;			// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LLN0_Health_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_Health_t;				// 		����� �������

// NamPlt ��. 61850-7-3 �.7.9.3
extern DataObject    iedModel_GenericIO_LLN0_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor;			// 		��� ����������
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN.
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev;		//		���������� ���������� ������������ ���������� ����������� ���������� LD. (������ ������� ��� ����� ��������� ��������� ������ LD)
extern DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs;			//		������������ ���� ����������� ����������. ��. 61850-7-1

// -----------------------------------------------------------------------------
// LN LPHD1 - ���������� � ���������� ����������. ��. 61850-7-4 �.5.3.2
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_LPHD1;

// PhyNam ��. 61850-7-3 �.7.9.2
extern DataObject    iedModel_GenericIO_LPHD1_PhyNam;				// ���������� �������� ����������� ����������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor;		// 		��� ����������

// PhyHealth ��. 61850-7-3 �.7.3.4
extern DataObject    iedModel_GenericIO_LPHD1_PhyHealth;			// ��������� ����������������� ����������� ����������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal;		// 		�������� ��������� ������ INT32
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q;			// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t;			// 		����� �������

// Proxy ��. 61850-7-3 �.7.3.2
extern DataObject    iedModel_GenericIO_LPHD1_Proxy;				// ������ �� ������ ���� �����������
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal;			// 		�������� ��������� ������ Boolean (��/���)
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_LPHD1_Proxy_t;				// 		����� �������

// -----------------------------------------------------------------------------
// LN GGIO1 - ����/����� ��� ����� ��������� ��. 61850-7-4 �.5.7.2
// -----------------------------------------------------------------------------
extern LogicalNode   iedModel_GenericIO_GGIO1;

// Mod																// ������������ �������� -------------------------------------
extern DataObject    iedModel_GenericIO_GGIO1_Mod;					// �����
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_t;
extern DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel;

// Beh
extern DataObject    iedModel_GenericIO_GGIO1_Beh;					// ����� ������
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Beh_t;

// Health
extern DataObject    iedModel_GenericIO_GGIO1_Health;				// ��������� �����������������
extern DataAttribute iedModel_GenericIO_GGIO1_Health_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Health_t;

// NamPlt
extern DataObject    iedModel_GenericIO_GGIO1_NamPlt;				// ���������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor;		// 		��� ����������
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev;			// 		������� ����������� �����
extern DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN GGIO1.
																	// -----------------------------------------------------------
// ---------------------------------

// AnIn1 ��. 61850-7-3 �.7.4.2
extern DataObject    iedModel_GenericIO_GGIO1_AnIn1;				// ���������� ����				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag;			// 		���������� �������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f;			// 		->		���������� �������� Float32
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q;				// 		�������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t;				// 		����� �������

extern DataObject    iedModel_GenericIO_GGIO1_AnIn2;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn2_t;

extern DataObject    iedModel_GenericIO_GGIO1_AnIn3;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn3_t;

extern DataObject    iedModel_GenericIO_GGIO1_AnIn4;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag_f;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_AnIn4_t;

// SPCSO1 ��. 61850-7-3 �.7.5.2
extern DataObject    iedModel_GenericIO_GGIO1_SPCSO1;						// �������������� ����� ������� ���������������� ����������				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_stVal;					// 		�������� ��������� ������
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q;						// 		�������� ��������

extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper;					// 		����� ���������� ������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal;			// 		->		�������� off/on -  Boolean
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin;			// 				��������� ���������� ��������� (�����������)
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat;		//		 		->		ENUMERATED
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent;	//						OCTET_STRING_64
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum;			//				����� �����������.
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_T;				// 				����� �������.
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test;				//				BOOLEAN
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check;			//				��. ��� ���

extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel;				//		������ ����������
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t;						// 		����� �������.

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO2;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO3;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_t;

extern DataObject    iedModel_GenericIO_GGIO1_SPCSO4;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_T;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_ctlModel;
extern DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_t;

// ------------- ���������� ����� ------------------------------
// Ind1 ��. 61850-7-3 �.7.3.2
extern DataObject    iedModel_GenericIO_GGIO1_Ind1;								// ����� ���������(���� �������� ��������)				(�� ������������ ������)
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal;						// 			�������� ��������� ������ BOOLEAN
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_q;							// 			�������� ��������
extern DataAttribute iedModel_GenericIO_GGIO1_Ind1_t;							// 			����� �������.

extern DataObject    iedModel_GenericIO_GGIO1_Ind2;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind2_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind3;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind3_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind4;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind4_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind5;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind5_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind6;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind6_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind7;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind7_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind8;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind8_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind9;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind9_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind10;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind10_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind11;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind11_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind12;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind12_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind13;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind13_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind14;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind14_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind15;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind15_t;

extern DataObject    iedModel_GenericIO_GGIO1_Ind16;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_stVal;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_q;
extern DataAttribute iedModel_GenericIO_GGIO1_Ind16_t;


#define IEDMODEL_GenericIO (&iedModel_GenericIO)
#define IEDMODEL_GenericIO_LLN0 (&iedModel_GenericIO_LLN0)
#define IEDMODEL_GenericIO_LLN0_Mod (&iedModel_GenericIO_LLN0_Mod)
#define IEDMODEL_GenericIO_LLN0_Mod_q (&iedModel_GenericIO_LLN0_Mod_q)
#define IEDMODEL_GenericIO_LLN0_Mod_t (&iedModel_GenericIO_LLN0_Mod_t)
#define IEDMODEL_GenericIO_LLN0_Mod_ctlModel (&iedModel_GenericIO_LLN0_Mod_ctlModel)
#define IEDMODEL_GenericIO_LLN0_Beh (&iedModel_GenericIO_LLN0_Beh)
#define IEDMODEL_GenericIO_LLN0_Beh_stVal (&iedModel_GenericIO_LLN0_Beh_stVal)
#define IEDMODEL_GenericIO_LLN0_Beh_q (&iedModel_GenericIO_LLN0_Beh_q)
#define IEDMODEL_GenericIO_LLN0_Beh_t (&iedModel_GenericIO_LLN0_Beh_t)
#define IEDMODEL_GenericIO_LLN0_Health (&iedModel_GenericIO_LLN0_Health)
#define IEDMODEL_GenericIO_LLN0_Health_stVal (&iedModel_GenericIO_LLN0_Health_stVal)
#define IEDMODEL_GenericIO_LLN0_Health_q (&iedModel_GenericIO_LLN0_Health_q)
#define IEDMODEL_GenericIO_LLN0_Health_t (&iedModel_GenericIO_LLN0_Health_t)
#define IEDMODEL_GenericIO_LLN0_NamPlt (&iedModel_GenericIO_LLN0_NamPlt)
#define IEDMODEL_GenericIO_LLN0_NamPlt_vendor (&iedModel_GenericIO_LLN0_NamPlt_vendor)
#define IEDMODEL_GenericIO_LLN0_NamPlt_swRev (&iedModel_GenericIO_LLN0_NamPlt_swRev)
#define IEDMODEL_GenericIO_LLN0_NamPlt_d (&iedModel_GenericIO_LLN0_NamPlt_d)
#define IEDMODEL_GenericIO_LLN0_NamPlt_configRev (&iedModel_GenericIO_LLN0_NamPlt_configRev)
#define IEDMODEL_GenericIO_LLN0_NamPlt_ldNs (&iedModel_GenericIO_LLN0_NamPlt_ldNs)
#define IEDMODEL_GenericIO_LPHD1 (&iedModel_GenericIO_LPHD1)
#define IEDMODEL_GenericIO_LPHD1_PhyNam (&iedModel_GenericIO_LPHD1_PhyNam)
#define IEDMODEL_GenericIO_LPHD1_PhyNam_vendor (&iedModel_GenericIO_LPHD1_PhyNam_vendor)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth (&iedModel_GenericIO_LPHD1_PhyHealth)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_stVal (&iedModel_GenericIO_LPHD1_PhyHealth_stVal)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_q (&iedModel_GenericIO_LPHD1_PhyHealth_q)
#define IEDMODEL_GenericIO_LPHD1_PhyHealth_t (&iedModel_GenericIO_LPHD1_PhyHealth_t)
#define IEDMODEL_GenericIO_LPHD1_Proxy (&iedModel_GenericIO_LPHD1_Proxy)
#define IEDMODEL_GenericIO_LPHD1_Proxy_stVal (&iedModel_GenericIO_LPHD1_Proxy_stVal)
#define IEDMODEL_GenericIO_LPHD1_Proxy_q (&iedModel_GenericIO_LPHD1_Proxy_q)
#define IEDMODEL_GenericIO_LPHD1_Proxy_t (&iedModel_GenericIO_LPHD1_Proxy_t)

#define IEDMODEL_GenericIO_GGIO1 (&iedModel_GenericIO_GGIO1)
#define IEDMODEL_GenericIO_GGIO1_Mod (&iedModel_GenericIO_GGIO1_Mod)
#define IEDMODEL_GenericIO_GGIO1_Mod_q (&iedModel_GenericIO_GGIO1_Mod_q)
#define IEDMODEL_GenericIO_GGIO1_Mod_t (&iedModel_GenericIO_GGIO1_Mod_t)
#define IEDMODEL_GenericIO_GGIO1_Mod_ctlModel (&iedModel_GenericIO_GGIO1_Mod_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_Beh (&iedModel_GenericIO_GGIO1_Beh)
#define IEDMODEL_GenericIO_GGIO1_Beh_stVal (&iedModel_GenericIO_GGIO1_Beh_stVal)
#define IEDMODEL_GenericIO_GGIO1_Beh_q (&iedModel_GenericIO_GGIO1_Beh_q)
#define IEDMODEL_GenericIO_GGIO1_Beh_t (&iedModel_GenericIO_GGIO1_Beh_t)
#define IEDMODEL_GenericIO_GGIO1_Health (&iedModel_GenericIO_GGIO1_Health)
#define IEDMODEL_GenericIO_GGIO1_Health_stVal (&iedModel_GenericIO_GGIO1_Health_stVal)
#define IEDMODEL_GenericIO_GGIO1_Health_q (&iedModel_GenericIO_GGIO1_Health_q)
#define IEDMODEL_GenericIO_GGIO1_Health_t (&iedModel_GenericIO_GGIO1_Health_t)
#define IEDMODEL_GenericIO_GGIO1_NamPlt (&iedModel_GenericIO_GGIO1_NamPlt)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_vendor (&iedModel_GenericIO_GGIO1_NamPlt_vendor)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_swRev (&iedModel_GenericIO_GGIO1_NamPlt_swRev)
#define IEDMODEL_GenericIO_GGIO1_NamPlt_d (&iedModel_GenericIO_GGIO1_NamPlt_d)

#define IEDMODEL_GenericIO_GGIO1_AnIn1 (&iedModel_GenericIO_GGIO1_AnIn1)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_mag (&iedModel_GenericIO_GGIO1_AnIn1_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_mag_f (&iedModel_GenericIO_GGIO1_AnIn1_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_q (&iedModel_GenericIO_GGIO1_AnIn1_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn1_t (&iedModel_GenericIO_GGIO1_AnIn1_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn2 (&iedModel_GenericIO_GGIO1_AnIn2)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_mag (&iedModel_GenericIO_GGIO1_AnIn2_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_mag_f (&iedModel_GenericIO_GGIO1_AnIn2_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_q (&iedModel_GenericIO_GGIO1_AnIn2_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn2_t (&iedModel_GenericIO_GGIO1_AnIn2_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn3 (&iedModel_GenericIO_GGIO1_AnIn3)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_mag (&iedModel_GenericIO_GGIO1_AnIn3_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_mag_f (&iedModel_GenericIO_GGIO1_AnIn3_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_q (&iedModel_GenericIO_GGIO1_AnIn3_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn3_t (&iedModel_GenericIO_GGIO1_AnIn3_t)
#define IEDMODEL_GenericIO_GGIO1_AnIn4 (&iedModel_GenericIO_GGIO1_AnIn4)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_mag (&iedModel_GenericIO_GGIO1_AnIn4_mag)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_mag_f (&iedModel_GenericIO_GGIO1_AnIn4_mag_f)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_q (&iedModel_GenericIO_GGIO1_AnIn4_q)
#define IEDMODEL_GenericIO_GGIO1_AnIn4_t (&iedModel_GenericIO_GGIO1_AnIn4_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO1 (&iedModel_GenericIO_GGIO1_SPCSO1)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_stVal (&iedModel_GenericIO_GGIO1_SPCSO1_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_q (&iedModel_GenericIO_GGIO1_SPCSO1_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper (&iedModel_GenericIO_GGIO1_SPCSO1_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO1_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO1_t (&iedModel_GenericIO_GGIO1_SPCSO1_t)

#define IEDMODEL_GenericIO_GGIO1_SPCSO2 (&iedModel_GenericIO_GGIO1_SPCSO2)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_stVal (&iedModel_GenericIO_GGIO1_SPCSO2_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_q (&iedModel_GenericIO_GGIO1_SPCSO2_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper (&iedModel_GenericIO_GGIO1_SPCSO2_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO2_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO2_t (&iedModel_GenericIO_GGIO1_SPCSO2_t)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3 (&iedModel_GenericIO_GGIO1_SPCSO3)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_stVal (&iedModel_GenericIO_GGIO1_SPCSO3_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_q (&iedModel_GenericIO_GGIO1_SPCSO3_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper (&iedModel_GenericIO_GGIO1_SPCSO3_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO3_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO3_t (&iedModel_GenericIO_GGIO1_SPCSO3_t)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4 (&iedModel_GenericIO_GGIO1_SPCSO4)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_stVal (&iedModel_GenericIO_GGIO1_SPCSO4_stVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_q (&iedModel_GenericIO_GGIO1_SPCSO4_q)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper (&iedModel_GenericIO_GGIO1_SPCSO4_Oper)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_ctlVal (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_ctlNum (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_T (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_T)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_Test (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_Oper_Check (&iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_ctlModel (&iedModel_GenericIO_GGIO1_SPCSO4_ctlModel)
#define IEDMODEL_GenericIO_GGIO1_SPCSO4_t (&iedModel_GenericIO_GGIO1_SPCSO4_t)

#define IEDMODEL_GenericIO_GGIO1_Ind1 (&iedModel_GenericIO_GGIO1_Ind1)
#define IEDMODEL_GenericIO_GGIO1_Ind1_stVal (&iedModel_GenericIO_GGIO1_Ind1_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind1_q (&iedModel_GenericIO_GGIO1_Ind1_q)
#define IEDMODEL_GenericIO_GGIO1_Ind1_t (&iedModel_GenericIO_GGIO1_Ind1_t)

#define IEDMODEL_GenericIO_GGIO1_Ind2 (&iedModel_GenericIO_GGIO1_Ind2)
#define IEDMODEL_GenericIO_GGIO1_Ind2_stVal (&iedModel_GenericIO_GGIO1_Ind2_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind2_q (&iedModel_GenericIO_GGIO1_Ind2_q)
#define IEDMODEL_GenericIO_GGIO1_Ind2_t (&iedModel_GenericIO_GGIO1_Ind2_t)

#define IEDMODEL_GenericIO_GGIO1_Ind3 (&iedModel_GenericIO_GGIO1_Ind3)
#define IEDMODEL_GenericIO_GGIO1_Ind3_stVal (&iedModel_GenericIO_GGIO1_Ind3_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind3_q (&iedModel_GenericIO_GGIO1_Ind3_q)
#define IEDMODEL_GenericIO_GGIO1_Ind3_t (&iedModel_GenericIO_GGIO1_Ind3_t)

#define IEDMODEL_GenericIO_GGIO1_Ind4 (&iedModel_GenericIO_GGIO1_Ind4)
#define IEDMODEL_GenericIO_GGIO1_Ind4_stVal (&iedModel_GenericIO_GGIO1_Ind4_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind4_q (&iedModel_GenericIO_GGIO1_Ind4_q)
#define IEDMODEL_GenericIO_GGIO1_Ind4_t (&iedModel_GenericIO_GGIO1_Ind4_t)

#define IEDMODEL_GenericIO_GGIO1_Ind5 (&iedModel_GenericIO_GGIO1_Ind5)
#define IEDMODEL_GenericIO_GGIO1_Ind5_stVal (&iedModel_GenericIO_GGIO1_Ind5_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind5_q (&iedModel_GenericIO_GGIO1_Ind5_q)
#define IEDMODEL_GenericIO_GGIO1_Ind5_t (&iedModel_GenericIO_GGIO1_Ind5_t)

#define IEDMODEL_GenericIO_GGIO1_Ind6 (&iedModel_GenericIO_GGIO1_Ind6)
#define IEDMODEL_GenericIO_GGIO1_Ind6_stVal (&iedModel_GenericIO_GGIO1_Ind6_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind6_q (&iedModel_GenericIO_GGIO1_Ind6_q)
#define IEDMODEL_GenericIO_GGIO1_Ind6_t (&iedModel_GenericIO_GGIO1_Ind6_t)

#define IEDMODEL_GenericIO_GGIO1_Ind7 (&iedModel_GenericIO_GGIO1_Ind7)
#define IEDMODEL_GenericIO_GGIO1_Ind7_stVal (&iedModel_GenericIO_GGIO1_Ind7_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind7_q (&iedModel_GenericIO_GGIO1_Ind7_q)
#define IEDMODEL_GenericIO_GGIO1_Ind7_t (&iedModel_GenericIO_GGIO1_Ind7_t)

#define IEDMODEL_GenericIO_GGIO1_Ind8 (&iedModel_GenericIO_GGIO1_Ind8)
#define IEDMODEL_GenericIO_GGIO1_Ind8_stVal (&iedModel_GenericIO_GGIO1_Ind8_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind8_q (&iedModel_GenericIO_GGIO1_Ind8_q)
#define IEDMODEL_GenericIO_GGIO1_Ind8_t (&iedModel_GenericIO_GGIO1_Ind8_t)

#define IEDMODEL_GenericIO_GGIO1_Ind9 (&iedModel_GenericIO_GGIO1_Ind9)
#define IEDMODEL_GenericIO_GGIO1_Ind9_stVal (&iedModel_GenericIO_GGIO1_Ind9_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind9_q (&iedModel_GenericIO_GGIO1_Ind9_q)
#define IEDMODEL_GenericIO_GGIO1_Ind9_t (&iedModel_GenericIO_GGIO1_Ind9_t)

#define IEDMODEL_GenericIO_GGIO1_Ind10 (&iedModel_GenericIO_GGIO1_Ind10)
#define IEDMODEL_GenericIO_GGIO1_Ind10_stVal (&iedModel_GenericIO_GGIO1_Ind10_stVal)
#define IEDMODEL_GenericIO_GGIO1_Ind10_q (&iedModel_GenericIO_GGIO1_Ind10_q)
#define IEDMODEL_GenericIO_GGIO1_Ind10_t (&iedModel_GenericIO_GGIO1_Ind10_t)
#endif /* STATIC_MODEL_H_ */

