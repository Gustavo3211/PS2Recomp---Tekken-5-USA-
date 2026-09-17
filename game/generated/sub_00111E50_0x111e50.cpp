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

// Function: sub_00111E50
// Address: 0x111e50 - 0x111ed0
void sub_00111E50_0x111e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111E50_0x111e50");
#endif

    switch (ctx->pc) {
        case 0x111e88u: goto label_111e88;
        case 0x111eacu: goto label_111eac;
        case 0x111ebcu: goto label_111ebc;
        default: break;
    }

    ctx->pc = 0x111e50u;

    // 0x111e50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x111e54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111e58: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x111e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x111e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111e64: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x111e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x111e68: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x111e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x111e6c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x111e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x111e70: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x111e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x111e74: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x111e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x111e78: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x111e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x111e7c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x111e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x111e80: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x111E80u;
    SET_GPR_U32(ctx, 31, 0x111E88u);
    ctx->pc = 0x111E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E80u;
    // 0x111e84: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x111E80u, 0x111E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E88u;
label_111e88:
    // 0x111e88: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x111e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x111e8c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x111e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x111e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e94: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x111e98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x111e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x111ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x111ea4: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111EA4u;
    SET_GPR_U32(ctx, 31, 0x111EACu);
    ctx->pc = 0x111EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA4u;
    // 0x111ea8: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111EA4u, 0x111EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EACu;
label_111eac:
    // 0x111eac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111EACu;
    {
        const bool branch_taken_0x111eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EACu;
        // 0x111eb0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111eac) {
            ctx->pc = 0x111EC0u;
            goto label_111ec0;
        }
    }
    ctx->pc = 0x111EB4u;
    // 0x111eb4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x111EB4u;
    SET_GPR_U32(ctx, 31, 0x111EBCu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x111EB4u, 0x111EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EBCu;
label_111ebc:
    // 0x111ebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111ec0:
    // 0x111ec0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x111ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111ec4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x111EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EC8u;
        // 0x111ecc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111ED0u;
}
