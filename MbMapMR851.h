/*
 * MbMapMR851.h
 *
 *  Created on: 07.06.2017
 *      Author: sagok
 */

#ifndef MBMAPMR851_H_
#define MBMAPMR851_H_

#if defined (MR851)
#define _swREV			"MR851"
#endif

/*************************************************************************
 * MR851
 *************************************************************************/
#if defined (MR851)
#define MB_Speed				115200
#define MB_Slaveaddr   			1

#define MB_StartOtherUstavkiaddr	0x1040
#define MB_NumbOtherUstavki			0x107B - MB_StartOtherUstavkiaddr + 1

#define MB_offset_KTT				0x102B - MB_StartOtherUstavkiaddr


// ������������ �������������� ������ ------------------------------------------

// ������������ ������� ���������� �������� -------------------------------------

// ������������ �������� ���������� �������� -------------------------------------

// ������ ������� ----------------------------------------------------------------
#define MB_StartUstavkiaddr0	0x1000			// ������ �������
#define MB_NumbUstavki			MB_StartSystemCfg - MB_StartUstavkiaddr0 + 1			// ������ ����� �������

#define MB_offset_Ktn1			0x09
#define MB_offset_Ktnnp1		0x0B
#define MB_offset_Ktn2			0x29
#define MB_offset_Ktnnp2		0x2B

#define MB_offset_Ittvv1		0x01
#define MB_offset_Ittsv1		0x02
#define MB_offset_Ittvv2		0x21
#define MB_offset_Ittsv2		0x22

#define MB_offset_Config_Ktn1	0x08
#define MB_offset_Config_Ktn2	0x28

#define MB_bOffsetConfig		1<<0		// ������������ ��


// ----------------------------------------------------------------------------------------------
#define MB_StartDiscreetaddr   	0x1800			// ����� � ������ ��� ������� ������ (3,4)
#define MB_NumbDiscreet   		0x0B			// 0x22

// ---------------------------------
#define MB_offsetLocalCtrl		0x00		// ������ �����
#define MB_offsetExtCtrl		0x00		// ����. �����
#define MB_offset_NewJurnalMs	0x00

#define MB_bOffseNewJurnalMs	1<<6		// ����� ������ ��

#define MB_bOffsetLocal			1<<8		// ������ �����
#define MB_bOffsetExt			1<<9		// ����. �����

// ---------------------------------
#define MB_offset_ErrorSDTU		0x00
#define MB_bOffsetErrorSDTU		1<<5		// ������� �������������

// ---------------------------------
#define MB_offset_BLK			0x0A
#define MB_bOffsetDriveDNTMove	1<<9

// ---------------------------------
#define MB_offset_NewMsJurnalError	0x08
#define MB_bOffseNewMsJurnalError	1<<7		// ����� ������



// ---------------------------------
#define MB_offset_Jurnals		0x08

#define MB_bOffsetIndDriveUP	1<<0		// ������ ���������
#define MB_bOffsetIndDriveDWN	1<<1		// ������ �������
#define MB_bOffsetError			1<<2		// ������� �������������
#define MB_bOffsetIndBLK		1<<3		// ������ ����������
#define MB_bOffsetIndLocalExt	1<<4		// ������ ����. ������

#define MB_bOffsetSysNote		1<<5		// ����� ������ ������� �������


#define MB_CTRL_OFF				0xFF00
// ---------------------------------
#define MB_offsetHardFaults		0x04		// ������������� ����������

#define MB_errorHard			1<<0		// ������������� ����������
#define MB_errorSOFT			1<<1		// ������������� �����������
#define MB_errorDrive			1<<2		// ������������� �������

// ---------------------------------
#define MB_offsetError_M1		0x05		// �������������
#define MB_offsetError_M2		0x05		// ������������� ����
#define MB_offsetError_M3		0x05		// �������������
#define MB_offsetError_Ustavki	0x05		// �������������
#define MB_offsetError_Jurnals	0x05		// �������������

#define MB_bOffsetErrModule1	0b11<<3		// ������� ������������� ������ MCA
#define MB_bOffsetErrModule1a	0b1<<3		// ������� ������������� ������ ��AU
#define MB_bOffsetErrModule1b	0b1<<4		// ������� ������������� ������ ��AI

