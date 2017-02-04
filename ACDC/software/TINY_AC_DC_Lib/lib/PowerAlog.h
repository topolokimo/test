#ifndef POWERALOG_H
#define POWERALOG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
 * DEFINES
 */

#define POWER_CONTROL_ZDET			(0x01 << 0)
#define POWER_CONTROL_TIMER			(0x01 << 1)

#define SYS_UART_REVT				(0x0001 << 0)
#define SYS_UART_TEVT				(0x0001 << 1)
#define SYS_CP0_POS_EVT				(0x0001 << 2)
#define SYS_CP0_NEG_EVT				(0x0001 << 3)
#define SYS_CP1_POS_EVT				(0x0001 << 4)
#define SYS_CP1_NEG_EVT				(0x0001 << 5)
#define SYS_CP2_POS_EVT				(0x0001 << 6)
#define SYS_CP2_NEG_EVT				(0x0001 << 7)
#define SYS_TICK_EVT				(0x0001 << 12)

#define UART_SET_REVENT()			(g_ui16Eventflag |= SYS_UART_REVT)
#define UART_CLR_REVENT()			(g_ui16Eventflag &= ~SYS_UART_REVT)
#define UART_REVENT()				(g_ui16Eventflag & SYS_UART_REVT)

#define UART_SET_TEVENT()			(g_ui16Eventflag |= SYS_UART_TEVT)
#define UART_CLR_TEVENT()			(g_ui16Eventflag &= ~SYS_UART_TEVT)
#define UART_TEVENT()				(g_ui16Eventflag & SYS_UART_TEVT)

#define CP0_SET_PEVENT()			(g_ui16Eventflag |= SYS_CP0_POS_EVT)
#define CP0_CLR_PEVENT()			(g_ui16Eventflag &= ~SYS_CP0_POS_EVT)
#define CP0_PEVENT()				(g_ui16Eventflag & SYS_CP0_POS_EVT)

#define CP0_SET_NEVENT()			(g_ui16Eventflag |= SYS_CP0_NEG_EVT)
#define CP0_CLR_NEVENT()			(g_ui16Eventflag &= ~SYS_CP0_NEG_EVT)
#define CP0_NEVENT()				(g_ui16Eventflag & SYS_CP0_NEG_EVT)

#define CP1_SET_PEVENT()			(g_ui16Eventflag |= SYS_CP1_POS_EVT)
#define CP1_CLR_PEVENT()			(g_ui16Eventflag &= ~SYS_CP1_POS_EVT)
#define CP1_PEVENT()				(g_ui16Eventflag & SYS_CP1_POS_EVT)

#define CP1_SET_NEVENT()			(g_ui16Eventflag |= SYS_CP1_NEG_EVT)
#define CP1_CLR_NEVENT()			(g_ui16Eventflag &= ~SYS_CP1_NEG_EVT)
#define CP1_NEVENT()				(g_ui16Eventflag & SYS_CP1_NEG_EVT)

#define TICK_SET_EVENT()			(g_ui16Eventflag |= SYS_TICK_EVT)
#define TICK_CLR_EVENT()			(g_ui16Eventflag &= ~SYS_TICK_EVT)
#define TICK_EVENT()				(g_ui16Eventflag & SYS_TICK_EVT)

#define ALL_EVENT_CLR()				(g_ui16Eventflag = 0)

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
 * FUNCTIONS
 */
extern inline void PowerProtInit(void);
extern inline void PowerAlogInit(uint8_t ui8SysClock);
extern inline void SetPowerTarget(uint16_t ui16Cmd);
extern inline void SetPowerMax(uint16_t ui16Cmd);
extern inline void SetPowerMin(uint16_t ui16Cmd);
extern inline void SetPowerTolerance(uint16_t ui16Cmd);
extern inline void SetWDT_Timeout(uint16_t ui16Cmd);
extern inline void SetPowerProcTime(uint16_t ui16Cmd);
extern inline void SetPowerAlogMode(uint16_t ui16Cmd);
extern inline void SetPowerAlogSpeed(uint16_t ui16Cmd);
extern inline void EnControlAlog(void);
extern inline void DisControlAlog(void);


/////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif


#endif /* POWERALOG_H */


