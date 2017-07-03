/* 
 * File:   nogc.h
 * Author: underscore
 *
 * Created on December 16, 2015, 11:33 PM
 */

#ifndef NOGC_H
#define	NOGC_H

#define DEBUG_OBJ_ALLOC 0
#define DEBUG_LARGE_OBJ_ALLOC 0
#define DEBUG_TLAB_ALLOC 0
#define DEBUG_ANNO_ALLOC 0
#define DEBUG_C2_ALLOC 0
#define DEBUG_ASM_ALLOC 0
#define DEBUG_NEW_GEN 1
#define DEBUG_COLLECT_GEN 1
#define DEBUG_ALLOC_REGION 0
#define DEBUG_MINOR_CC 0
#define DEBUG_PRINT_REGIONS 0
#define DEBUG_SLOWPATH_C2 0
#define DEBUG_SLOWPATH_INTR 0
#define DEBUG_REM_SET 0
#define DEBUG_SURVIVORS 0
#define DEBUG_SEND_FREGIONS 0

#define ASM_ANNOTATIONS 0

// TODO - if this flag is on, using Test2 throws a segfault (use run-gdb).
#define NG2C_PROF_BOT_UPDATES 0
#define FORCE_NG2C_HR_VERIFY 0

#define DUMP_IDENTITY 0
#define DUMP_IDENTITY_DEBUG 0
#endif	/* NOGC_H */

