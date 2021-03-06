//****************** File Icr009F.h ***********************
//
//  Определения констант и структур 
//	для работы с конфигурационным ППЗУ
//  для субмодуля FM405P с тетстовой прошивкой
//
//*********************************************************

#ifndef _ICR009F_H
 #define _ICR009F_H

#pragma pack(push, 1)    

#define ADM_CFG_TAG 0x009F

// Конфигурационные параметры субмодуля
typedef struct _ICR_Cfg009F {
	U16	wTag;		// тэг структуры (ADM_CFG_TAG)
	U16	wSize;	// размер всех следующих полей структуры
	U08	bAdmIfNum;	// номер интерфейса ADM
	U08	isMatching;// узел согласования внешней шины; 0-нет, 1-есть
	U08 reserve[10];// резерв
} ICR_Cfg009F, *PICR_Cfg009F, ICR_CfgAdm, *PICR_CfgAdm;

#pragma pack(pop)    

#endif // _ICR009F_H

// ****************** End of file Icr009F.h **********************
