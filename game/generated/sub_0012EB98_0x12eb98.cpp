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

// Function: sub_0012EB98
// Address: 0x12eb98 - 0x12ec40
void sub_0012EB98_0x12eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EB98_0x12eb98");
#endif

    switch (ctx->pc) {
        case 0x12ebc4u: goto label_12ebc4;
        case 0x12ec08u: goto label_12ec08;
        default: break;
    }

    ctx->pc = 0x12eb98u;

    // 0x12eb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12eb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12eb9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12eba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12eba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12eba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12eba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ebb0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x12ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x12ebb4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EBB4u;
    {
        const bool branch_taken_0x12ebb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBB4u;
        // 0x12ebb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebb4) {
            ctx->pc = 0x12EBD0u;
            goto label_12ebd0;
        }
    }
    ctx->pc = 0x12EBBCu;
    // 0x12ebbc: 0xc04bf82  jal         func_12FE08
    ctx->pc = 0x12EBBCu;
    SET_GPR_U32(ctx, 31, 0x12EBC4u);
    ctx->pc = 0x12EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBBCu;
    // 0x12ebc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE08u, 0x12EBBCu, 0x12EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBC4u;
label_12ebc4:
    // 0x12ebc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12ebc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebc8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EBC8u;
    {
        const bool branch_taken_0x12ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBC8u;
        // 0x12ebcc: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebc8) {
            ctx->pc = 0x12EC28u;
            goto label_12ec28;
        }
    }
    ctx->pc = 0x12EBD0u;
label_12ebd0:
    // 0x12ebd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12ebd4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ebd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ebdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EBDCu;
    {
        const bool branch_taken_0x12ebdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBDCu;
        // 0x12ebe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebdc) {
            ctx->pc = 0x12EBF0u;
            goto label_12ebf0;
        }
    }
    ctx->pc = 0x12EBE4u;
    // 0x12ebe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ebe8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12EBE8u;
    {
        const bool branch_taken_0x12ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBE8u;
        // 0x12ebec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebe8) {
            ctx->pc = 0x12EC1Cu;
            goto label_12ec1c;
        }
    }
    ctx->pc = 0x12EBF0u;
label_12ebf0:
    // 0x12ebf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebf4: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x12ebf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x12ebf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebfc: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12ec00: 0xc04bf82  jal         func_12FE08
    ctx->pc = 0x12EC00u;
    SET_GPR_U32(ctx, 31, 0x12EC08u);
    ctx->pc = 0x12EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC00u;
    // 0x12ec04: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FE08u, 0x12EC00u, 0x12EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC08u;
label_12ec08:
    // 0x12ec08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12ec08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec0c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EC0Cu;
    {
        const bool branch_taken_0x12ec0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec0c) {
            ctx->pc = 0x12EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC0Cu;
            // 0x12ec10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC2Cu;
            goto label_12ec2c;
        }
    }
    ctx->pc = 0x12EC14u;
    // 0x12ec14: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x12ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x12ec18: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x12ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_12ec1c:
    // 0x12ec1c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x12ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x12ec20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12ec20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec24: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12ec28:
    // 0x12ec28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ec28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ec2c:
    // 0x12ec2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ec2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ec30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ec34: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC34u;
        // 0x12ec38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC3Cu;
    // 0x12ec3c: 0x0  nop
    ctx->pc = 0x12ec3cu;
    // NOP
    ctx->pc = 0x12ec40u;
}
