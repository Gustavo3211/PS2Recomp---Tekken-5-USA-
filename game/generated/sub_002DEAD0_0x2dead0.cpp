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

// Function: sub_002DEAD0
// Address: 0x2dead0 - 0x2deb60
void sub_002DEAD0_0x2dead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEAD0_0x2dead0");
#endif

    switch (ctx->pc) {
        case 0x2deb18u: goto label_2deb18;
        case 0x2deb24u: goto label_2deb24;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb40u: goto label_2deb40;
        default: break;
    }

    ctx->pc = 0x2dead0u;

    // 0x2dead0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dead4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dead8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dead8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2deadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2deae0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2deae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deae4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEAE4u;
    {
        const bool branch_taken_0x2deae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAE4u;
        // 0x2deae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deae4) {
            ctx->pc = 0x2DEB00u;
            goto label_2deb00;
        }
    }
    ctx->pc = 0x2DEAECu;
    // 0x2deaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2deaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deaf0: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEAF0u;
    {
        const bool branch_taken_0x2deaf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2deaf0) {
            ctx->pc = 0x2DEB10u;
            goto label_2deb10;
        }
    }
    ctx->pc = 0x2DEAF8u;
    // 0x2deaf8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DEAF8u;
    {
        const bool branch_taken_0x2deaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAF8u;
        // 0x2deafc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deaf8) {
            ctx->pc = 0x2DEB50u;
            goto label_2deb50;
        }
    }
    ctx->pc = 0x2DEB00u;
label_2deb00:
    // 0x2deb00: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2deb00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2deb04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB04u;
    {
        const bool branch_taken_0x2deb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB04u;
        // 0x2deb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb04) {
            ctx->pc = 0x2DEB28u;
            goto label_2deb28;
        }
    }
    ctx->pc = 0x2DEB0Cu;
    // 0x2deb0c: 0x0  nop
    ctx->pc = 0x2deb0cu;
    // NOP
label_2deb10:
    // 0x2deb10: 0xc0b7ad8  jal         func_2DEB60
    ctx->pc = 0x2DEB10u;
    SET_GPR_U32(ctx, 31, 0x2DEB18u);
    ctx->pc = 0x2DEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEB60u, 0x2DEB10u, 0x2DEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB18u;
label_2deb18:
    // 0x2deb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2deb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb1c: 0xc0b7ad8  jal         func_2DEB60
    ctx->pc = 0x2DEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB24u);
    ctx->pc = 0x2DEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB1Cu;
    // 0x2deb20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEB60u, 0x2DEB1Cu, 0x2DEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB24u;
label_2deb24:
    // 0x2deb24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2deb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2deb28:
    // 0x2deb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2deb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb2c: 0x50900008  beql        $a0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB2Cu;
    {
        const bool branch_taken_0x2deb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2deb2c) {
            ctx->pc = 0x2DEB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEB2Cu;
            // 0x2deb30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB50u;
            goto label_2deb50;
        }
    }
    ctx->pc = 0x2DEB34u;
    // 0x2deb34: 0x0  nop
    ctx->pc = 0x2deb34u;
    // NOP
label_2deb38:
    // 0x2deb38: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DEB38u;
    SET_GPR_U32(ctx, 31, 0x2DEB40u);
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DEB38u, 0x2DEB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB40u;
label_2deb40:
    // 0x2deb40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2deb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb44: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2DEB44u;
    {
        const bool branch_taken_0x2deb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2deb44) {
            ctx->pc = 0x2DEB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2deb38;
        }
    }
    ctx->pc = 0x2DEB4Cu;
    // 0x2deb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2deb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2deb50:
    // 0x2deb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2deb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2deb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2deb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deb58: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB58u;
        // 0x2deb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEB60u;
}
