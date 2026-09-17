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

// Function: sub_00111ED0
// Address: 0x111ed0 - 0x111f50
void sub_00111ED0_0x111ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111ED0_0x111ed0");
#endif

    switch (ctx->pc) {
        case 0x111f08u: goto label_111f08;
        case 0x111f2cu: goto label_111f2c;
        case 0x111f3cu: goto label_111f3c;
        default: break;
    }

    ctx->pc = 0x111ed0u;

    // 0x111ed0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x111ed4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111ed8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x111ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x111edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111ee4: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x111ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x111ee8: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x111ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x111eec: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x111eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x111ef0: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x111ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x111ef4: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x111ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x111ef8: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x111ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x111efc: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x111efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x111f00: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x111F00u;
    SET_GPR_U32(ctx, 31, 0x111F08u);
    ctx->pc = 0x111F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F00u;
    // 0x111f04: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x111F00u, 0x111F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F08u;
label_111f08:
    // 0x111f08: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x111f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x111f0c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x111f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x111f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f14: 0x24841ce8  addiu       $a0, $a0, 0x1CE8
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7400));
    // 0x111f18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x111f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f20: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x111f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x111f24: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x111F24u;
    SET_GPR_U32(ctx, 31, 0x111F2Cu);
    ctx->pc = 0x111F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F24u;
    // 0x111f28: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x111F24u, 0x111F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F2Cu;
label_111f2c:
    // 0x111f2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111F2Cu;
    {
        const bool branch_taken_0x111f2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F2Cu;
        // 0x111f30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f2c) {
            ctx->pc = 0x111F40u;
            goto label_111f40;
        }
    }
    ctx->pc = 0x111F34u;
    // 0x111f34: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x111F34u;
    SET_GPR_U32(ctx, 31, 0x111F3Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x111F34u, 0x111F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F3Cu;
label_111f3c:
    // 0x111f3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111f40:
    // 0x111f40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x111f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f48: 0x3e00008  jr          $ra
    ctx->pc = 0x111F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F48u;
        // 0x111f4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F50u;
}
