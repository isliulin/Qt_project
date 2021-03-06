
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef DISPLAY_H
#define DISPLAY_H

#include "../include/canfestival/data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 display_valueRangeTest (UNS8 typeValue, void * value);
const indextable * display_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data display_Data;

/************************************SDO:2000 - Start***********************************/
extern UNS8 Display_parameters_ORIENTATION;		/* Mapped at index 0x2000, subindex 0x01 */
extern UNS8 Display_parameters_CONTRASTE;		/* Mapped at index 0x2000, subindex 0x02 */
extern UNS8 Display_parameters_BACKLIGHT;		/* Mapped at index 0x2000, subindex 0x03 */
extern UNS8 Display_parameters_VIT_SCROL;		/* Mapped at index 0x2000, subindex 0x04 */
/************************************SDO:2000 - End***********************************/

/************************************SDO:2001 - Start***********************************/
extern UNS8 Customer_Logo_LOGO_CLIENT;		/* Mapped at index 0x2001, subindex 0x01 */
extern UNS8 Customer_Logo_LOGO_PERIODE;		/* Mapped at index 0x2001, subindex 0x02 */
extern UNS8 Customer_Logo_LOGO_DECLENCHEMENT;		/* Mapped at index 0x2001, subindex 0x03 */
/************************************SDO:2001 - End***********************************/

