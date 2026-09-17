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

// Function: sub_0048B3D0
// Address: 0x48b3d0 - 0x48b3e8
void sub_0048B3D0_0x48b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B3D0_0x48b3d0");
#endif

    ctx->pc = 0x48b3d0u;

    // 0x48b3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b3d4: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x48b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x48b3d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b3dc: 0x812413e  j           func_4904F8
    ctx->pc = 0x48B3DCu;
    ctx->pc = 0x48B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B3DCu;
    // 0x48b3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x48B3E4u;
    // 0x48b3e4: 0x0  nop
    ctx->pc = 0x48b3e4u;
    // NOP
    ctx->pc = 0x48b3e8u;
}
