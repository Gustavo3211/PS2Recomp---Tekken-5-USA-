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

// Function: sub_002FBE98
// Address: 0x2fbe98 - 0x2fbf48
void sub_002FBE98_0x2fbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBE98_0x2fbe98");
#endif

    switch (ctx->pc) {
        case 0x2fbeb8u: goto label_2fbeb8;
        case 0x2fbef8u: goto label_2fbef8;
        default: break;
    }

    ctx->pc = 0x2fbe98u;

    // 0x2fbe98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2fbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2fbe9c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2fbe9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbea0: 0x24431b98  addiu       $v1, $v0, 0x1B98
    ctx->pc = 0x2fbea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7064));
    // 0x2fbea4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2fbea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x481B98u));
    // 0x2fbea8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FBEA8u;
    {
        const bool branch_taken_0x2fbea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA8u;
        // 0x2fbeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbea8) {
            ctx->pc = 0x2FBEECu;
            goto label_2fbeec;
        }
    }
    ctx->pc = 0x2FBEB0u;
    // 0x2fbeb0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2fbeb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbeb4: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x2fbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_2fbeb8:
    // 0x2fbeb8: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x2fbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2fbebc: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2fbebcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbec4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2fbec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbec8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fbec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fbecc: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x2fbeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2fbed0: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBED0u;
    {
        const bool branch_taken_0x2fbed0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBED0u;
        // 0x2fbed4: 0x28c40010  slti        $a0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbed0) {
            ctx->pc = 0x2FBEF0u;
            goto label_2fbef0;
        }
    }
    ctx->pc = 0x2FBED8u;
    // 0x2fbed8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBED8u;
    {
        const bool branch_taken_0x2fbed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBED8u;
        // 0x2fbedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbed8) {
            ctx->pc = 0x2FBEF0u;
            goto label_2fbef0;
        }
    }
    ctx->pc = 0x2FBEE0u;
    // 0x2fbee0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2fbee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbee4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FBEE4u;
    {
        const bool branch_taken_0x2fbee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbee4) {
            ctx->pc = 0x2FBEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBEE4u;
            // 0x2fbee8: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbeb8;
        }
    }
    ctx->pc = 0x2FBEECu;
label_2fbeec:
    // 0x2fbeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbef0:
    // 0x2fbef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBEF8u;
label_2fbef8:
    // 0x2fbef8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2fbef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2fbefc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2fbefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fbf00: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x2fbf00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fbf04: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x2fbf04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fbf08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf0c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FBF0Cu;
    {
        const bool branch_taken_0x2fbf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF0Cu;
        // 0x2fbf10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf0c) {
            ctx->pc = 0x2FBF30u;
            goto label_2fbf30;
        }
    }
    ctx->pc = 0x2FBF14u;
    // 0x2fbf14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBF14u;
    {
        const bool branch_taken_0x2fbf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf14) {
            ctx->pc = 0x2FBF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBF14u;
            // 0x2fbf18: 0x2c620052  sltiu       $v0, $v1, 0x52 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF28u;
            goto label_2fbf28;
        }
    }
    ctx->pc = 0x2FBF1Cu;
    // 0x2fbf1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBF1Cu;
    {
        const bool branch_taken_0x2fbf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF1Cu;
        // 0x2fbf20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf1c) {
            ctx->pc = 0x2FBF3Cu;
            goto label_2fbf3c;
        }
    }
    ctx->pc = 0x2FBF24u;
    // 0x2fbf24: 0x0  nop
    ctx->pc = 0x2fbf24u;
    // NOP
label_2fbf28:
    // 0x2fbf28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBF28u;
    {
        const bool branch_taken_0x2fbf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf28) {
            ctx->pc = 0x2FBF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBF28u;
            // 0x2fbf2c: 0x2c620053  sltiu       $v0, $v1, 0x53 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF38u;
            goto label_2fbf38;
        }
    }
    ctx->pc = 0x2FBF30u;
label_2fbf30:
    // 0x2fbf30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FBF30u;
    {
        const bool branch_taken_0x2fbf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF30u;
        // 0x2fbf34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf30) {
            ctx->pc = 0x2FBF3Cu;
            goto label_2fbf3c;
        }
    }
    ctx->pc = 0x2FBF38u;
label_2fbf38:
    // 0x2fbf38: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2fbf38u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fbf3c:
    // 0x2fbf3c: 0x2ca20001  sltiu       $v0, $a1, 0x1
    ctx->pc = 0x2fbf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fbf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF40u;
        // 0x2fbf44: 0x6100b  movn        $v0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBF48u;
}
