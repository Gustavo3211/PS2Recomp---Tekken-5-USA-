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

// Function: sub_002BC140
// Address: 0x2bc140 - 0x2bc198
void sub_002BC140_0x2bc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC140_0x2bc140");
#endif

    switch (ctx->pc) {
        case 0x2bc160u: goto label_2bc160;
        case 0x2bc178u: goto label_2bc178;
        default: break;
    }

    ctx->pc = 0x2bc140u;

    // 0x2bc140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bc148: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2bc14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc154: 0x8c820894  lw          $v0, 0x894($a0)
    ctx->pc = 0x2bc154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x2bc158: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x2bc158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bc15c: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2bc160:
    // 0x2bc160: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2bc160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2bc164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc168: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2bc168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2bc16c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2bc16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2bc170: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC170u;
    SET_GPR_U32(ctx, 31, 0x2BC178u);
    ctx->pc = 0x2BC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC170u;
    // 0x2bc174: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC170u, 0x2BC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC178u;
label_2bc178:
    // 0x2bc178: 0x5e20fff9  bgtzl       $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC178u;
    {
        const bool branch_taken_0x2bc178 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2bc178) {
            ctx->pc = 0x2BC17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC178u;
            // 0x2bc17c: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc160;
        }
    }
    ctx->pc = 0x2BC180u;
    // 0x2bc180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bc184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bc188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc18c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC18Cu;
        // 0x2bc190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC194u;
    // 0x2bc194: 0x0  nop
    ctx->pc = 0x2bc194u;
    // NOP
    ctx->pc = 0x2bc198u;
}
