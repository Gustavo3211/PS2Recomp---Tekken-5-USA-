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

// Function: sub_00105E08
// Address: 0x105e08 - 0x105ea8
void sub_00105E08_0x105e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105E08_0x105e08");
#endif

    switch (ctx->pc) {
        case 0x105e18u: goto label_105e18;
        case 0x105e74u: goto label_105e74;
        default: break;
    }

    ctx->pc = 0x105e08u;

    // 0x105e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105e10: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x105E10u;
    SET_GPR_U32(ctx, 31, 0x105E18u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x105E10u, 0x105E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E18u;
label_105e18:
    // 0x105e18: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x105e1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x105e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x105e20: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x105e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x105e24: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x105e24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x105e28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x105e28u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105e2c: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x105e2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x105e30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x105e34: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x105e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x105e38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x105e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x105e3c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x105e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x105e40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x105e40u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x105e44: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x105e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x105e48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x105e48u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x105e4c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x105e50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x105e50u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x105e54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105e58: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x105e58u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x105e5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x105e60: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x105e60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x105e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E64u;
    {
        const bool branch_taken_0x105e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E64u;
        // 0x105e68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e64) {
            ctx->pc = 0x105E78u;
            goto label_105e78;
        }
    }
    ctx->pc = 0x105E6Cu;
    // 0x105e6c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105E6Cu;
    SET_GPR_U32(ctx, 31, 0x105E74u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105E6Cu, 0x105E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E74u;
label_105e74:
    // 0x105e74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105e78:
    // 0x105e78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105e7c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105e80: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x105e84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x105e84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x105e88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105e8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x105e8cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x105e90: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x105e94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x105e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105e9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x105e9cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x105ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x105EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EA0u;
        // 0x105ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105EA8u;
}
