//****************** File Icr009D.h ***********************
//
//  Определения констант и структур 
//	для работы с конфигурационным ППЗУ
//  для субмодулей FM814x250M
//
//*********************************************************

#ifndef _ICR009D_H
 #define _ICR009D_H

#pragma pack(push, 1)    

#define ADM_CFG_TAG 0x009D

// Конфигурационные параметры субмодуля
typedef struct _ICR_Cfg009D {
	U16	wTag;		// тэг структуры (ADM_CFG_TAG)
	U16	wSize;		// размер всех следующих полей структуры
	U08	bAdmIfNum;	// номер интерфейса ADM
	U08	bAdcCnt;	// количество АЦП: 4, 8
	U08	bAdcType;	// тип кристалла АЦП: 0-всегда
	U08	bDacType;	// тип кристалла ЦАП: 0-всегда
	U16	wDacRange;	// шкала преобразования ЦАП: (мВ)
	U08	bGenType;	// тип кристалла внутр. генератора: 0-не програм-ый, 1-Si571
	U08	bGenAdr;	// адресный код внутр. генератора: 0x49 по умолчанию
	U32	nGenRef;    // заводская установка частоты внутр. генератора (Гц)
	U32	nGenRefMax; // максимальная частота внутр. генератора (Гц)
	U08	bInpType;	// тип входа: 0-закрытый, 1-открытый
} ICR_Cfg009D, *PICR_Cfg009D, ICR_CfgAdm, *PICR_CfgAdm;

#pragma pack(pop)    

#endif // _ICR009D_H

// ****************** End of file Icr009D.h **********************
