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

// Function: sub_0030D550
// Address: 0x30d550 - 0x30d670
void sub_0030D550_0x30d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D550_0x30d550");
#endif

    switch (ctx->pc) {
        case 0x30d588u: goto label_30d588;
        case 0x30d5d0u: goto label_30d5d0;
        case 0x30d638u: goto label_30d638;
        default: break;
    }

    ctx->pc = 0x30d550u;

    // 0x30d550: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x30d550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d554: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x30d554u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x30d558: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x30d558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d55c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30d560: 0x3418d808  ori         $t8, $zero, 0xD808
    ctx->pc = 0x30d560u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55304);
    // 0x30d564: 0x18c37c  dsll32      $t8, $t8, 13
    ctx->pc = 0x30d564u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 13));
    // 0x30d568: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x30d568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30d56c: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30d570: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x30d574: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x30d574u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30d578: 0xe707c  dsll32      $t6, $t6, 1
    ctx->pc = 0x30d578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 1));
    // 0x30d57c: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d580: 0x248c4580  addiu       $t4, $a0, 0x4580
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30d584: 0x24830650  addiu       $v1, $a0, 0x650
    ctx->pc = 0x30d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
label_30d588:
    // 0x30d588: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30d58c: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30d590: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x30d590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x30d594: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x30d594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x30d598: 0x24830660  addiu       $v1, $a0, 0x660
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    // 0x30d59c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x30d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x30d5a0: 0x8f82cb90  lw          $v0, -0x3470($gp)
    ctx->pc = 0x30d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953872)));
    // 0x30d5a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d5a8: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x30d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x30d5ac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30d5b0: 0x24830670  addiu       $v1, $a0, 0x670
    ctx->pc = 0x30d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1648));
    // 0x30d5b4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d5b8: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x30d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x30d5bc: 0x24830680  addiu       $v1, $a0, 0x680
    ctx->pc = 0x30d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
    // 0x30d5c0: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30d5c4: 0xac6f0000  sw          $t7, 0x0($v1)
    ctx->pc = 0x30d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 15));
    // 0x30d5c8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x30d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x30d5cc: 0x24830690  addiu       $v1, $a0, 0x690
    ctx->pc = 0x30d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1680));
label_30d5d0:
    // 0x30d5d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d5d4: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30d5d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d5dc: 0x0  nop
    ctx->pc = 0x30d5dcu;
    // NOP
    // 0x30d5e0: 0x0  nop
    ctx->pc = 0x30d5e0u;
    // NOP
    // 0x30d5e4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D5E4u;
    {
        const bool branch_taken_0x30d5e4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5E4u;
        // 0x30d5e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5e4) {
            ctx->pc = 0x30D5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d5d0;
        }
    }
    ctx->pc = 0x30D5ECu;
    // 0x30d5ec: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x30d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x30d5f0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30d5f4: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x30d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x30d5f8: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30d5fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30d600: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x30d600u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x30d604: 0x8f82cb98  lw          $v0, -0x3468($gp)
    ctx->pc = 0x30d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953880)));
    // 0x30d608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d60c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30d610: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30d610u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30d614: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30d618: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d618u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d61c: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x30d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x30d620: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30d624: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x30d624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x30d628: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x30d628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x30d62c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30d630: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30d634: 0x0  nop
    ctx->pc = 0x30d634u;
    // NOP
label_30d638:
    // 0x30d638: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d63c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30d640: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d640u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d644: 0x0  nop
    ctx->pc = 0x30d644u;
    // NOP
    // 0x30d648: 0x0  nop
    ctx->pc = 0x30d648u;
    // NOP
    // 0x30d64c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D64Cu;
    {
        const bool branch_taken_0x30d64c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D64Cu;
        // 0x30d650: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d64c) {
            ctx->pc = 0x30D638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d638;
        }
    }
    ctx->pc = 0x30D654u;
    // 0x30d654: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30d658: 0x8c102a  slt         $v0, $a0, $t4
    ctx->pc = 0x30d658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x30d65c: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x30D65Cu;
    {
        const bool branch_taken_0x30d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d65c) {
            ctx->pc = 0x30D660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D65Cu;
            // 0x30d660: 0x24830650  addiu       $v1, $a0, 0x650 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d588;
        }
    }
    ctx->pc = 0x30D664u;
    // 0x30d664: 0x3e00008  jr          $ra
    ctx->pc = 0x30D664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D66Cu;
    // 0x30d66c: 0x0  nop
    ctx->pc = 0x30d66cu;
    // NOP
    ctx->pc = 0x30d670u;
}
