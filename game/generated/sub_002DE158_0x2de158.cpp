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

// Function: sub_002DE158
// Address: 0x2de158 - 0x2de1c0
void sub_002DE158_0x2de158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE158_0x2de158");
#endif

    switch (ctx->pc) {
        case 0x2de184u: goto label_2de184;
        case 0x2de18cu: goto label_2de18c;
        case 0x2de194u: goto label_2de194;
        case 0x2de19cu: goto label_2de19c;
        case 0x2de1a4u: goto label_2de1a4;
        case 0x2de1acu: goto label_2de1ac;
        default: break;
    }

    ctx->pc = 0x2de158u;

    // 0x2de158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de164: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2de168: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2de168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2de16c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE16Cu;
    {
        const bool branch_taken_0x2de16c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE16Cu;
        // 0x2de170: 0x260300c4  addiu       $v1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de16c) {
            ctx->pc = 0x2DE17Cu;
            goto label_2de17c;
        }
    }
    ctx->pc = 0x2DE174u;
    // 0x2de174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de178: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2de178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2de17c:
    // 0x2de17c: 0xc0b7a78  jal         func_2DE9E0
    ctx->pc = 0x2DE17Cu;
    SET_GPR_U32(ctx, 31, 0x2DE184u);
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x2DE17Cu, 0x2DE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE184u;
label_2de184:
    // 0x2de184: 0xc0b7634  jal         func_2DD8D0
    ctx->pc = 0x2DE184u;
    SET_GPR_U32(ctx, 31, 0x2DE18Cu);
    ctx->pc = 0x2DE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE184u;
    // 0x2de188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8D0u, 0x2DE184u, 0x2DE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE18Cu;
label_2de18c:
    // 0x2de18c: 0xc0b77f0  jal         func_2DDFC0
    ctx->pc = 0x2DE18Cu;
    SET_GPR_U32(ctx, 31, 0x2DE194u);
    ctx->pc = 0x2DE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE18Cu;
    // 0x2de190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDFC0u, 0x2DE18Cu, 0x2DE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE194u;
label_2de194:
    // 0x2de194: 0xc0b7816  jal         func_2DE058
    ctx->pc = 0x2DE194u;
    SET_GPR_U32(ctx, 31, 0x2DE19Cu);
    ctx->pc = 0x2DE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE194u;
    // 0x2de198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE058u, 0x2DE194u, 0x2DE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE19Cu;
label_2de19c:
    // 0x2de19c: 0xc0b77a8  jal         func_2DDEA0
    ctx->pc = 0x2DE19Cu;
    SET_GPR_U32(ctx, 31, 0x2DE1A4u);
    ctx->pc = 0x2DE1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE19Cu;
    // 0x2de1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA0u, 0x2DE19Cu, 0x2DE1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1A4u;
label_2de1a4:
    // 0x2de1a4: 0xc0b77aa  jal         func_2DDEA8
    ctx->pc = 0x2DE1A4u;
    SET_GPR_U32(ctx, 31, 0x2DE1ACu);
    ctx->pc = 0x2DE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1A4u;
    // 0x2de1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA8u, 0x2DE1A4u, 0x2DE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1ACu;
label_2de1ac:
    // 0x2de1ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1B8u;
        // 0x2de1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE1C0u;
}
