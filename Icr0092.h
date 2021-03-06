//****************** File Icr0092.h ***********************
//
//  Определения констант и структур 
//	для работы с конфигурационным ППЗУ
//  для субмодулей ADMDAC216x400M версий V1.0 и V2.0
//
//	Copyright (c) 2009, Instrumental Systems,Corp.
//	Written by Ekkore
//
//*********************************************************

#ifndef _ICR0092_H
 #define _ICR0092_H

#pragma pack(push, 1)    

#define ADM_CFG_TAG 0x0092

// Конфигурационные параметры субмодуля
typedef struct _ICR_Cfg0092 
{
	U16	wTag;		// тэг структуры (ADM_CFG_TAG)
	U16	wSize;		// размер всех следующих полей структуры
	U08	bAdmIfNum;	// номер интерфейса ADM
	U32	dGen;		// значение опорного генератора
	U08	bFreqTune;	// подстройка частоты встроенного опорного генератора
	U08	bDacCnt;	// количество ЦАП
	U32	dLPFCutoff;	// частота среза фильтра низких частот (Гц)
	U08	bOutResist;	// выходное сопротивление (0 - 50 Ом, 1 - 75 Ом)
	U32	dOscFreq;	// частота ГУН (Гц) (по умолч. 400 МГц)
	U08	bOutCasMod;	// модификация выходного каскада 0 - LF, 1 - HF (только V1.0)
	U08	bQuadModType;	// тип квадратурного модулятора: 
							// для V1.0: 0 - нет, 1 – AD8345, 2 – AD8346, 3 – AD8349
							// для V2.0: 0 - нет, 1 – ADL5370, 2 – ADL5371, 3 – ADL5372, 4 – ADL5373, 5 – ADL5374
	U08	bIsExtClk;	// наличие входа внешнего тактирования: 0, 1
	U08 bIsClkout;	// наличие разъема CLKOUT: 0, 1
	U16	wGenPrec;	// точночть частоты опорного генератора (0.01 ppm)
	U08	bIsIndustrial;	// индустриальное исполнение: 0, 1
} ICR_Cfg0092, *PICR_Cfg0092, ICR_CfgAdm, *PICR_CfgAdm;

#pragma pack(pop)    

#endif // _ICR0092_H

// ****************** End of file Icr0092.h **********************