/************************************RPDO1 - Start***********************************/
//按钮点灯信号
extern UNS8 Panel_output_Level_S_BC0;		/* Mapped at index 0x2200, subindex 0x01 */
extern UNS8 Panel_output_Level_S_BC1;		/* Mapped at index 0x2200, subindex 0x02 */
extern UNS8 Panel_output_Level_S_BC2;		/* Mapped at index 0x2200, subindex 0x03 */
extern UNS8 Panel_output_Level_S_BC3;		/* Mapped at index 0x2200, subindex 0x04 */
extern UNS8 Panel_output_Level_S_BC4;		/* Mapped at index 0x2200, subindex 0x05 */
extern UNS8 Panel_output_Level_S_BC5;		/* Mapped at index 0x2200, subindex 0x06 */
extern UNS8 Panel_output_Level_S_BC6;		/* Mapped at index 0x2200, subindex 0x07 */
extern UNS8 Panel_output_Level_S_BC7;		/* Mapped at index 0x2200, subindex 0x08 */
extern UNS8 Panel_output_Level_S_BC8;		/* Mapped at index 0x2200, subindex 0x09 */
extern UNS8 Panel_output_Level_S_BC9;		/* Mapped at index 0x2200, subindex 0x0A */
extern UNS8 Panel_output_Level_S_BC10;		/* Mapped at index 0x2200, subindex 0x0B */
extern UNS8 Panel_output_Level_S_BC11;		/* Mapped at index 0x2200, subindex 0x0C */
////Unused Var
///extern UNS8 Panel_output_Level_S_BC12;		/* Mapped at index 0x2200, subindex 0x0D */
///extern UNS8 Panel_output_Level_S_BC13;		/* Mapped at index 0x2200, subindex 0x0E */
///extern UNS8 Panel_output_Level_S_BC14;		/* Mapped at index 0x2200, subindex 0x0F */
///extern UNS8 Panel_output_Other_S_LIB1;		/* Mapped at index 0x2201, subindex 0x01 */
///extern UNS8 Panel_output_Other_S_LIB2;		/* Mapped at index 0x2201, subindex 0x02 */
///extern UNS8 Panel_output_Other_S_LIB3;		/* Mapped at index 0x2201, subindex 0x03 */
///extern UNS8 Panel_output_Other_S_LIB4;		/* Mapped at index 0x2201, subindex 0x04 */
///Arrow and Buzz
extern UNS8 Arrows_FLM;		/* Mapped at index 0x2204, subindex 0x01 */
extern UNS8 Arrows_FLD;		/* Mapped at index 0x2204, subindex 0x02 */
extern UNS8 Arrows_SCROL;		/* Mapped at index 0x2204, subindex 0x03 */
extern UNS8 Sound_BUZ;		/* Mapped at index 0x2205, subindex 0x01 */
extern UNS8 Display_Mode_AFF_EN;		/* Mapped at index 0x2202, subindex 0x01 */
extern UNS8 Display_Mode_FCT_AFF;		/* Mapped at index 0x2202, subindex 0x02 */
//Extend Board Output
extern UNS8 Extension_output_S_EXT1;		/* Mapped at index 0x2203, subindex 0x01 */
extern UNS8 Extension_output_S_EXT2;		/* Mapped at index 0x2203, subindex 0x02 */
extern UNS8 Extension_output_S_EXT3;		/* Mapped at index 0x2203, subindex 0x03 */
extern UNS8 Extension_output_S_EXT4;		/* Mapped at index 0x2203, subindex 0x04 */
extern UNS8 Extension_output_S_EXT5;		/* Mapped at index 0x2203, subindex 0x05 */
extern UNS8 Extension_output_S_EXT6;		/* Mapped at index 0x2203, subindex 0x06 */
extern UNS8 Extension_output_S_EXT7;		/* Mapped at index 0x2203, subindex 0x07 */
extern UNS8 Extension_output_S_EXT8;		/* Mapped at index 0x2203, subindex 0x08 */
extern UNS8 Extension_output_S_EXT9;		/* Mapped at index 0x2203, subindex 0x09 */
extern UNS8 Extension_output_S_EXT10;		/* Mapped at index 0x2203, subindex 0x0A */
extern UNS8 Extension_output_S_EXT11;		/* Mapped at index 0x2203, subindex 0x0B */
extern UNS8 Extension_output_S_EXT12;		/* Mapped at index 0x2203, subindex 0x0C */
extern UNS8 Extension_output_S_EXT13;		/* Mapped at index 0x2203, subindex 0x0D */
extern UNS8 Extension_output_S_EXT14;		/* Mapped at index 0x2203, subindex 0x0E */
extern UNS8 Extension_output_S_EXT15;		/* Mapped at index 0x2203, subindex 0x0F */
extern UNS8 Extension_output_S_EXT16;		/* Mapped at index 0x2203, subindex 0x10 */
extern UNS8 Extension_output_S_EXT17;		/* Mapped at index 0x2203, subindex 0x11 */
extern UNS8 Extension_output_S_EXT18;		/* Mapped at index 0x2203, subindex 0x12 */
extern UNS8 Extension_output_S_EXT19;		/* Mapped at index 0x2203, subindex 0x13 */
extern UNS8 Extension_output_S_EXT20;		/* Mapped at index 0x2203, subindex 0x14 */
extern UNS8 Extension_output_S_EXT21;		/* Mapped at index 0x2203, subindex 0x15 */
extern UNS8 Extension_output_S_EXT22;		/* Mapped at index 0x2203, subindex 0x16 */
extern UNS8 Extension_output_S_EXT23;		/* Mapped at index 0x2203, subindex 0x17 */
extern UNS8 Extension_output_S_EXT24;		/* Mapped at index 0x2203, subindex 0x18 */
//Volume
extern UNS8 Sound_VOLUME_VOLUME_BIP;		/* Mapped at index 0x2205, subindex 0x02 */
extern UNS8 Sound_VOLUME_MUSIQUE;		/* Mapped at index 0x2205, subindex 0x04 */
///Unused Var
///extern UNS8 Sound_libre;		/* Mapped at index 0x2205, subindex 0x05 */
/***********************************RPDO1 - End***********************************/


/***********************************RPDO2 - Start***********************************/
extern UNS8 Level_text_Logo_NIV_ALPHA_1;		/* Mapped at index 0x2206, subindex 0x01 */
extern UNS8 Level_text_Logo_NIV_ALPHA_2;		/* Mapped at index 0x2206, subindex 0x02 */
extern UNS8 Level_text_Logo_NIV_ALPHA_3;		/* Mapped at index 0x2206, subindex 0x03 */
extern UNS8 Sound_NR_SON;		/* Mapped at index 0x2205, subindex 0x03 */
extern UNS8 Level_text_Logo_LOGO;		/* Mapped at index 0x2206, subindex 0x04 */
/***********************************RPDO2 - End***********************************/


