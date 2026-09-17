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

// Function: sub_004AB660
// Address: 0x4ab660 - 0x4ab860
void sub_004AB660_0x4ab660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB660_0x4ab660");
#endif

    ctx->pc = 0x4ab660u;

    // 0x4ab660: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB668u;
    // 0x4ab668: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab66c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ab66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab670: 0x24840cb0  addiu       $a0, $a0, 0xCB0
    ctx->pc = 0x4ab670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3248));
    // 0x4ab674: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ab674u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0CB0u));
    // 0x4ab678: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ab678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab67c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ab67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ab680: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab68c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB68Cu;
        // 0x4ab690: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB694u;
    // 0x4ab694: 0x0  nop
    ctx->pc = 0x4ab694u;
    // NOP
    // 0x4ab698: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab69c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ab69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab6a0: 0x24840cb4  addiu       $a0, $a0, 0xCB4
    ctx->pc = 0x4ab6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3252));
    // 0x4ab6a4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ab6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0CB4u));
    // 0x4ab6a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ab6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab6ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ab6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ab6b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab6b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab6b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB6BCu;
        // 0x4ab6c0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB6C4u;
    // 0x4ab6c4: 0x0  nop
    ctx->pc = 0x4ab6c4u;
    // NOP
    // 0x4ab6c8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ab6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ab6cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ab6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ab6d0: 0x24c60cb0  addiu       $a2, $a2, 0xCB0
    ctx->pc = 0x4ab6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3248));
    // 0x4ab6d4: 0x24e70cb4  addiu       $a3, $a3, 0xCB4
    ctx->pc = 0x4ab6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3252));
    // 0x4ab6d8: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4ab6d8u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0CB0u));
    // 0x4ab6dc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ab6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab6e0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4ab6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0CB4u));
    // 0x4ab6e4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4ab6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab6e8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4ab6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4ab6ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ab6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ab6f0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ab6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ab6f4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4ab6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4ab6f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab6fc: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ab6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ab700: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab704: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ab704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ab708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ab708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ab70c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4ab70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4ab710: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB710u;
        // 0x4ab714: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB718u;
    // 0x4ab718: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab71c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ab71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab720: 0x24840cb8  addiu       $a0, $a0, 0xCB8
    ctx->pc = 0x4ab720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3256));
    // 0x4ab724: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ab724u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0CB8u));
    // 0x4ab728: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ab728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab72c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ab72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ab730: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab738: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab73c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB73Cu;
        // 0x4ab740: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB744u;
    // 0x4ab744: 0x0  nop
    ctx->pc = 0x4ab744u;
    // NOP
    // 0x4ab748: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ab748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ab74c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ab74cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ab750: 0x24c60cb0  addiu       $a2, $a2, 0xCB0
    ctx->pc = 0x4ab750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3248));
    // 0x4ab754: 0x24e70cb8  addiu       $a3, $a3, 0xCB8
    ctx->pc = 0x4ab754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3256));
    // 0x4ab758: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4ab758u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0CB0u));
    // 0x4ab75c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ab75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab760: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4ab760u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0CB8u));
    // 0x4ab764: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4ab764u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab768: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4ab768u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4ab76c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ab76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ab770: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ab774: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4ab774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4ab778: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab77c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ab77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ab780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab784: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ab784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ab788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ab788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ab78c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4ab78cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4ab790: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB790u;
        // 0x4ab794: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB798u;
    // 0x4ab798: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ab798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ab79c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ab79cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ab7a0: 0x24c60cb4  addiu       $a2, $a2, 0xCB4
    ctx->pc = 0x4ab7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3252));
    // 0x4ab7a4: 0x24e70cb8  addiu       $a3, $a3, 0xCB8
    ctx->pc = 0x4ab7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3256));
    // 0x4ab7a8: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4ab7a8u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0CB4u));
    // 0x4ab7ac: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ab7acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab7b0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4ab7b0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0CB8u));
    // 0x4ab7b4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4ab7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab7b8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4ab7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4ab7bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ab7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ab7c0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ab7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ab7c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4ab7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4ab7c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab7cc: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ab7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ab7d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab7d4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ab7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ab7d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ab7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ab7dc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4ab7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4ab7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB7E0u;
        // 0x4ab7e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB7E8u;
    // 0x4ab7e8: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ab7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ab7ec: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4ab7ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4ab7f0: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ab7f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ab7f4: 0x25290cb0  addiu       $t1, $t1, 0xCB0
    ctx->pc = 0x4ab7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3248));
    // 0x4ab7f8: 0x254a0cb4  addiu       $t2, $t2, 0xCB4
    ctx->pc = 0x4ab7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3252));
    // 0x4ab7fc: 0x256b0cb8  addiu       $t3, $t3, 0xCB8
    ctx->pc = 0x4ab7fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3256));
    // 0x4ab800: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4ab800u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F0CB0u));
    // 0x4ab804: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ab804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab808: 0x85450000  lh          $a1, 0x0($t2)
    ctx->pc = 0x4ab808u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0CB4u));
    // 0x4ab80c: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4ab80cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x7F0CB8u));
    // 0x4ab810: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4ab810u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4ab814: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4ab814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ab818: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4ab818u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4ab81c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4ab81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ab820: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4ab820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4ab824: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ab824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ab828: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4ab828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4ab82c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ab82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ab830: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4ab830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4ab834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab838: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ab838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ab83c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab840: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4ab840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4ab844: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ab844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ab848: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ab848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ab84c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4ab84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4ab850: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4ab850u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4ab854: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB854u;
        // 0x4ab858: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB85Cu;
    // 0x4ab85c: 0x0  nop
    ctx->pc = 0x4ab85cu;
    // NOP
    ctx->pc = 0x4ab860u;
}
