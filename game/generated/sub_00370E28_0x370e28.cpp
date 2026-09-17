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

// Function: sub_00370E28
// Address: 0x370e28 - 0x370ef8
void sub_00370E28_0x370e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E28_0x370e28");
#endif

    switch (ctx->pc) {
        case 0x370e4cu: goto label_370e4c;
        case 0x370e64u: goto label_370e64;
        case 0x370ea0u: goto label_370ea0;
        default: break;
    }

    ctx->pc = 0x370e28u;

    // 0x370e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370e2c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370e34: 0x245074b0  addiu       $s0, $v0, 0x74B0
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29872));
    // 0x370e38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74B0u));
    // 0x370e3c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370E3Cu;
    {
        const bool branch_taken_0x370e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E3Cu;
        // 0x370e40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e3c) {
            ctx->pc = 0x370E64u;
            goto label_370e64;
        }
    }
    ctx->pc = 0x370E44u;
    // 0x370e44: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x370E44u;
    SET_GPR_U32(ctx, 31, 0x370E4Cu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x370E44u, 0x370E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E4Cu;
label_370e4c:
    // 0x370e4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370e50: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370e54: 0x24a50bd0  addiu       $a1, $a1, 0xBD0
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3024));
    // 0x370e58: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x370e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x370e5c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370E5Cu;
    SET_GPR_U32(ctx, 31, 0x370E64u);
    ctx->pc = 0x370E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E5Cu;
    // 0x370e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370E5Cu, 0x370E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E64u;
label_370e64:
    // 0x370e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370e6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370e70: 0x3e00008  jr          $ra
    ctx->pc = 0x370E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E70u;
        // 0x370e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E78u;
    // 0x370e78: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x370e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e7c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x370e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x370e80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370e84: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x370e88: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x370e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x370e8c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x370e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x370e90: 0x24e20058  addiu       $v0, $a3, 0x58
    ctx->pc = 0x370e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x370e94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370e98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x370e9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370ea0:
    // 0x370ea0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x370ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x370ea4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x370ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x370ea8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370eac: 0x0  nop
    ctx->pc = 0x370eacu;
    // NOP
    // 0x370eb0: 0x0  nop
    ctx->pc = 0x370eb0u;
    // NOP
    // 0x370eb4: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x370EB4u;
    {
        const bool branch_taken_0x370eb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x370EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EB4u;
        // 0x370eb8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370eb4) {
            ctx->pc = 0x370EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370ea0;
        }
    }
    ctx->pc = 0x370EBCu;
    // 0x370ebc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x370ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x370ec0: 0x24e20110  addiu       $v0, $a3, 0x110
    ctx->pc = 0x370ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x370ec4: 0x24e60140  addiu       $a2, $a3, 0x140
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x370ec8: 0x24e300b8  addiu       $v1, $a3, 0xB8
    ctx->pc = 0x370ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x370ecc: 0x2484ef98  addiu       $a0, $a0, -0x1068
    ctx->pc = 0x370eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963096));
    // 0x370ed0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370ed4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370ed8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x370ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x370edc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x370edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x370ee0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x370ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x370ee4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x370ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x370ee8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x370ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x370eec: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x370eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x370ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x370EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EF0u;
        // 0x370ef4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370EF8u;
}
