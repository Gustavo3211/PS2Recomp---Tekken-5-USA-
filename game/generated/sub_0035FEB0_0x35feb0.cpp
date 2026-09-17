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

// Function: sub_0035FEB0
// Address: 0x35feb0 - 0x35ff48
void sub_0035FEB0_0x35feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FEB0_0x35feb0");
#endif

    switch (ctx->pc) {
        case 0x35fed4u: goto label_35fed4;
        case 0x35ff0cu: goto label_35ff0c;
        case 0x35ff28u: goto label_35ff28;
        default: break;
    }

    ctx->pc = 0x35feb0u;

    // 0x35feb0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35feb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35feb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35feb8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x35feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x35febc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35febcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35fec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35fec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35fec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35fecc: 0xc0d8284  jal         func_360A10
    ctx->pc = 0x35FECCu;
    SET_GPR_U32(ctx, 31, 0x35FED4u);
    ctx->pc = 0x35FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FECCu;
    // 0x35fed0: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360A10u, 0x35FECCu, 0x35FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FED4u;
label_35fed4:
    // 0x35fed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35fed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fed8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35FED8u;
    {
        const bool branch_taken_0x35fed8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FED8u;
        // 0x35fedc: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fed8) {
            ctx->pc = 0x35FEF0u;
            goto label_35fef0;
        }
    }
    ctx->pc = 0x35FEE0u;
    // 0x35fee0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35fee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35FEE4u;
    {
        const bool branch_taken_0x35fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FEE4u;
        // 0x35fee8: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fee4) {
            ctx->pc = 0x35FEF4u;
            goto label_35fef4;
        }
    }
    ctx->pc = 0x35FEECu;
    // 0x35feec: 0x0  nop
    ctx->pc = 0x35feecu;
    // NOP
label_35fef0:
    // 0x35fef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35fef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fef4:
    // 0x35fef4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x35FEF4u;
    {
        const bool branch_taken_0x35fef4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FEF4u;
        // 0x35fef8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fef4) {
            ctx->pc = 0x35FF20u;
            goto label_35ff20;
        }
    }
    ctx->pc = 0x35FEFCu;
    // 0x35fefc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x35fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35ff00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35ff04: 0xc0d7fa0  jal         func_35FE80
    ctx->pc = 0x35FF04u;
    SET_GPR_U32(ctx, 31, 0x35FF0Cu);
    ctx->pc = 0x35FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF04u;
    // 0x35ff08: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE80u, 0x35FF04u, 0x35FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF0Cu;
label_35ff0c:
    // 0x35ff0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35ff10: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FF10u;
    {
        const bool branch_taken_0x35ff10 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF10u;
        // 0x35ff14: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff10) {
            ctx->pc = 0x35FF30u;
            goto label_35ff30;
        }
    }
    ctx->pc = 0x35FF18u;
    // 0x35ff18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35FF18u;
    {
        const bool branch_taken_0x35ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF18u;
        // 0x35ff1c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff18) {
            ctx->pc = 0x35FF28u;
            goto label_35ff28;
        }
    }
    ctx->pc = 0x35FF20u;
label_35ff20:
    // 0x35ff20: 0xc0d7fa0  jal         func_35FE80
    ctx->pc = 0x35FF20u;
    SET_GPR_U32(ctx, 31, 0x35FF28u);
    ctx->pc = 0x35FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF20u;
    // 0x35ff24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE80u, 0x35FF20u, 0x35FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF28u;
label_35ff28:
    // 0x35ff28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35ff2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35ff2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_35ff30:
    // 0x35ff30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ff30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ff34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ff34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ff38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF3Cu;
        // 0x35ff40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FF44u;
    // 0x35ff44: 0x0  nop
    ctx->pc = 0x35ff44u;
    // NOP
    ctx->pc = 0x35ff48u;
}
