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

// Function: sub_0023FDB8
// Address: 0x23fdb8 - 0x23fdf0
void sub_0023FDB8_0x23fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FDB8_0x23fdb8");
#endif

    switch (ctx->pc) {
        case 0x23fdd4u: goto label_23fdd4;
        default: break;
    }

    ctx->pc = 0x23fdb8u;

    // 0x23fdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fdbc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23fdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fdc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23fdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fdcc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x23FDCCu;
    SET_GPR_U32(ctx, 31, 0x23FDD4u);
    ctx->pc = 0x23FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FDCCu;
    // 0x23fdd0: 0x2445b700  addiu       $a1, $v0, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x23FDCCu, 0x23FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDD4u;
label_23fdd4:
    // 0x23fdd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fdd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fde0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fde4: 0x808fcde  j           func_23F378
    ctx->pc = 0x23FDE4u;
    ctx->pc = 0x23FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FDE4u;
    // 0x23fde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F378u;
    sub_0023F378_0x23f378(rdram, ctx, runtime); return;
    ctx->pc = 0x23FDECu;
    // 0x23fdec: 0x0  nop
    ctx->pc = 0x23fdecu;
    // NOP
    ctx->pc = 0x23fdf0u;
}
