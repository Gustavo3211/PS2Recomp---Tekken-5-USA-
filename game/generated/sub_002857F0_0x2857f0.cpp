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

// Function: sub_002857F0
// Address: 0x2857f0 - 0x285828
void sub_002857F0_0x2857f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002857F0_0x2857f0");
#endif

    ctx->pc = 0x2857f0u;

    // 0x2857f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2857f4: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x2857f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x2857f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2857f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2857fc: 0x24c64520  addiu       $a2, $a2, 0x4520
    ctx->pc = 0x2857fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x285800: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x285800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285804: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x285808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28580c: 0x24c657a0  addiu       $a2, $a2, 0x57A0
    ctx->pc = 0x28580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22432));
    // 0x285810: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x285810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x285814: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x285814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x285818: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x285818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x28581c: 0x80a1666  j           func_285998
    ctx->pc = 0x28581Cu;
    ctx->pc = 0x285820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28581Cu;
    // 0x285820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285998u;
    sub_00285998_0x285998(rdram, ctx, runtime); return;
    ctx->pc = 0x285824u;
    // 0x285824: 0x0  nop
    ctx->pc = 0x285824u;
    // NOP
    ctx->pc = 0x285828u;
}
