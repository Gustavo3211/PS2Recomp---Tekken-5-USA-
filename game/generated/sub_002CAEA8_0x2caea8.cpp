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

// Function: sub_002CAEA8
// Address: 0x2caea8 - 0x2caf68
void sub_002CAEA8_0x2caea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAEA8_0x2caea8");
#endif

    switch (ctx->pc) {
        case 0x2caee8u: goto label_2caee8;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf58u: goto label_2caf58;
        default: break;
    }

    ctx->pc = 0x2caea8u;

    // 0x2caea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2caeac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2caeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2caeb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2caeb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2caeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2caeb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2caeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2caebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2caec0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2caec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caec4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2caec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2caec8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2caec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caecc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2caeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2caed0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2caed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caed4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2caed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2caed8: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CAED8u;
    {
        const bool branch_taken_0x2caed8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2CAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAED8u;
        // 0x2caedc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caed8) {
            ctx->pc = 0x2CAF30u;
            goto label_2caf30;
        }
    }
    ctx->pc = 0x2CAEE0u;
    // 0x2caee0: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x2caee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2caee4: 0x0  nop
    ctx->pc = 0x2caee4u;
    // NOP
label_2caee8:
    // 0x2caee8: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x2caee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2caeec: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2caeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2caef0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2caef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2caef4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2caef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2caef8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2caef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2caefc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2caefcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2caf00: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2caf04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2caf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2caf08: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x2caf08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2caf0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2caf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2caf10: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2caf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2caf14: 0x14d50003  bne         $a2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAF14u;
    {
        const bool branch_taken_0x2caf14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 21));
        ctx->pc = 0x2CAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF14u;
        // 0x2caf18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf14) {
            ctx->pc = 0x2CAF24u;
            goto label_2caf24;
        }
    }
    ctx->pc = 0x2CAF1Cu;
    // 0x2caf1c: 0xc097084  jal         func_25C210
    ctx->pc = 0x2CAF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF24u);
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2CAF1Cu, 0x2CAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF24u;
label_2caf24:
    // 0x2caf24: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2caf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2caf28: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CAF28u;
    {
        const bool branch_taken_0x2caf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF28u;
        // 0x2caf2c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf28) {
            ctx->pc = 0x2CAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caee8;
        }
    }
    ctx->pc = 0x2CAF30u;
label_2caf30:
    // 0x2caf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2caf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2caf38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2caf38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2caf3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2caf40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2caf40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caf44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2caf44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2caf48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2caf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF4Cu;
        // 0x2caf50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF54u;
    // 0x2caf54: 0x0  nop
    ctx->pc = 0x2caf54u;
    // NOP
label_2caf58:
    // 0x2caf58: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2caf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2caf5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2caf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2caf60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF60u;
        // 0x2caf64: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF68u;
}
