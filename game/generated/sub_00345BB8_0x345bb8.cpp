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

// Function: sub_00345BB8
// Address: 0x345bb8 - 0x345c60
void sub_00345BB8_0x345bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345BB8_0x345bb8");
#endif

    ctx->pc = 0x345bb8u;

    // 0x345bb8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x345bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x345bbc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x345bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x345bc0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x345bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x345bc4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x345bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x345bc8: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x345bc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x345bcc: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x345bccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x345bd0: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x345bd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x345bd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x345bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x345bd8: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x345bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x345bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345be0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x345be0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x345be4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x345be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x345be8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x345be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x345bec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x345becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x345bf0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x345bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x345bf4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x345bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x345bf8: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x345bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x345bfc: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x345bfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x345c00: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x345c00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x345c04: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x345c04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x345c08: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x345c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x345c0c: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x345c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x345c10: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x345c10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x345c14: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x345c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x345c18: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x345c18u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x345c1c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x345c1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x345c20: 0x358c8004  ori         $t4, $t4, 0x8004
    ctx->pc = 0x345c20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32772);
    // 0x345c24: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x345c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x345c28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x345c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x345c2c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x345c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x345c30: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x345c30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x345c34: 0xfc820058  sd          $v0, 0x58($a0)
    ctx->pc = 0x345c34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 2));
    // 0x345c38: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x345c38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x345c3c: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x345c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x345c40: 0xfc860028  sd          $a2, 0x28($a0)
    ctx->pc = 0x345c40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 6));
    // 0x345c44: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x345c44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
    // 0x345c48: 0xfc870038  sd          $a3, 0x38($a0)
    ctx->pc = 0x345c48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 7));
    // 0x345c4c: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x345c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
    // 0x345c50: 0xfc890048  sd          $t1, 0x48($a0)
    ctx->pc = 0x345c50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 9));
    // 0x345c54: 0x3e00008  jr          $ra
    ctx->pc = 0x345C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C54u;
        // 0x345c58: 0xfc800050  sd          $zero, 0x50($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345C5Cu;
    // 0x345c5c: 0x0  nop
    ctx->pc = 0x345c5cu;
    // NOP
    ctx->pc = 0x345c60u;
}