#define MB_bOffsetErrModule2	0b1<<5		// ������� ������������� ������ ���
#define MB_bOffsetErrModule3	0b11<<6		// ������� ������������� ������ MCA
#define MB_bOffsetErrModule3a	0b1<<6		// ������� ������������� ������ ���1
#define MB_bOffsetErrModule3b	0b1<<7		// ������� ������������� ������ ���2

#define MB_bOffsetErrUstavki	1<<8		// ������� ������������� �������
#define MB_bOffsetErrSysNote	1<<0xB		// �������������������� �� ������� �������

#define MB_offsetError_DriveRPN		0x06	// ������������� �������
#define MB_bOffsetAllErrDriveRPN	0b11111	// ������� �������������


// ---------------------------------
// --Discreet --
#define MB_offsetDiscreet_1		0x08
#define MB_offsetDiscreet_2		0x08
#define MB_offsetDiscreet_3		0x08
#define MB_offsetDiscreet_4		0x08
#define MB_offsetDiscreet_5		0x08
#define MB_offsetDiscreet_6		0x08
#define MB_offsetDiscreet_7		0x08
#define MB_offsetDiscreet_8		0x08
#define MB_offsetDiscreet_9		0x09
#define MB_offsetDiscreet_10	0x09
#define MB_offsetDiscreet_11	0x09
#define MB_offsetDiscreet_12	0x09
#define MB_offsetDiscreet_13	0x09
#define MB_offsetDiscreet_14	0x09
#define MB_offsetDiscreet_15	0x09
#define MB_offsetDiscreet_16	0x09

#define MB_bOffset_Discreet_1		1<<8
#define MB_bOffset_Discreet_2		1<<9
#define MB_bOffset_Discreet_3		1<<10
#define MB_bOffset_Discreet_4		1<<11
#define MB_bOffset_Discreet_5		1<<12
#define MB_bOffset_Discreet_6		1<<13
#define MB_bOffset_Discreet_7		1<<14
#define MB_bOffset_Discreet_8		1<<15
#define MB_bOffset_Discreet_9		1<<0
#define MB_bOffset_Discreet_10		1<<1
#define MB_bOffset_Discreet_11		1<<2
#define MB_bOffset_Discreet_12		1<<3
#define MB_bOffset_Discreet_13		1<<4
#define MB_bOffset_Discreet_14		1<<5
#define MB_bOffset_Discreet_15		1<<6
#define MB_bOffset_Discreet_16		1<<7


// ---------------------------------
#define MB_offsetRelay_1		0x03
#define MB_offsetRelay_2		0x03
#define MB_offsetRelay_3		0x03
#define MB_offsetRelay_4		0x03
#define MB_offsetRelay_5		0x03
#define MB_offsetRelay_6		0x03
#define MB_offsetRelay_7		0x03
#define MB_offsetRelay_8		0x03
#define MB_offsetRelay_9		0x03
#define MB_offsetRelay_10		0x03
#define MB_offsetRelay_11		0x03
#define MB_offsetRelay_12		0x03
#define MB_offsetRelay_13		0x03
#define MB_offsetRelay_14		0x03
#define MB_offsetRelay_15		0x03


#define MB_bOffset_Relay_1		1<<4
#define MB_bOffset_Relay_2		1<<5
#define MB_bOffset_Relay_3		1<<6
#define MB_bOffset_Relay_4		1<<7
#define MB_bOffset_Relay_5		1<<8
#define MB_bOffset_Relay_6		1<<9
#define MB_bOffset_Relay_7		1<<10
#define MB_bOffset_Relay_8		1<<11
#define MB_bOffset_Relay_9		1<<12
#define MB_bOffset_Relay_10		1<<13
#define MB_bOffset_Relay_11		1<<14
#define MB_bOffset_Relay_12		1<<15
#define MB_bOffset_Relay_13		1<<2			// ���������
#define MB_bOffset_Relay_14		1<<3			// �������
#define MB_bOffset_Relay_15		1<<1			// �������������


