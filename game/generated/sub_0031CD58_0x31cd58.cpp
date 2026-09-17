#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031CD58
// Address: 0x31cd58 - 0x31cde8
void sub_0031CD58_0x31cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CD58_0x31cd58");
#endif

    ctx->pc = 0x31cd58u;

    // 0x31cd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31cd5c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x31cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x31cd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cd64: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x31cd64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x31cd68: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x31cd68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd6c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x31cd6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd70: 0x94ea0006  lhu         $t2, 0x6($a3)
    ctx->pc = 0x31cd70u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x31cd74: 0xa5182  srl         $t2, $t2, 6
    ctx->pc = 0x31cd74u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x31cd78: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x31cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x31cd7c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31cd80: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x31cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31cd84: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x31cd84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x31cd88: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x31cd88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x31cd8c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x31cd8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31cd90: 0x71094b89  pcpyld      $t1, $t0, $t1
    ctx->pc = 0x31cd90u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x31cd94: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x31cd94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x31cd98: 0x35438000  ori         $v1, $t2, 0x8000
    ctx->pc = 0x31cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x31cd9c: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x31cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x31cda0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x31cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x31cda4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31cda8: 0x24025353  addiu       $v0, $zero, 0x5353
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x31cdac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31cdb0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x31cdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31cdb4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x31cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x31cdb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31cdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdbc: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x31cdc0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31cdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cdc8: 0x94e90008  lhu         $t1, 0x8($a3)
    ctx->pc = 0x31cdc8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x31cdcc: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x31cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x31cdd0: 0x95870008  lhu         $a3, 0x8($t4)
    ctx->pc = 0x31cdd0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x31cdd4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x31cdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x31cdd8: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x31cdd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x31cddc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x31cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31cde0: 0x80c737a  j           func_31CDE8
    ctx->pc = 0x31CDE0u;
    ctx->pc = 0x31CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDE0u;
    // 0x31cde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDE8u;
    sub_0031CDE8_0x31cde8(rdram, ctx, runtime); return;
    ctx->pc = 0x31CDE8u;
}
