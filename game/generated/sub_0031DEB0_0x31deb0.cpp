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

// Function: sub_0031DEB0
// Address: 0x31deb0 - 0x31def8
void sub_0031DEB0_0x31deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DEB0_0x31deb0");
#endif

    switch (ctx->pc) {
        case 0x31dec4u: goto label_31dec4;
        case 0x31dee4u: goto label_31dee4;
        default: break;
    }

    ctx->pc = 0x31deb0u;

    // 0x31deb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31deb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31deb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31debc: 0xc0c7932  jal         func_31E4C8
    ctx->pc = 0x31DEBCu;
    SET_GPR_U32(ctx, 31, 0x31DEC4u);
    ctx->pc = 0x31DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEBCu;
    // 0x31dec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E4C8u, 0x31DEBCu, 0x31DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEC4u;
label_31dec4:
    // 0x31dec4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31dec8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x31decc: 0x24631960  addiu       $v1, $v1, 0x1960
    ctx->pc = 0x31deccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x31ded0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x31ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x31ded4: 0x8f82ccdc  lw          $v0, -0x3324($gp)
    ctx->pc = 0x31ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954204)));
    // 0x31ded8: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x31ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    // 0x31dedc: 0xc0c7e5a  jal         func_31F968
    ctx->pc = 0x31DEDCu;
    SET_GPR_U32(ctx, 31, 0x31DEE4u);
    ctx->pc = 0x31DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEDCu;
    // 0x31dee0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F968u, 0x31DEDCu, 0x31DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEE4u;
label_31dee4:
    // 0x31dee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31deec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31deecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31def0: 0x80c7896  j           func_31E258
    ctx->pc = 0x31DEF0u;
    ctx->pc = 0x31DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEF0u;
    // 0x31def4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E258u;
    sub_0031E258_0x31e258(rdram, ctx, runtime); return;
    ctx->pc = 0x31DEF8u;
}
