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

// Function: sub_0024FC78
// Address: 0x24fc78 - 0x24fd28
void sub_0024FC78_0x24fc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC78_0x24fc78");
#endif

    switch (ctx->pc) {
        case 0x24fca4u: goto label_24fca4;
        case 0x24fce4u: goto label_24fce4;
        case 0x24fd14u: goto label_24fd14;
        default: break;
    }

    ctx->pc = 0x24fc78u;

    // 0x24fc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24fc88: 0x260700c0  addiu       $a3, $s0, 0xC0
    ctx->pc = 0x24fc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x24fc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc90: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24fc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24fc94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FC94u;
    {
        const bool branch_taken_0x24fc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC94u;
        // 0x24fc98: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc94) {
            ctx->pc = 0x24FCB0u;
            goto label_24fcb0;
        }
    }
    ctx->pc = 0x24FC9Cu;
    // 0x24fc9c: 0xc093c66  jal         func_24F198
    ctx->pc = 0x24FC9Cu;
    SET_GPR_U32(ctx, 31, 0x24FCA4u);
    ctx->pc = 0x24FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC9Cu;
    // 0x24fca0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F198u, 0x24FC9Cu, 0x24FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCA4u;
label_24fca4:
    // 0x24fca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24FCA4u;
    {
        const bool branch_taken_0x24fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCA4u;
        // 0x24fca8: 0x86020064  lh          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fca4) {
            ctx->pc = 0x24FCF0u;
            goto label_24fcf0;
        }
    }
    ctx->pc = 0x24FCACu;
    // 0x24fcac: 0x0  nop
    ctx->pc = 0x24fcacu;
    // NOP
label_24fcb0:
    // 0x24fcb0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24fcb4: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24fcb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FCB8u;
    {
        const bool branch_taken_0x24fcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCB8u;
        // 0x24fcbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcb8) {
            ctx->pc = 0x24FCD0u;
            goto label_24fcd0;
        }
    }
    ctx->pc = 0x24FCC0u;
    // 0x24fcc0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24fcc4: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24fcc8: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x24fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24fccc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x24fcccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_24fcd0:
    // 0x24fcd0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FCD0u;
    {
        const bool branch_taken_0x24fcd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCD0u;
        // 0x24fcd4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcd0) {
            ctx->pc = 0x24FCECu;
            goto label_24fcec;
        }
    }
    ctx->pc = 0x24FCD8u;
    // 0x24fcd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fcdc: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x24FCDCu;
    SET_GPR_U32(ctx, 31, 0x24FCE4u);
    ctx->pc = 0x24FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FCDCu;
    // 0x24fce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9A0u, 0x24FCDCu, 0x24FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCE4u;
label_24fce4:
    // 0x24fce4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24FCE4u;
    {
        const bool branch_taken_0x24fce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fce4) {
            ctx->pc = 0x24FCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FCE4u;
            // 0x24fce8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FD18u;
            goto label_24fd18;
        }
    }
    ctx->pc = 0x24FCECu;
label_24fcec:
    // 0x24fcec: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24fcecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24fcf0:
    // 0x24fcf0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24fcf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24fcf4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24fcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24fcf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FCF8u;
    {
        const bool branch_taken_0x24fcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCF8u;
        // 0x24fcfc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcf8) {
            ctx->pc = 0x24FD0Cu;
            goto label_24fd0c;
        }
    }
    ctx->pc = 0x24FD00u;
    // 0x24fd00: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24fd04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24fd08: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24fd0c:
    // 0x24fd0c: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24FD0Cu;
    SET_GPR_U32(ctx, 31, 0x24FD14u);
    ctx->pc = 0x24FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD0Cu;
    // 0x24fd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24FD0Cu, 0x24FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD14u;
label_24fd14:
    // 0x24fd14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24fd18:
    // 0x24fd18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24fd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24fd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD1Cu;
        // 0x24fd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FD24u;
    // 0x24fd24: 0x0  nop
    ctx->pc = 0x24fd24u;
    // NOP
    ctx->pc = 0x24fd28u;
}
