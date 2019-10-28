//****************** File Icr0095.h ***********************
//
//  Определения констант и структур 
//	для работы с конфигурационным ППЗУ
//  для субмодулей FM412x500M
//
//*********************************************************

#ifndef _ICR0095_H
 #define _ICR0095_H

#pragma pack(push, 1)    

#define ADM_CFG_TAG 0x0095

// Конфигурационные параметры субмодуля
typedef struct _ICR_Cfg0095 {
	U16	wTag;		// тэг структуры (ADM_CFG_TAG)
	U16	wSize;		// размер всех следующих полей структуры
	U08	bAdmIfNum;	// номер интерфейса ADM
	U08	bAdcCnt;	// количество АЦП: 1, 2
	U08	bAdcType;	// тип кристалла АЦП: 0-всегда
	U08	bDacType;	// тип кристалла ЦАП: 0-всегда
	U16	wDacRange;	// шкала преобразования ЦАП: (мВ)
	U08	bGenType;	// тип кристалла внутр. генератора: 0-не програм-ый, 1-Si571
	U08	bGenAdr;	// адресный код внутр. генератора: 0x49 по умолчанию
	U32	nGenRef;    // заводская установка частоты внутр. генератора (Гц)
	U32	nGenRefMax; // максимальная частота внутр. генератора (Гц)
	U08	bSyntType;	// тип кристалла синтезатора: 0-отсутствует, 1-5 - AD9518

	U08 reserve[23];// резерв для выравнивания

	S16	awRangeDeviation[4];	// отклонение ШП от номинала (разы) (default 10000)
	S16 awBiasDeviation[4];	// отклонения смещения нуля (разы) (default 0)
} ICR_Cfg0095, *PICR_Cfg0095, ICR_CfgAdm, *PICR_CfgAdm;

#pragma pack(pop)    

#endif // _ICR0095_H

// ****************** End of file Icr0095.h **********************
