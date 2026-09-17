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

// Function: sub_0024FD28
// Address: 0x24fd28 - 0x24fdd8
void sub_0024FD28_0x24fd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FD28_0x24fd28");
#endif

    switch (ctx->pc) {
        case 0x24fd54u: goto label_24fd54;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fdc4u: goto label_24fdc4;
        default: break;
    }

    ctx->pc = 0x24fd28u;

    // 0x24fd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24fd38: 0x260700c0  addiu       $a3, $s0, 0xC0
    ctx->pc = 0x24fd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x24fd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd40: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24fd40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24fd44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FD44u;
    {
        const bool branch_taken_0x24fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD44u;
        // 0x24fd48: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd44) {
            ctx->pc = 0x24FD60u;
            goto label_24fd60;
        }
    }
    ctx->pc = 0x24FD4Cu;
    // 0x24fd4c: 0xc093c66  jal         func_24F198
    ctx->pc = 0x24FD4Cu;
    SET_GPR_U32(ctx, 31, 0x24FD54u);
    ctx->pc = 0x24FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD4Cu;
    // 0x24fd50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F198u, 0x24FD4Cu, 0x24FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD54u;
label_24fd54:
    // 0x24fd54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24FD54u;
    {
        const bool branch_taken_0x24fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD54u;
        // 0x24fd58: 0x86020064  lh          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd54) {
            ctx->pc = 0x24FDA0u;
            goto label_24fda0;
        }
    }
    ctx->pc = 0x24FD5Cu;
    // 0x24fd5c: 0x0  nop
    ctx->pc = 0x24fd5cu;
    // NOP
label_24fd60:
    // 0x24fd60: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24fd64: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24fd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FD68u;
    {
        const bool branch_taken_0x24fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD68u;
        // 0x24fd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd68) {
            ctx->pc = 0x24FD80u;
            goto label_24fd80;
        }
    }
    ctx->pc = 0x24FD70u;
    // 0x24fd70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24fd74: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24fd78: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x24fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24fd7c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x24fd7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_24fd80:
    // 0x24fd80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FD80u;
    {
        const bool branch_taken_0x24fd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD80u;
        // 0x24fd84: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd80) {
            ctx->pc = 0x24FD9Cu;
            goto label_24fd9c;
        }
    }
    ctx->pc = 0x24FD88u;
    // 0x24fd88: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24fd8c: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x24FD8Cu;
    SET_GPR_U32(ctx, 31, 0x24FD94u);
    ctx->pc = 0x24FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD8Cu;
    // 0x24fd90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9A0u, 0x24FD8Cu, 0x24FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD94u;
label_24fd94:
    // 0x24fd94: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24FD94u;
    {
        const bool branch_taken_0x24fd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fd94) {
            ctx->pc = 0x24FD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD94u;
            // 0x24fd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FDC8u;
            goto label_24fdc8;
        }
    }
    ctx->pc = 0x24FD9Cu;
label_24fd9c:
    // 0x24fd9c: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24fd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24fda0:
    // 0x24fda0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24fda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24fda4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24fda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24fda8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FDA8u;
    {
        const bool branch_taken_0x24fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDA8u;
        // 0x24fdac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fda8) {
            ctx->pc = 0x24FDBCu;
            goto label_24fdbc;
        }
    }
    ctx->pc = 0x24FDB0u;
    // 0x24fdb0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24fdb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24fdb8: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24fdbc:
    // 0x24fdbc: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24FDBCu;
    SET_GPR_U32(ctx, 31, 0x24FDC4u);
    ctx->pc = 0x24FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDBCu;
    // 0x24fdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24FDBCu, 0x24FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDC4u;
label_24fdc4:
    // 0x24fdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24fdc8:
    // 0x24fdc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24fdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24fdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x24FDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDCCu;
        // 0x24fdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FDD4u;
    // 0x24fdd4: 0x0  nop
    ctx->pc = 0x24fdd4u;
    // NOP
    ctx->pc = 0x24fdd8u;
}
