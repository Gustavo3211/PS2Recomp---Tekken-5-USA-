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

// Function: sub_0030E5E0
// Address: 0x30e5e0 - 0x30e738
void sub_0030E5E0_0x30e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E5E0_0x30e5e0");
#endif

    switch (ctx->pc) {
        case 0x30e608u: goto label_30e608;
        case 0x30e694u: goto label_30e694;
        case 0x30e6f0u: goto label_30e6f0;
        default: break;
    }

    ctx->pc = 0x30e5e0u;

    // 0x30e5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30e5e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30e5ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e5f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30e5f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e5f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30e5fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e600: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30e600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30e604: 0x0  nop
    ctx->pc = 0x30e604u;
    // NOP
label_30e608:
    // 0x30e608: 0x3c0210ab  lui         $v0, 0x10AB
    ctx->pc = 0x30e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4267 << 16));
    // 0x30e60c: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30e60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e610: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e614: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30e614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30e618: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e61c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x30e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e624: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x30e624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e628: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30e62c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x30e62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30e630: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e634: 0x26112020  addiu       $s1, $s0, 0x2020
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8224));
    // 0x30e638: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x30e638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30e63c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30e640: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x30e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30e644: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30e644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30e648: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30e648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30e64c: 0x26112030  addiu       $s1, $s0, 0x2030
    ctx->pc = 0x30e64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8240));
    // 0x30e650: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e650u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e654: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e654u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e658: 0x26112040  addiu       $s1, $s0, 0x2040
    ctx->pc = 0x30e658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8256));
    // 0x30e65c: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30e660: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e660u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e664: 0x26112050  addiu       $s1, $s0, 0x2050
    ctx->pc = 0x30e664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8272));
    // 0x30e668: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x30e668u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x30e66c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e670: 0x26112060  addiu       $s1, $s0, 0x2060
    ctx->pc = 0x30e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8288));
    // 0x30e674: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x30e674u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x30e678: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e678u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e67c: 0x26112070  addiu       $s1, $s0, 0x2070
    ctx->pc = 0x30e67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8304));
    // 0x30e680: 0xfe2a0008  sd          $t2, 0x8($s1)
    ctx->pc = 0x30e680u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 10));
    // 0x30e684: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x30e684u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
    // 0x30e688: 0x26112080  addiu       $s1, $s0, 0x2080
    ctx->pc = 0x30e688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8320));
    // 0x30e68c: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30E68Cu;
    SET_GPR_U32(ctx, 31, 0x30E694u);
    ctx->pc = 0x30E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E68Cu;
    // 0x30e690: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30E68Cu, 0x30E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E694u;
label_30e694:
    // 0x30e694: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30e698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e69c: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x30e69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30e6a0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30e6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30e6a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e6a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30e6ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e6b0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x30e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30e6b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30e6b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e6bc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e6c0: 0x26112090  addiu       $s1, $s0, 0x2090
    ctx->pc = 0x30e6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8336));
    // 0x30e6c4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x30e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30e6c8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x30e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x30e6cc: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e6d0: 0x261120a0  addiu       $s1, $s0, 0x20A0
    ctx->pc = 0x30e6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8352));
    // 0x30e6d4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x30e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30e6d8: 0x3c032400  lui         $v1, 0x2400
    ctx->pc = 0x30e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9216 << 16));
    // 0x30e6dc: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x30e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x30e6e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30e6e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30e6e8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x30e6ec: 0x261120b0  addiu       $s1, $s0, 0x20B0
    ctx->pc = 0x30e6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8368));
label_30e6f0:
    // 0x30e6f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30e6f4: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30e6f8: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e6fc: 0x0  nop
    ctx->pc = 0x30e6fcu;
    // NOP
    // 0x30e700: 0x0  nop
    ctx->pc = 0x30e700u;
    // NOP
    // 0x30e704: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30E704u;
    {
        const bool branch_taken_0x30e704 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E704u;
        // 0x30e708: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e704) {
            ctx->pc = 0x30E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e6f0;
        }
    }
    ctx->pc = 0x30E70Cu;
    // 0x30e70c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e710: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30e710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e714: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x30E714u;
    {
        const bool branch_taken_0x30e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E714u;
        // 0x30e718: 0x241022c0  addiu       $s0, $zero, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e714) {
            ctx->pc = 0x30E608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e608;
        }
    }
    ctx->pc = 0x30E71Cu;
    // 0x30e71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30e71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30e720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30e724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e728: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30e728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30e72c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e730: 0x3e00008  jr          $ra
    ctx->pc = 0x30E730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E730u;
        // 0x30e734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E738u;
}