/***********************************RPDO3 - Start***********************************/
extern UNS8 text_segmented_1_MSG1_LIGNE;		/* Mapped at index 0x220A, subindex 0x01 */
extern UNS8 text_segmented_1_MSG1_COLONNE;		/* Mapped at index 0x220A, subindex 0x02 */
extern UNS8 text_segmented_1_MSG1_CHAR1;		/* Mapped at index 0x220A, subindex 0x03 */
extern UNS8 text_segmented_1_MSG1_CHAR2;		/* Mapped at index 0x220A, subindex 0x04 */
extern UNS8 text_segmented_1_MSG1_CHAR3;		/* Mapped at index 0x220A, subindex 0x05 */
extern UNS8 text_segmented_1_MSG1_CHAR4;		/* Mapped at index 0x220A, subindex 0x06 */
extern UNS8 text_segmented_1_MSG1_CHAR5;		/* Mapped at index 0x220A, subindex 0x07 */
extern UNS8 text_segmented_1_MSG1_CHAR6;		/* Mapped at index 0x220A, subindex 0x08 */
/***********************************RPDO3 - End***********************************/

/***********************************RPDO4 - Start***********************************/
extern UNS8 texte_segmented_2_MSG2_LIGNE;		/* Mapped at index 0x220B, subindex 0x01 */
extern UNS8 texte_segmented_2_MSG2_COLONNE;		/* Mapped at index 0x220B, subindex 0x02 */
extern UNS8 texte_segmented_2_MSG2_CHAR1;		/* Mapped at index 0x220B, subindex 0x03 */
extern UNS8 texte_segmented_2_MSG2_CHAR2;		/* Mapped at index 0x220B, subindex 0x04 */
extern UNS8 texte_segmented_2_MSG2_CHAR3;		/* Mapped at index 0x220B, subindex 0x05 */
extern UNS8 texte_segmented_2_MSG2_CHAR4;		/* Mapped at index 0x220B, subindex 0x06 */
extern UNS8 texte_segmented_2_MSG2_CHAR5;		/* Mapped at index 0x220B, subindex 0x07 */
extern UNS8 texte_segmented_2_MSG2_CHAR6;		/* Mapped at index 0x220B, subindex 0x08 */
/***********************************RPDO4 - End***********************************/


