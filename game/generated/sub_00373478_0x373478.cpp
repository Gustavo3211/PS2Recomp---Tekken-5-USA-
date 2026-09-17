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

// Function: sub_00373478
// Address: 0x373478 - 0x3734c8
void sub_00373478_0x373478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373478_0x373478");
#endif

    switch (ctx->pc) {
        case 0x37349cu: goto label_37349c;
        case 0x3734b4u: goto label_3734b4;
        default: break;
    }

    ctx->pc = 0x373478u;

    // 0x373478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37347c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x373480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x373484: 0x24507740  addiu       $s0, $v0, 0x7740
    ctx->pc = 0x373484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30528));
    // 0x373488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x373488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7740u));
    // 0x37348c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37348Cu;
    {
        const bool branch_taken_0x37348c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37348Cu;
        // 0x373490: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37348c) {
            ctx->pc = 0x3734B4u;
            goto label_3734b4;
        }
    }
    ctx->pc = 0x373494u;
    // 0x373494: 0xc0dcc20  jal         func_373080
    ctx->pc = 0x373494u;
    SET_GPR_U32(ctx, 31, 0x37349Cu);
    ctx->pc = 0x373080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373080u, 0x373494u, 0x37349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37349Cu;
label_37349c:
    // 0x37349c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37349cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3734a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3734a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3734a4: 0x24a52448  addiu       $a1, $a1, 0x2448
    ctx->pc = 0x3734a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9288));
    // 0x3734a8: 0x24c67700  addiu       $a2, $a2, 0x7700
    ctx->pc = 0x3734a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30464));
    // 0x3734ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3734ACu;
    SET_GPR_U32(ctx, 31, 0x3734B4u);
    ctx->pc = 0x3734B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734ACu;
    // 0x3734b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3734ACu, 0x3734B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734B4u;
label_3734b4:
    // 0x3734b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3734b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3734b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3734bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3734bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3734c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3734C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3734C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734C0u;
        // 0x3734c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3734C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3734C8u;
}
