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

// Function: sub_00285920
// Address: 0x285920 - 0x285968
void sub_00285920_0x285920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285920_0x285920");
#endif

    ctx->pc = 0x285920u;

    // 0x285920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285924: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x285924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28592c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x28592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x285930: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x285930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x285934: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x285934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x285938: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x285938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28593c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x28593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x285940: 0x8c43f4f4  lw          $v1, -0xB0C($v0)
    ctx->pc = 0x285940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4F4u));
    // 0x285944: 0x24c64520  addiu       $a2, $a2, 0x4520
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x285948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28594c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x28594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x285950: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x285950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285954: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x285954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x285958: 0x102280b  movn        $a1, $t0, $v0
    ctx->pc = 0x285958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x28595c: 0xace50050  sw          $a1, 0x50($a3)
    ctx->pc = 0x28595cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 5));
    // 0x285960: 0x80a1666  j           func_285998
    ctx->pc = 0x285960u;
    ctx->pc = 0x285964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285960u;
    // 0x285964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285998u;
    sub_00285998_0x285998(rdram, ctx, runtime); return;
    ctx->pc = 0x285968u;
}
