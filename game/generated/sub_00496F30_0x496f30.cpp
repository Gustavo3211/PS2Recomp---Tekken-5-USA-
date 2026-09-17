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

// Function: sub_00496F30
// Address: 0x496f30 - 0x497038
void sub_00496F30_0x496f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496F30_0x496f30");
#endif

    ctx->pc = 0x496f30u;

    // 0x496f30: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x496f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x496f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x496f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x496f3c: 0x244b0af4  addiu       $t3, $v0, 0xAF4
    ctx->pc = 0x496f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2804));
    // 0x496f40: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x496f40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496f44: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x496f44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x496f48: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x496f48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x496f4c: 0x25450af8  addiu       $a1, $t2, 0xAF8
    ctx->pc = 0x496f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 2808));
    // 0x496f50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x496f50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AF8u));
    // 0x496f54: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x496f54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x496f58: 0x24870006  addiu       $a3, $a0, 0x6
    ctx->pc = 0x496f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x496f5c: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x496f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x496f60: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x496f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x496f64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496f68: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x496f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x496f6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496f70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x496f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x496f74: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x496f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496f78: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x496f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496f7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x496F7Cu;
    {
        const bool branch_taken_0x496f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x496F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496F7Cu;
        // 0x496f80: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496f7c) {
            ctx->pc = 0x496FC8u;
            goto label_496fc8;
        }
    }
    ctx->pc = 0x496F84u;
    // 0x496f84: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x496f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x496f88: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x496f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x496f8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x496f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x496f90: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x496f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496f94: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x496f94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x496f98: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x496f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496f9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x496f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496fa0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x496fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x496fa4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x496fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x496fa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496fac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496fb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x496fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x496fb4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x496fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496fb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x496FB8u;
    {
        const bool branch_taken_0x496fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496FB8u;
        // 0x496fbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496fb8) {
            ctx->pc = 0x497030u;
            goto label_497030;
        }
    }
    ctx->pc = 0x496FC0u;
    // 0x496fc0: 0x8125b9e  j           func_496E78
    ctx->pc = 0x496FC0u;
    ctx->pc = 0x496FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496FC0u;
    // 0x496fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496E78u, 0x496FC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x496FC8u;
label_496fc8:
    // 0x496fc8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x496fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x496fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x496fd0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x496fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496fd4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x496fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x496fd8: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x496fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x496fdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x496FDCu;
    {
        const bool branch_taken_0x496fdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x496FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496FDCu;
        // 0x496fe0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496fdc) {
            ctx->pc = 0x496FF0u;
            goto label_496ff0;
        }
    }
    ctx->pc = 0x496FE4u;
    // 0x496fe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x496FE4u;
    {
        const bool branch_taken_0x496fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496FE4u;
        // 0x496fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496fe4) {
            ctx->pc = 0x496FF4u;
            goto label_496ff4;
        }
    }
    ctx->pc = 0x496FECu;
    // 0x496fec: 0x0  nop
    ctx->pc = 0x496fecu;
    // NOP
label_496ff0:
    // 0x496ff0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x496ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_496ff4:
    // 0x496ff4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x496ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x496ff8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x496ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x496ffc: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x496ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x497000: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x497000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x497004: 0x95440af8  lhu         $a0, 0xAF8($t2)
    ctx->pc = 0x497004u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2808)));
    // 0x497008: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x497008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49700c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49700cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x497010: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x497010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x497014: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x497014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x497018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497018u;
    {
        const bool branch_taken_0x497018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497018u;
        // 0x49701c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497018) {
            ctx->pc = 0x497030u;
            goto label_497030;
        }
    }
    ctx->pc = 0x497020u;
    // 0x497020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x497020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x497024: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x497024u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x497028: 0x8125b9e  j           func_496E78
    ctx->pc = 0x497028u;
    ctx->pc = 0x49702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497028u;
    // 0x49702c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496E78u, 0x497028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x497030u;
label_497030:
    // 0x497030: 0x3e00008  jr          $ra
    ctx->pc = 0x497030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497030u;
        // 0x497034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497038u;
}
