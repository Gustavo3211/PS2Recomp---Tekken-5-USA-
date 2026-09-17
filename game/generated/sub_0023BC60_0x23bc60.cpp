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

// Function: sub_0023BC60
// Address: 0x23bc60 - 0x23bcf0
void sub_0023BC60_0x23bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BC60_0x23bc60");
#endif

    switch (ctx->pc) {
        case 0x23bc90u: goto label_23bc90;
        case 0x23bc98u: goto label_23bc98;
        case 0x23bcc8u: goto label_23bcc8;
        default: break;
    }

    ctx->pc = 0x23bc60u;

    // 0x23bc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bc64: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23bc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bc6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23bc70: 0x2463d748  addiu       $v1, $v1, -0x28B8
    ctx->pc = 0x23bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956872));
    // 0x23bc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bc78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D74Cu));
    // 0x23bc7c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23BC7Cu;
    {
        const bool branch_taken_0x23bc7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC7Cu;
        // 0x23bc80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc7c) {
            ctx->pc = 0x23BCD8u;
            goto label_23bcd8;
        }
    }
    ctx->pc = 0x23BC84u;
    // 0x23bc84: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23bc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc8c: 0x0  nop
    ctx->pc = 0x23bc8cu;
    // NOP
label_23bc90:
    // 0x23bc90: 0xc08ebc2  jal         func_23AF08
    ctx->pc = 0x23BC90u;
    SET_GPR_U32(ctx, 31, 0x23BC98u);
    ctx->pc = 0x23BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC90u;
    // 0x23bc94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF08u, 0x23BC90u, 0x23BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC98u;
label_23bc98:
    // 0x23bc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bc9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bca0: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x23bca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x23bca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23bcac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BCACu;
    {
        const bool branch_taken_0x23bcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCACu;
        // 0x23bcb0: 0x8f82973c  lw          $v0, -0x68C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcac) {
            ctx->pc = 0x23BCC0u;
            goto label_23bcc0;
        }
    }
    ctx->pc = 0x23BCB4u;
    // 0x23bcb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23bcb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23bcb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BCB8u;
    {
        const bool branch_taken_0x23bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bcb8) {
            ctx->pc = 0x23BCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BCB8u;
            // 0x23bcbc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BCCCu;
            goto label_23bccc;
        }
    }
    ctx->pc = 0x23BCC0u;
label_23bcc0:
    // 0x23bcc0: 0xc08ebd8  jal         func_23AF60
    ctx->pc = 0x23BCC0u;
    SET_GPR_U32(ctx, 31, 0x23BCC8u);
    ctx->pc = 0x23AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF60u, 0x23BCC0u, 0x23BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCC8u;
label_23bcc8:
    // 0x23bcc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23bccc:
    // 0x23bccc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23bcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bcd0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23BCD0u;
    {
        const bool branch_taken_0x23bcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCD0u;
        // 0x23bcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcd0) {
            ctx->pc = 0x23BC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bc90;
        }
    }
    ctx->pc = 0x23BCD8u;
label_23bcd8:
    // 0x23bcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bcdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23bcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bce4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCE4u;
        // 0x23bce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCECu;
    // 0x23bcec: 0x0  nop
    ctx->pc = 0x23bcecu;
    // NOP
    ctx->pc = 0x23bcf0u;
}
