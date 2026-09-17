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

// Function: sub_002E0090
// Address: 0x2e0090 - 0x2e00cc
void sub_002E0090_0x2e0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0090_0x2e0090");
#endif

    ctx->pc = 0x2e0090u;

    // 0x2e0090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e009c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e00a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e00a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e00a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e00a8: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x2e00a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2e00ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e00b0: 0x313500ff  andi        $s5, $t1, 0xFF
    ctx->pc = 0x2e00b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2e00b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e00b8: 0x315600ff  andi        $s6, $t2, 0xFF
    ctx->pc = 0x2e00b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2e00bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2e00c0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e00c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2e00c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2e00c8: 0x30fe00ff  andi        $fp, $a3, 0xFF
    ctx->pc = 0x2e00c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x2e00ccu;
}
