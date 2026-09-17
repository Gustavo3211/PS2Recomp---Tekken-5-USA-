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

// Function: sub_001301D0
// Address: 0x1301d0 - 0x130230
void sub_001301D0_0x1301d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001301D0_0x1301d0");
#endif

    switch (ctx->pc) {
        case 0x1301f4u: goto label_1301f4;
        case 0x13020cu: goto label_13020c;
        default: break;
    }

    ctx->pc = 0x1301d0u;

    // 0x1301d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1301d4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1301d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1301d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1301dc: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x1301dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1301e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1301e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0090u));
    // 0x1301e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1301E4u;
    {
        const bool branch_taken_0x1301e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1301E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301E4u;
        // 0x1301e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301e4) {
            ctx->pc = 0x13020Cu;
            goto label_13020c;
        }
    }
    ctx->pc = 0x1301ECu;
    // 0x1301ec: 0xc04c2f8  jal         func_130BE0
    ctx->pc = 0x1301ECu;
    SET_GPR_U32(ctx, 31, 0x1301F4u);
    ctx->pc = 0x130BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BE0u, 0x1301ECu, 0x1301F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301F4u;
label_1301f4:
    // 0x1301f4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1301f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1301f8: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1301f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1301fc: 0x24a5f300  addiu       $a1, $a1, -0xD00
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    // 0x130200: 0x24c65570  addiu       $a2, $a2, 0x5570
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21872));
    // 0x130204: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130204u;
    SET_GPR_U32(ctx, 31, 0x13020Cu);
    ctx->pc = 0x130208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130204u;
    // 0x130208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130204u, 0x13020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13020Cu;
label_13020c:
    // 0x13020c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13020cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130218: 0x3e00008  jr          $ra
    ctx->pc = 0x130218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130218u;
        // 0x13021c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130220u;
    // 0x130220: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x130220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x130224: 0x24634c48  addiu       $v1, $v1, 0x4C48
    ctx->pc = 0x130224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19528));
    // 0x130228: 0x3e00008  jr          $ra
    ctx->pc = 0x130228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130228u;
        // 0x13022c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130230u;
}
