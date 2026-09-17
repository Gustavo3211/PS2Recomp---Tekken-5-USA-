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

// Function: sub_00369DC8
// Address: 0x369dc8 - 0x369e30
void sub_00369DC8_0x369dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369DC8_0x369dc8");
#endif

    switch (ctx->pc) {
        case 0x369decu: goto label_369dec;
        default: break;
    }

    ctx->pc = 0x369dc8u;

    // 0x369dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369dd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369dd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369ddc: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x369ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x369de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369de4: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x369DE4u;
    SET_GPR_U32(ctx, 31, 0x369DECu);
    ctx->pc = 0x369DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DE4u;
    // 0x369de8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x369DE4u, 0x369DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DECu;
label_369dec:
    // 0x369dec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369df0: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x369df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x369df4: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x369df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
    // 0x369df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369dfc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x369dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x369e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369e04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x369e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x369e08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x369e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x369e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x369E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E0Cu;
        // 0x369e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369E14u;
    // 0x369e14: 0x0  nop
    ctx->pc = 0x369e14u;
    // NOP
    // 0x369e18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369e1c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x369e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x369e20: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x369e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x369e24: 0x2484fb80  addiu       $a0, $a0, -0x480
    ctx->pc = 0x369e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966144));
    // 0x369e28: 0xc048b90  jal         func_122E40
    ctx->pc = 0x369E28u;
    SET_GPR_U32(ctx, 31, 0x369E30u);
    ctx->pc = 0x369E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E28u;
    // 0x369e2c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x369E28u, 0x369E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E30u;
}
