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

// Function: sub_002B75E8
// Address: 0x2b75e8 - 0x2b76d8
void sub_002B75E8_0x2b75e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B75E8_0x2b75e8");
#endif

    switch (ctx->pc) {
        case 0x2b7620u: goto label_2b7620;
        default: break;
    }

    ctx->pc = 0x2b75e8u;

    // 0x2b75e8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2b75e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75ec: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x2b75ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b75f0: 0x8d23002c  lw          $v1, 0x2C($t1)
    ctx->pc = 0x2b75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x2b75f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b75f8: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2b75f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b75fc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B75FCu;
    {
        const bool branch_taken_0x2b75fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75FCu;
        // 0x2b7600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75fc) {
            ctx->pc = 0x2B76CCu;
            goto label_2b76cc;
        }
    }
    ctx->pc = 0x2B7604u;
    // 0x2b7604: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x2b7604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2b7608: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b760c: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2b760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b7610: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b7610u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7614: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B7614u;
    {
        const bool branch_taken_0x2b7614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7614u;
        // 0x2b7618: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7614) {
            ctx->pc = 0x2B76C0u;
            goto label_2b76c0;
        }
    }
    ctx->pc = 0x2B761Cu;
    // 0x2b761c: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2b7620:
    // 0x2b7620: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2b7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b7624: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b7624u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7628: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7628u;
    {
        const bool branch_taken_0x2b7628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7628u;
        // 0x2b762c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7628) {
            ctx->pc = 0x2B7644u;
            goto label_2b7644;
        }
    }
    ctx->pc = 0x2B7630u;
    // 0x2b7630: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x2b7630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2b7634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7638: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2b763c: 0x62500a  movz        $t2, $v1, $v0
    ctx->pc = 0x2b763cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x2b7640: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2b7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b7644:
    // 0x2b7644: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7644u;
    {
        const bool branch_taken_0x2b7644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7644u;
        // 0x2b7648: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7644) {
            ctx->pc = 0x2B766Cu;
            goto label_2b766c;
        }
    }
    ctx->pc = 0x2B764Cu;
    // 0x2b764c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B764Cu;
    {
        const bool branch_taken_0x2b764c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B764Cu;
        // 0x2b7650: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b764c) {
            ctx->pc = 0x2B766Cu;
            goto label_2b766c;
        }
    }
    ctx->pc = 0x2B7654u;
    // 0x2b7654: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7654u;
    {
        const bool branch_taken_0x2b7654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7654u;
        // 0x2b7658: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7654) {
            ctx->pc = 0x2B766Cu;
            goto label_2b766c;
        }
    }
    ctx->pc = 0x2B765Cu;
    // 0x2b765c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B765Cu;
    {
        const bool branch_taken_0x2b765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B765Cu;
        // 0x2b7660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b765c) {
            ctx->pc = 0x2B7670u;
            goto label_2b7670;
        }
    }
    ctx->pc = 0x2B7664u;
    // 0x2b7664: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7664u;
    {
        const bool branch_taken_0x2b7664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7664u;
        // 0x2b7668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7664) {
            ctx->pc = 0x2B7670u;
            goto label_2b7670;
        }
    }
    ctx->pc = 0x2B766Cu;
label_2b766c:
    // 0x2b766c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7670:
    // 0x2b7670: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7670u;
    {
        const bool branch_taken_0x2b7670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7670u;
        // 0x2b7674: 0x25060001  addiu       $a2, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7670) {
            ctx->pc = 0x2B7680u;
            goto label_2b7680;
        }
    }
    ctx->pc = 0x2B7678u;
    // 0x2b7678: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2B7678u;
    {
        const bool branch_taken_0x2b7678 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7678) {
            ctx->pc = 0x2B76B8u;
            goto label_2b76b8;
        }
    }
    ctx->pc = 0x2B7680u;
label_2b7680:
    // 0x2b7680: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7684: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2b7684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2b7688: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x2b768c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2b768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2b7690: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b7690u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7694: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7694u;
    {
        const bool branch_taken_0x2b7694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7694u;
        // 0x2b7698: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7694) {
            ctx->pc = 0x2B76C0u;
            goto label_2b76c0;
        }
    }
    ctx->pc = 0x2B769Cu;
    // 0x2b769c: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x2b769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x2b76a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b76a4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2b76a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b76a8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2B76A8u;
    {
        const bool branch_taken_0x2b76a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b76a8) {
            ctx->pc = 0x2B76ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B76A8u;
            // 0x2b76ac: 0xe81821  addu        $v1, $a3, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7620;
        }
    }
    ctx->pc = 0x2B76B0u;
    // 0x2b76b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B76B0u;
    {
        const bool branch_taken_0x2b76b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76B0u;
        // 0x2b76b4: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76b0) {
            ctx->pc = 0x2B76C4u;
            goto label_2b76c4;
        }
    }
    ctx->pc = 0x2B76B8u;
label_2b76b8:
    // 0x2b76b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B76B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76B8u;
        // 0x2b76bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B76B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B76C0u;
label_2b76c0:
    // 0x2b76c0: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2b76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2b76c4:
    // 0x2b76c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b76c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b76c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2b76cc:
    // 0x2b76cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B76CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B76CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B76D4u;
    // 0x2b76d4: 0x0  nop
    ctx->pc = 0x2b76d4u;
    // NOP
    ctx->pc = 0x2b76d8u;
}