/***********************************TPDO1 - Start***********************************/
//Onboard Button Input
extern UNS8 Panel_input_Level_E_BC0;		/* Mapped at index 0x2100, subindex 0x01 */
extern UNS8 Panel_input_Level_E_BC1;		/* Mapped at index 0x2100, subindex 0x02 */
extern UNS8 Panel_input_Level_E_BC2;		/* Mapped at index 0x2100, subindex 0x03 */
extern UNS8 Panel_input_Level_E_BC3;		/* Mapped at index 0x2100, subindex 0x04 */
extern UNS8 Panel_input_Level_E_BC4;		/* Mapped at index 0x2100, subindex 0x05 */
extern UNS8 Panel_input_Level_E_BC5;		/* Mapped at index 0x2100, subindex 0x06 */
extern UNS8 Panel_input_Level_E_BC6;		/* Mapped at index 0x2100, subindex 0x07 */
extern UNS8 Panel_input_Level_E_BC7;		/* Mapped at index 0x2100, subindex 0x08 */
extern UNS8 Panel_input_Level_E_BC8;		/* Mapped at index 0x2100, subindex 0x09 */
extern UNS8 Panel_input_Level_E_BC9;		/* Mapped at index 0x2100, subindex 0x0A */
extern UNS8 Panel_input_Level_E_BC10;		/* Mapped at index 0x2100, subindex 0x0B */
extern UNS8 Panel_input_Level_E_BC11;		/* Mapped at index 0x2100, subindex 0x0C */
///Unused var
///extern UNS8 Panel_input_Level_E_BC12;		/* Mapped at index 0x2100, subindex 0x0D */
///extern UNS8 Panel_input_Level_E_BC13;		/* Mapped at index 0x2100, subindex 0x0E */
///extern UNS8 Panel_input_Level_E_BC14;		/* Mapped at index 0x2100, subindex 0x0F */
///extern UNS8 Panel_input_Other_E_REOUA;		/* Mapped at index 0x2101, subindex 0x01 */
///extern UNS8 Panel_input_Other_E_LIB1;		/* Mapped at index 0x2101, subindex 0x02 */
///extern UNS8 Panel_input_Other_E_BFR;		/* Mapped at index 0x2101, subindex 0x03 */
///extern UNS8 Panel_input_Other_E_PCA;		/* Mapped at index 0x2101, subindex 0x04 */
///extern UNS8 Display_state_SUR;		/* Mapped at index 0x2102, subindex 0x01 */
///extern UNS8 Display_state_PARAM_AFF;		/* Mapped at index 0x2102, subindex 0x02 */
///3 Extend Board Var
extern UNS8 Display_state_EXT1;		/* Mapped at index 0x2102, subindex 0x03 */
extern UNS8 Display_state_EXT2;		/* Mapped at index 0x2102, subindex 0x04 */
extern UNS8 Display_state_EXT3;		/* Mapped at index 0x2102, subindex 0x05 */
///Unused var
///extern UNS8 Display_state_DETECT_ALIM = 0x1;		/* Mapped at index 0x2102, subindex 0x06 */
///extern UNS8 Display_state_PRESENCE_SD;		/* Mapped at index 0x2102, subindex 0x07 */
///extern UNS8 Display_state_libre;		/* Mapped at index 0x2102, subindex 0x08 */
//24 Extend Board Input Var
extern UNS8 Extension_input_E_EXT1;		/* Mapped at index 0x2103, subindex 0x01 */
extern UNS8 Extension_input_E_EXT2;		/* Mapped at index 0x2103, subindex 0x02 */
extern UNS8 Extension_input_E_EXT3;		/* Mapped at index 0x2103, subindex 0x03 */
extern UNS8 Extension_input_E_EXT4;		/* Mapped at index 0x2103, subindex 0x04 */
extern UNS8 Extension_input_E_EXT5;		/* Mapped at index 0x2103, subindex 0x05 */
extern UNS8 Extension_input_E_EXT6;		/* Mapped at index 0x2103, subindex 0x06 */
extern UNS8 Extension_input_E_EXT7;		/* Mapped at index 0x2103, subindex 0x07 */
extern UNS8 Extension_input_E_EXT8;		/* Mapped at index 0x2103, subindex 0x08 */
extern UNS8 Extension_input_E_EXT9;		/* Mapped at index 0x2103, subindex 0x09 */
extern UNS8 Extension_input_E_EXT10;		/* Mapped at index 0x2103, subindex 0x0A */
extern UNS8 Extension_input_E_EXT11;		/* Mapped at index 0x2103, subindex 0x0B */
extern UNS8 Extension_input_E_EXT12;		/* Mapped at index 0x2103, subindex 0x0C */
extern UNS8 Extension_input_E_EXT13;		/* Mapped at index 0x2103, subindex 0x0D */
extern UNS8 Extension_input_E_EXT14;		/* Mapped at index 0x2103, subindex 0x0E */
extern UNS8 Extension_input_E_EXT15;		/* Mapped at index 0x2103, subindex 0x0F */
extern UNS8 Extension_input_E_EXT16;		/* Mapped at index 0x2103, subindex 0x10 */
extern UNS8 Extension_input_E_EXT17;		/* Mapped at index 0x2103, subindex 0x11 */
extern UNS8 Extension_input_E_EXT18;		/* Mapped at index 0x2103, subindex 0x12 */
extern UNS8 Extension_input_E_EXT19;		/* Mapped at index 0x2103, subindex 0x13 */
extern UNS8 Extension_input_E_EXT20;		/* Mapped at index 0x2103, subindex 0x14 */
extern UNS8 Extension_input_E_EXT21;		/* Mapped at index 0x2103, subindex 0x15 */
extern UNS8 Extension_input_E_EXT22;		/* Mapped at index 0x2103, subindex 0x16 */
extern UNS8 Extension_input_E_EXT23;		/* Mapped at index 0x2103, subindex 0x17 */
extern UNS8 Extension_input_E_EXT24;		/* Mapped at index 0x2103, subindex 0x18 */
/***********************************TPDO1 - End***********************************/

#endif // DISPLAY_H
