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

// Function: sub_0036A700
// Address: 0x36a700 - 0x36a750
void sub_0036A700_0x36a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A700_0x36a700");
#endif

    switch (ctx->pc) {
        case 0x36a724u: goto label_36a724;
        case 0x36a738u: goto label_36a738;
        default: break;
    }

    ctx->pc = 0x36a700u;

    // 0x36a700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a704: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a70c: 0x24506ce8  addiu       $s0, $v0, 0x6CE8
    ctx->pc = 0x36a70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
    // 0x36a710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CE8u));
    // 0x36a714: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A714u;
    {
        const bool branch_taken_0x36a714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A714u;
        // 0x36a718: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a714) {
            ctx->pc = 0x36A738u;
            goto label_36a738;
        }
    }
    ctx->pc = 0x36A71Cu;
    // 0x36a71c: 0xc0da950  jal         func_36A540
    ctx->pc = 0x36A71Cu;
    SET_GPR_U32(ctx, 31, 0x36A724u);
    ctx->pc = 0x36A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A540u, 0x36A71Cu, 0x36A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A724u;
label_36a724:
    // 0x36a724: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a728: 0x24a52768  addiu       $a1, $a1, 0x2768
    ctx->pc = 0x36a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10088));
    // 0x36a72c: 0x2786cc70  addiu       $a2, $gp, -0x3390
    ctx->pc = 0x36a72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954096));
    // 0x36a730: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A730u;
    SET_GPR_U32(ctx, 31, 0x36A738u);
    ctx->pc = 0x36A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A730u;
    // 0x36a734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A730u, 0x36A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A738u;
label_36a738:
    // 0x36a738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a744: 0x3e00008  jr          $ra
    ctx->pc = 0x36A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A744u;
        // 0x36a748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A74Cu;
    // 0x36a74c: 0x0  nop
    ctx->pc = 0x36a74cu;
    // NOP
    ctx->pc = 0x36a750u;
}