// ---------------------------------
#define MB_offsetLED_1			0x02
#define MB_offsetLED_2			0x02
#define MB_offsetLED_3			0x02
#define MB_offsetLED_4			0x02
#define MB_offsetLED_5			0x02
#define MB_offsetLED_6			0x02
#define MB_offsetLED_7			0x02
#define MB_offsetLED_8			0x02
#define MB_offsetLED_9			0x02
#define MB_offsetLED_10			0x02
#define MB_offsetLED_11			0x02
#define MB_offsetLED_12			0x02
#define MB_offsetLED_13			0x02
#define MB_offsetLED_14			0x02
#define MB_offsetLED_15			0x02
#define MB_offsetLED_16			0x02

//0 ��������� �����������
//1 ��������� ������� ���������
//2 ��������� �������� ���������
//3 ��������� �������������
//4 ��������� ���������
//5 ��������� �����������
//6 ��������� ��������������� �����
//7 ��������� ������� ��������
//8 ��������� ������� 2�
//9 ��������� ������� 1�
//10 ��������� �U<������
//11 ��������� �U>������
#define MB_bOffset_LED_1		1<<5
#define MB_bOffset_LED_2		1<<4
#define MB_bOffset_LED_3		1<<3
#define MB_bOffset_LED_4		1<<2
#define MB_bOffset_LED_5		1<<1
#define MB_bOffset_LED_6		1<<0
#define MB_bOffset_LED_7		1<<11
#define MB_bOffset_LED_8		1<<10
#define MB_bOffset_LED_9		1<<9
#define MB_bOffset_LED_10		1<<8
#define MB_bOffset_LED_11		1<<7
#define MB_bOffset_LED_12		1<<6

/*
5 ��������� �����������
4 ��������� ���������
3 ��������� �������������
2 ��������� �������� ���������
1 ��������� ������� ���������
0 ��������� �����������
11 ��������� �U>������
10 ��������� �U<������
9 ��������� ������� 1�
8 ��������� ������� 2�
7 ��������� ��������������� �����
6 ��������� ������� ��������
*/
// ----------------------------------------------------------------------------------------------
#define MB_StartAnalogINaddr   	0x1900		// ���� ������ ��������
#define MB_NumbAnalog   		16			//

#define MB_offset_Ivv1			0
#define MB_offset_Isv1			1
#define MB_offset_Ivv2			2
#define MB_offset_Isv2			3

#define MB_offset_Uab1			8
#define MB_offset_Ubc1Un1		9
#define MB_offset_Uab2			10
#define MB_offset_Ubc2Un2		11
#define MB_offset_U21			12
#define MB_offset_U22			13
#define MB_offset_Upp1			14
#define MB_offset_Upp2			15

// ----------------------------------------------------------------------------------------------
#define	MB_StartRPNaddr			0x1A00
#define	MB_NumbRPN				3

#define MB_offset_CurrPosRPN	0		// 2 �����
#define MB_offset_CntSwRPN		2		// 2 �����

// ----------------------------------------------------------------------------------------------
#define MB_StartDateNaddr   	0x0200
#define MB_NumbDate		   		7

// ----------------------------------------------------------------------------------------------
#define MB_StartRevNaddr   		0x0500		// ������ 17 ����
#define MB_NumbWordRev	   		16			// 16

#define MB_addr_DRIVE_UP		0x1800
#define MB_addr_DRIVE_DWN		0x1801

#define MB_addr_Set_ExtMode		0x1802
#define MB_addr_BLK_OFF			0x1803		// ����� ����������.
#define MB_addr_LEDS_OFF		0x1804		// ����� ���������
#define MB_addr_Error_OFF		0x1805		// ����� ������ �������������
#define MB_addr_SysNote_OFF		0x1806		// ����� ������ ��
#define MB_addr_Clr_ExtMode		0x1807		// ����� ����. �����

#define MB_CTRL_OFF				0xFF00


// ��������� ������� (��� �� IP �����) -----------------------------------------------------------
#define MB_StartSystemCfg		0x1078
#define MB_NumbSystemCfg		4
#define MB_offset_IP			2


#define MB_PerForSynchClock		1				// ������ ����������������� �����
#define MB_PerForReadMODBUS		100				// ������ ������ ������ � ��	150

#endif


#endif /* MBMAPMR90x_H_ */
