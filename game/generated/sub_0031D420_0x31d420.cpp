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

// Function: sub_0031D420
// Address: 0x31d420 - 0x31d488
void sub_0031D420_0x31d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D420_0x31d420");
#endif

    ctx->pc = 0x31d420u;

    // 0x31d420: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x31d420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x31d424: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x31d424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31d428: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x31d428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31d42c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31d430: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31d434: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d438: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31d438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31d43c: 0x8203e  dsrl32      $a0, $t0, 0
    ctx->pc = 0x31d43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x31d440: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x31d440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x31d444: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x31d444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x31d448: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x31d448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x31d44c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31d44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31d450: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31d450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31d454: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31d458: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x31d458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x31d45c: 0x24085353  addiu       $t0, $zero, 0x5353
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x31d460: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x31d460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31d464: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x31d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x31d468: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31d468u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x31d46c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x31d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x31d470: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x31d470u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x31d474: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x31d474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x31d478: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x31d478u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x31d47c: 0xfca60020  sd          $a2, 0x20($a1)
    ctx->pc = 0x31d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 6));
    // 0x31d480: 0x3e00008  jr          $ra
    ctx->pc = 0x31D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D480u;
        // 0x31d484: 0xfca80028  sd          $t0, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D488u;
}
