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

// Function: sub_00369610
// Address: 0x369610 - 0x3696f8
void sub_00369610_0x369610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369610_0x369610");
#endif

    switch (ctx->pc) {
        case 0x369634u: goto label_369634;
        case 0x36964cu: goto label_36964c;
        default: break;
    }

    ctx->pc = 0x369610u;

    // 0x369610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369614: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36961c: 0x24506c18  addiu       $s0, $v0, 0x6C18
    ctx->pc = 0x36961cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27672));
    // 0x369620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369620u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C18u));
    // 0x369624: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369624u;
    {
        const bool branch_taken_0x369624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369624u;
        // 0x369628: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369624) {
            ctx->pc = 0x36964Cu;
            goto label_36964c;
        }
    }
    ctx->pc = 0x36962Cu;
    // 0x36962c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36962Cu;
    SET_GPR_U32(ctx, 31, 0x369634u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36962Cu, 0x369634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369634u;
label_369634:
    // 0x369634: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369638: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36963c: 0x24a52f70  addiu       $a1, $a1, 0x2F70
    ctx->pc = 0x36963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12144));
    // 0x369640: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x369640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x369644: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369644u;
    SET_GPR_U32(ctx, 31, 0x36964Cu);
    ctx->pc = 0x369648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369644u;
    // 0x369648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369644u, 0x36964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36964Cu;
label_36964c:
    // 0x36964c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36964cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369658: 0x3e00008  jr          $ra
    ctx->pc = 0x369658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369658u;
        // 0x36965c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369660u;
    // 0x369660: 0x2484006c  addiu       $a0, $a0, 0x6C
    ctx->pc = 0x369660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x369664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369668u;
    {
        const bool branch_taken_0x369668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369668u;
        // 0x36966c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369668) {
            ctx->pc = 0x369680u;
            goto label_369680;
        }
    }
    ctx->pc = 0x369670u;
    // 0x369670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369674: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369678: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369678u;
    {
        const bool branch_taken_0x369678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369678) {
            ctx->pc = 0x36968Cu;
            goto label_36968c;
        }
    }
    ctx->pc = 0x369680u;
label_369680:
    // 0x369680: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369688: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36968c:
    // 0x36968c: 0x3e00008  jr          $ra
    ctx->pc = 0x36968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36968Cu;
        // 0x369690: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369694u;
    // 0x369694: 0x0  nop
    ctx->pc = 0x369694u;
    // NOP
    // 0x369698: 0x3e00008  jr          $ra
    ctx->pc = 0x369698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369698u;
        // 0x36969c: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696A0u;
    // 0x3696a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3696A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3696A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696A0u;
        // 0x3696a4: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3696A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696A8u;
    // 0x3696a8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3696ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3696acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3696b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3696B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3696B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696B0u;
        // 0x3696b4: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3696B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696B8u;
    // 0x3696b8: 0x24840055  addiu       $a0, $a0, 0x55
    ctx->pc = 0x3696b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x3696bc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3696bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3696c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3696C0u;
    {
        const bool branch_taken_0x3696c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3696C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696C0u;
        // 0x3696c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696c0) {
            ctx->pc = 0x3696CCu;
            goto label_3696cc;
        }
    }
    ctx->pc = 0x3696C8u;
    // 0x3696c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3696c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3696cc:
    // 0x3696cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3696CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3696CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696D4u;
    // 0x3696d4: 0x0  nop
    ctx->pc = 0x3696d4u;
    // NOP
    // 0x3696d8: 0x24840051  addiu       $a0, $a0, 0x51
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 81));
    // 0x3696dc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3696dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3696e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3696E0u;
    {
        const bool branch_taken_0x3696e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3696E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696E0u;
        // 0x3696e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696e0) {
            ctx->pc = 0x3696ECu;
            goto label_3696ec;
        }
    }
    ctx->pc = 0x3696E8u;
    // 0x3696e8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3696e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3696ec:
    // 0x3696ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3696ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3696ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3696F4u;
    // 0x3696f4: 0x0  nop
    ctx->pc = 0x3696f4u;
    // NOP
    ctx->pc = 0x3696f8u;
}
