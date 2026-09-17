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

// Function: sub_00369FA0
// Address: 0x369fa0 - 0x369ff0
void sub_00369FA0_0x369fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369FA0_0x369fa0");
#endif

    switch (ctx->pc) {
        case 0x369fc4u: goto label_369fc4;
        case 0x369fdcu: goto label_369fdc;
        default: break;
    }

    ctx->pc = 0x369fa0u;

    // 0x369fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369fa4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369fac: 0x24506c78  addiu       $s0, $v0, 0x6C78
    ctx->pc = 0x369facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27768));
    // 0x369fb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C78u));
    // 0x369fb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369FB4u;
    {
        const bool branch_taken_0x369fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FB4u;
        // 0x369fb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369fb4) {
            ctx->pc = 0x369FDCu;
            goto label_369fdc;
        }
    }
    ctx->pc = 0x369FBCu;
    // 0x369fbc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x369FBCu;
    SET_GPR_U32(ctx, 31, 0x369FC4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x369FBCu, 0x369FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FC4u;
label_369fc4:
    // 0x369fc4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x369fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x369fc8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x369fcc: 0x24a5ae08  addiu       $a1, $a1, -0x51F8
    ctx->pc = 0x369fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946312));
    // 0x369fd0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x369fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x369fd4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369FD4u;
    SET_GPR_U32(ctx, 31, 0x369FDCu);
    ctx->pc = 0x369FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369FD4u;
    // 0x369fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369FD4u, 0x369FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369FDCu;
label_369fdc:
    // 0x369fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369fe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x369FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FE8u;
        // 0x369fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369FF0u;
}
