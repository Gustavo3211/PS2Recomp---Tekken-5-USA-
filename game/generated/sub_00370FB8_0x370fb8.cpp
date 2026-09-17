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

// Function: sub_00370FB8
// Address: 0x370fb8 - 0x371008
void sub_00370FB8_0x370fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370FB8_0x370fb8");
#endif

    switch (ctx->pc) {
        case 0x370fdcu: goto label_370fdc;
        case 0x370ff4u: goto label_370ff4;
        default: break;
    }

    ctx->pc = 0x370fb8u;

    // 0x370fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370fbc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370fc4: 0x24507320  addiu       $s0, $v0, 0x7320
    ctx->pc = 0x370fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29472));
    // 0x370fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7320u));
    // 0x370fcc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370FCCu;
    {
        const bool branch_taken_0x370fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FCCu;
        // 0x370fd0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fcc) {
            ctx->pc = 0x370FF4u;
            goto label_370ff4;
        }
    }
    ctx->pc = 0x370FD4u;
    // 0x370fd4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x370FD4u;
    SET_GPR_U32(ctx, 31, 0x370FDCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x370FD4u, 0x370FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370FDCu;
label_370fdc:
    // 0x370fdc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370fe0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370fe4: 0x24a50c10  addiu       $a1, $a1, 0xC10
    ctx->pc = 0x370fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3088));
    // 0x370fe8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x370fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x370fec: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370FECu;
    SET_GPR_U32(ctx, 31, 0x370FF4u);
    ctx->pc = 0x370FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370FECu;
    // 0x370ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370FECu, 0x370FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370FF4u;
label_370ff4:
    // 0x370ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371000: 0x3e00008  jr          $ra
    ctx->pc = 0x371000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371000u;
        // 0x371004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371008u;
}
