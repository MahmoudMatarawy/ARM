

#ifndef     __COMMON_H__
#define     __COMMON_H__

#include "stdint.h"


#define SUCCESS					0
#define ERROR						-1
#define INVALID_INPUT		-2
#define FALSE						0
#define TRUE						1

#define GET_BIT_STATUS(reg,bit_indx)				(0UL != ((reg) & (1UL << bit_indx)))
#define SET_BIT(reg,bit_indx)								(reg |= 1<< bit_indx)
#define CLR_BIT(reg,bit_indx)								(reg &= ~(1<< bit_indx))



#define NULL                            ((void*)(0))

#define CALC_ARR_LENGTH(ARR)                (sizeof(ARR) / sizeof(ARR[0]))

#define STATUS_CODE_BASE_OFFSET             (100)
#define CALC_STATUS_CODE(BASE, OFFSET)      (BASE + OFFSET)
#define FIND_STATUS_CODE_BASE(INDEX)        (INDEX * STATUS_CODE_BASE_OFFSET)


typedef unsigned char				boolean ;
typedef signed      char    int8_t_;   /*(_) is appended to the typename in order to avoid conflicts with the windows types*/
typedef unsigned    char    uint8_t_;   /*(_) is appended to the typename in order to avoid conflicts with the windows types*/
typedef signed      short   int16_t_;  /*(_) is appended to the typename in order to avoid conflicts with the windows types*/
typedef unsigned    short   uint16_t_;  /*(_) is appended to the typename in order to avoid conflicts with the windows types*/
typedef signed      int     int32_t_;  /*(_) is appended to the typename in order to avoid conflicts with the windows types*/
typedef unsigned    int     uint32_t_;  /*(_) is appended to the typename in order to avoid conflicts with the windows types*/

/*MR_TODO: Add the Float and Double Here*/

typedef enum
{
    SYSTEM_STATUS_CODE_BASE                 = FIND_STATUS_CODE_BASE(0)                                                  ,
    STATUS_CODE_SUCCESS                     = SYSTEM_STATUS_CODE_BASE                                                   ,
    STATUS_CODE_INVALID_ARGUMENTS                                                                                       ,
    STATUS_CODE_INVALID_ADDRESS                                                                                         ,
    STATUS_CODE_INVALID_ID                                                                                              ,
    STATUS_CODE_INVALID_STATE                                                                                           ,
    STATUS_CODE_INVALID_MODE                                                                                            ,
    STATUS_CODE_RESOURCE_IN_USE                                                                                         ,
    STATUS_CODE_INVALID_SIZE                                                                                            ,
    STATUS_CODE_TOTAL                                                                                                   ,

    TMU_STATUS_CODE_BASE                    = FIND_STATUS_CODE_BASE(1)                                                  ,
    TMU_STATUS_SUCCESS                      = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_SUCCESS)               ,
    TMU_STATUS_INVALID_TIMER_ID             = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_INVALID_ID)            ,
    TMU_STATUS_INVALID_OPERATING_MODE       = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_INVALID_MODE)          ,
    TMU_STATUS_INVALID_CALLBACK             = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_INVALID_ADDRESS)       ,
    TMU_STATUS_TIMER_IN_USE                 = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_RESOURCE_IN_USE)       ,
    TMU_STATUS_INVALID_STATE                = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_INVALID_STATE)         ,
    TMU_STATUS_INVALID_ARGUMENTS            = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_INVALID_ARGUMENTS)     ,
    TMU_STATUS_TOTAL                        = CALC_STATUS_CODE(TMU_STATUS_CODE_BASE, STATUS_CODE_TOTAL)                 ,

    BCM_STATUS_CODE_BASE                    = FIND_STATUS_CODE_BASE(2)                                                  ,
    BCM_STATUS_SUCCESS                      = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_SUCCESS)               ,
    BCM_STATUS_INVALID_MEDIUM_ID            = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_INVALID_ID)            ,
    BCM_STATUS_INVALID_CALLBACK             = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_INVALID_ADDRESS)       ,
    BCM_STATUS_MEDIUM_IN_USE                = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_RESOURCE_IN_USE)       ,
    BCM_STATUS_INVALID_STATE                = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_INVALID_STATE)         ,
    BCM_STATUS_INVALID_ARGUMENTS            = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_INVALID_ARGUMENTS)     ,
    BCM_STATUS_INVALID_SIZE                 = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_INVALID_SIZE)          ,
    BCM_STATUS_TOTAL                        = CALC_STATUS_CODE(BCM_STATUS_CODE_BASE, STATUS_CODE_TOTAL)                 ,

    SOS_STATUS_CODE_BASE                    = FIND_STATUS_CODE_BASE(3)                                                  ,
    SOS_STATUS_SUCCESS                      = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_SUCCESS)               ,
    SOS_STATUS_INVALID_TASK_ID              = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_INVALID_ID)            ,
    SOS_STATUS_INVALID_TASK_CBK             = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_INVALID_ADDRESS)       ,
    SOS_STATUS_TASK_IS_RUNNING              = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_RESOURCE_IN_USE)       ,
    SOS_STATUS_INVALID_STATE                = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_INVALID_STATE)         ,
    SOS_STATUS_INVALID_ARGUMENTS            = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_INVALID_ARGUMENTS)     ,
    SOS_STATUS_INVALID_PRIORITY             = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_INVALID_SIZE)          ,
    SOS_STATUS_TOTAL                        = CALC_STATUS_CODE(SOS_STATUS_CODE_BASE, STATUS_CODE_TOTAL)                 ,   

}enu_system_status_code_t;


#endif      /*__COMMON_H__*/
