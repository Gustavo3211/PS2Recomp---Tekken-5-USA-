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

// Function: sub_0036FB98
// Address: 0x36fb98 - 0x36fc60
void sub_0036FB98_0x36fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FB98_0x36fb98");
#endif

    switch (ctx->pc) {
        case 0x36fbbcu: goto label_36fbbc;
        case 0x36fbd4u: goto label_36fbd4;
        case 0x36fc10u: goto label_36fc10;
        default: break;
    }

    ctx->pc = 0x36fb98u;

    // 0x36fb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fb9c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36fba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fba4: 0x245073e0  addiu       $s0, $v0, 0x73E0
    ctx->pc = 0x36fba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x36fba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D73E0u));
    // 0x36fbac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FBACu;
    {
        const bool branch_taken_0x36fbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBACu;
        // 0x36fbb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fbac) {
            ctx->pc = 0x36FBD4u;
            goto label_36fbd4;
        }
    }
    ctx->pc = 0x36FBB4u;
    // 0x36fbb4: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x36FBB4u;
    SET_GPR_U32(ctx, 31, 0x36FBBCu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x36FBB4u, 0x36FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBBCu;
label_36fbbc:
    // 0x36fbbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fbc0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fbc4: 0x24a50908  addiu       $a1, $a1, 0x908
    ctx->pc = 0x36fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
    // 0x36fbc8: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x36fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x36fbcc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FBCCu;
    SET_GPR_U32(ctx, 31, 0x36FBD4u);
    ctx->pc = 0x36FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBCCu;
    // 0x36fbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FBCCu, 0x36FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBD4u;
label_36fbd4:
    // 0x36fbd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fbdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36fbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBE0u;
        // 0x36fbe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FBE8u;
    // 0x36fbe8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36fbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x36fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36fbf0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36fbf4: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x36fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x36fbf8: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x36fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x36fbfc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x36fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x36fc00: 0x24c20058  addiu       $v0, $a2, 0x58
    ctx->pc = 0x36fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x36fc04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36fc08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36fc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36fc10:
    // 0x36fc10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36fc14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36fc18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36fc1c: 0x0  nop
    ctx->pc = 0x36fc1cu;
    // NOP
    // 0x36fc20: 0x0  nop
    ctx->pc = 0x36fc20u;
    // NOP
    // 0x36fc24: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36FC24u;
    {
        const bool branch_taken_0x36fc24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC24u;
        // 0x36fc28: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc24) {
            ctx->pc = 0x36FC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fc10;
        }
    }
    ctx->pc = 0x36FC2Cu;
    // 0x36fc2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x36fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x36fc30: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x36fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x36fc34: 0x24c300b8  addiu       $v1, $a2, 0xB8
    ctx->pc = 0x36fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x36fc38: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x36fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x36fc3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fc40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36fc44: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36fc48: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x36fc4c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x36fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x36fc50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x36FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC54u;
        // 0x36fc58: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FC5Cu;
    // 0x36fc5c: 0x0  nop
    ctx->pc = 0x36fc5cu;
    // NOP
    ctx->pc = 0x36fc60u;
}
