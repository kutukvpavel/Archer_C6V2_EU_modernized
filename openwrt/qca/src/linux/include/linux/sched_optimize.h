/*  Copyright(c) 2009-2018 Shenzhen TP-LINK Technologies Co.Ltd.
 *
 * file		sched_optimize.h
 * brief		Monitor the wait time of process for scheduling.
 * details	
 *
 * author	Wang Hao
 * version	
 * date		03May18
 *
 * history 	\arg	
 */

#ifndef SCHED_OPTIMIZE_H
#define SCHED_OPTIMIZE_H

#include <linux/timer.h>
#include <linux/times.h>
#include <linux/sysctl.h>
#include <linux/syscalls.h>
#include <linux/sched.h>
#include <linux/poll.h>
#include <linux/netdevice.h>
#include <linux/inetdevice.h>
#include <linux/module.h>



/**************************************************************************************************/
/* 										  DEFINES											   */
/**************************************************************************************************/

/**************************************************************************************************/
/* 										  TYPES 											   */
/**************************************************************************************************/

/**************************************************************************************************/
/* 										  VARIABLES 										   */
/**************************************************************************************************/
extern unsigned long g_softirqUsage;
extern unsigned char forceDropFlag;
extern struct net_device *br_dev;
extern uint32_t localIpAddr;

/**************************************************************************************************/
/* 										  FUNCTIONS									   */
/**************************************************************************************************/
uint8_t isSoftirqBusy();
uint8_t isTaskWait();

extern void stopWaitTaskTimer(struct task_struct *process, uint8_t debug);
extern void checkWaitTime(struct task_struct *process);
extern void filterWaitTask(struct task_struct *process);
extern void cleanExitWaitTask(struct task_struct *process);
extern void checkTaskInWaitQueue(wait_queue_head_t *queue);

#endif
