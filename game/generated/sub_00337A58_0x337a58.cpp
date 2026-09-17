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

// Function: sub_00337A58
// Address: 0x337a58 - 0x337ad0
void sub_00337A58_0x337a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A58_0x337a58");
#endif

    switch (ctx->pc) {
        case 0x337a68u: goto label_337a68;
        default: break;
    }

    ctx->pc = 0x337a58u;

    // 0x337a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x337a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x337a60: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337A60u;
    SET_GPR_U32(ctx, 31, 0x337A68u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337A60u, 0x337A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A68u;
label_337a68:
    // 0x337a68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x337a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x337a6c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x337a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x337a70: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x337a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x337a74: 0x24630a60  addiu       $v1, $v1, 0xA60
    ctx->pc = 0x337a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337a78: 0x9c850000  lwu         $a1, 0x0($a0)
    ctx->pc = 0x337a78u;
    SET_GPR_ZE32(ctx, 5, runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x337a7c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x337a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x337a80: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x337a80u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x440A60u));
    // 0x337a84: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x337a84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x337a88: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337A88u;
    {
        const bool branch_taken_0x337a88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A88u;
        // 0x337a8c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a88) {
            ctx->pc = 0x337A98u;
            goto label_337a98;
        }
    }
    ctx->pc = 0x337A90u;
    // 0x337a90: 0x9c850000  lwu         $a1, 0x0($a0)
    ctx->pc = 0x337a90u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337a94: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x337a94u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_337a98:
    // 0x337a98: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x337a98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x337a9c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x337a9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x337aa0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x337aa0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x337aa4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x337aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x337aa8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x337aa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x337aac: 0x1252814  dsllv       $a1, $a1, $t1
    ctx->pc = 0x337aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x337ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337AB0u;
    {
        const bool branch_taken_0x337ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AB0u;
        // 0x337ab4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ab0) {
            ctx->pc = 0x337AC0u;
            goto label_337ac0;
        }
    }
    ctx->pc = 0x337AB8u;
    // 0x337ab8: 0xf  sync
    ctx->pc = 0x337ab8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337abc: 0x42000038  ei
    ctx->pc = 0x337abcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_337ac0:
    // 0x337ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337ac4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x337ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x337AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AC8u;
        // 0x337acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337AD0u;
}
