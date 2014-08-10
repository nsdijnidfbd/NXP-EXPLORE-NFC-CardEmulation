/*
*         Copyright (c), NXP Semiconductors Gratkorn / Austria
*
*                     (C)NXP Semiconductors
*       All rights are reserved. Reproduction in whole or in part is 
*      prohibited without the written consent of the copyright owner.
*  NXP reserves the right to make changes without notice at any time.
* NXP makes no warranty, expressed, implied or statutory, including but
* not limited to any implied warranty of merchantability or fitness for any
*particular purpose, or that the use will not infringe any third party patent,
* copyright or trademark. NXP must not be liable for any loss or damage
*                          arising from its use.
*/

/** \file
* PN512 specific HAL-Component of Reader Library Framework.
* $Author: santosh.d.araballi $
* $Revision: 1.3 $
* $Date: Fri Apr 15 09:27:50 2011 $
*
* History:
*  CHu: Generated 19. May 2009
*
*/

#ifndef PHHALHW_PN512_H
#define PHHALHW_PN512_H

#include <ph_Status.h>
#include <phhalHw.h>

#define PHHAL_HW_PN512_FIFOSIZE         64U         /**< Size of RC internal FiFo buffer */
#define PHHAL_HW_PN512_DEFAULT_TIMEOUT  150U        /**< Default timeout in microseconds */

phStatus_t phhalHw_Pn512_Exchange(
                                  phhalHw_Pn512_DataParams_t * pDataParams,
                                  uint16_t wOption,
                                  uint8_t * pTxBuffer,
                                  uint16_t wTxLength,
                                  uint8_t ** ppRxBuffer,
                                  uint16_t * pRxLength
                                  );

phStatus_t phhalHw_Pn512_WriteRegister(
                                       phhalHw_Pn512_DataParams_t * pDataParams,
                                       uint8_t bAddress,
                                       uint8_t bValue
                                       );

phStatus_t phhalHw_Pn512_ReadRegister(
                                      phhalHw_Pn512_DataParams_t * pDataParams,
                                      uint8_t bAddress,
                                      uint8_t * pValue
                                      );

phStatus_t phhalHw_Pn512_ApplyProtocolSettings(
    phhalHw_Pn512_DataParams_t * pDataParams,
    uint8_t bCardType
    );

phStatus_t phhalHw_Pn512_MfcAuthenticateKeyNo(
    phhalHw_Pn512_DataParams_t * pDataParams,
    uint8_t bBlockNo,
    uint8_t bKeyType,
    uint16_t wKeyNo,
    uint16_t wKeyVersion,
    uint8_t * pUid
    );

phStatus_t phhalHw_Pn512_MfcAuthenticate(
    phhalHw_Pn512_DataParams_t * pDataParams,
    uint8_t bBlockNo,
    uint8_t bKeyType,
    uint8_t * pKey,
    uint8_t * pUid
    );

phStatus_t phhalHw_Pn512_SetConfig(
                                   phhalHw_Pn512_DataParams_t * pDataParams,
                                   uint16_t wConfig,
                                   uint16_t wValue
                                   );

phStatus_t phhalHw_Pn512_GetConfig(
                                   phhalHw_Pn512_DataParams_t * pDataParams,
                                   uint16_t wConfig,
                                   uint16_t * pValue
                                   );

phStatus_t phhalHw_Pn512_FieldOn(
                                 phhalHw_Pn512_DataParams_t * pDataParams
                                 );

phStatus_t phhalHw_Pn512_FieldOff(
                                  phhalHw_Pn512_DataParams_t * pDataParams
                                  );

phStatus_t phhalHw_Pn512_FieldReset(
                                    phhalHw_Pn512_DataParams_t * pDataParams
                                    );

phStatus_t phhalHw_Pn512_Wait(
                              phhalHw_Pn512_DataParams_t * pDataParams,
                              uint8_t bUnit,
                              uint16_t wTimeout
                              );

phStatus_t phhalHw_Pn512_Listen(
							    phhalHw_Pn512_DataParams_t * pDataParams,
		                        uint8_t ** ppRxBuffer,
		                        uint16_t * pRxLength,
                                uint8_t bTimeoutUnit,
                                uint16_t wTimeout
							   );

phStatus_t phhalHw_Pn512_SetListenParameters(
											phhalHw_Pn512_DataParams_t * pDataParams,
											uint8_t * pSensRes,
											uint8_t * pNfcId1,
											uint8_t  bSelRes,
											uint8_t * pPollRes,
											uint8_t  bNfcId3
											);

phStatus_t phhalHw_Pn512_SetMinFDT(
                                  phhalHw_Pn512_DataParams_t * pDataParams,
                                  uint16_t wValue
                                  );
                                  
#endif /* PHHALHW_PN512_H */
