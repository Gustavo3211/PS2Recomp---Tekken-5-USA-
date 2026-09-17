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

// Function: sub_00214EF0
// Address: 0x214ef0 - 0x214f58
void sub_00214EF0_0x214ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214EF0_0x214ef0");
#endif

    switch (ctx->pc) {
        case 0x214f38u: goto label_214f38;
        default: break;
    }

    ctx->pc = 0x214ef0u;

    // 0x214ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214efc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214f00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214f04: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x214F04u;
    {
        const bool branch_taken_0x214f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F04u;
        // 0x214f08: 0x84900042  lh          $s0, 0x42($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f04) {
            ctx->pc = 0x214F44u;
            goto label_214f44;
        }
    }
    ctx->pc = 0x214F0Cu;
    // 0x214f0c: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x214f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x214f10: 0x90a2002e  lbu         $v0, 0x2E($a1)
    ctx->pc = 0x214f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x214f14: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x214F14u;
    {
        const bool branch_taken_0x214f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F14u;
        // 0x214f18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f14) {
            ctx->pc = 0x214F48u;
            goto label_214f48;
        }
    }
    ctx->pc = 0x214F1Cu;
    // 0x214f1c: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x214f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x214f20: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x214f24: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214F24u;
    {
        const bool branch_taken_0x214f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x214f24) {
            ctx->pc = 0x214F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214F24u;
            // 0x214f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214F48u;
            goto label_214f48;
        }
    }
    ctx->pc = 0x214F2Cu;
    // 0x214f2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x214f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f30: 0xc085238  jal         func_2148E0
    ctx->pc = 0x214F30u;
    SET_GPR_U32(ctx, 31, 0x214F38u);
    ctx->pc = 0x214F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214F30u;
    // 0x214f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x214F30u, 0x214F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F38u;
label_214f38:
    // 0x214f38: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x214f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x214f3c: 0x3842002c  xori        $v0, $v0, 0x2C
    ctx->pc = 0x214f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)44);
    // 0x214f40: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x214f40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_214f44:
    // 0x214f44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214f48:
    // 0x214f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214f50: 0x3e00008  jr          $ra
    ctx->pc = 0x214F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F50u;
        // 0x214f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F58u;
}
