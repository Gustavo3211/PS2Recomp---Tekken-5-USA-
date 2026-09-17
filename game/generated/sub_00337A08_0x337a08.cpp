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

// Function: sub_00337A08
// Address: 0x337a08 - 0x337a58
void sub_00337A08_0x337a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A08_0x337a08");
#endif

    ctx->pc = 0x337a08u;

    // 0x337a08: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x337a0c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x337a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x337a10: 0x24630a60  addiu       $v1, $v1, 0xA60
    ctx->pc = 0x337a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337a14: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x337a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x337a18: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x337a18u;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x337a1c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x337a20: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x337a20u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x440A60u));
    // 0x337a24: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x337a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x337a28: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337A28u;
    {
        const bool branch_taken_0x337a28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A28u;
        // 0x337a2c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a28) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x337A30u;
    // 0x337a30: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x337a30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337a34: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x337a34u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_337a38:
    // 0x337a38: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x337a38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x337a3c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x337a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x337a40: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x337a40u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x337a44: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x337a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x337a48: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x337a48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x337a4c: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x337a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x337a50: 0x3e00008  jr          $ra
    ctx->pc = 0x337A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A58u;
}
