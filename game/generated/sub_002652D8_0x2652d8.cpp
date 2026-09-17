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

// Function: sub_002652D8
// Address: 0x2652d8 - 0x2653a0
void sub_002652D8_0x2652d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002652D8_0x2652d8");
#endif

    switch (ctx->pc) {
        case 0x265308u: goto label_265308;
        case 0x265340u: goto label_265340;
        case 0x26536cu: goto label_26536c;
        case 0x265374u: goto label_265374;
        default: break;
    }

    ctx->pc = 0x2652d8u;

    // 0x2652d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2652d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2652dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2652e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2652e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2652e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2652e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2652e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2652e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2652ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2652ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2652f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2652f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2652f4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2652f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2652f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2652f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2652fc: 0x245388d0  addiu       $s3, $v0, -0x7730
    ctx->pc = 0x2652fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x265300: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x265300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x265304: 0x0  nop
    ctx->pc = 0x265304u;
    // NOP
label_265308:
    // 0x265308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26530c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x26530cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x265310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x265314: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x265314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x265318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265318u;
    {
        const bool branch_taken_0x265318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265318u;
        // 0x26531c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265318) {
            ctx->pc = 0x265328u;
            goto label_265328;
        }
    }
    ctx->pc = 0x265320u;
    // 0x265320: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x265320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x265324: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x265324u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_265328:
    // 0x265328: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265328u;
    {
        const bool branch_taken_0x265328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x265328) {
            ctx->pc = 0x265338u;
            goto label_265338;
        }
    }
    ctx->pc = 0x265330u;
    // 0x265330: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x265330u;
    {
        const bool branch_taken_0x265330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265330u;
        // 0x265334: 0xa06001bd  sb          $zero, 0x1BD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 445), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265330) {
            ctx->pc = 0x265374u;
            goto label_265374;
        }
    }
    ctx->pc = 0x265338u;
label_265338:
    // 0x265338: 0xc0a108e  jal         func_284238
    ctx->pc = 0x265338u;
    SET_GPR_U32(ctx, 31, 0x265340u);
    ctx->pc = 0x284238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284238u, 0x265338u, 0x265340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265340u;
label_265340:
    // 0x265340: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x265340u;
    {
        const bool branch_taken_0x265340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x265340) {
            ctx->pc = 0x265344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265340u;
            // 0x265344: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265354u;
            goto label_265354;
        }
    }
    ctx->pc = 0x265348u;
    // 0x265348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x265348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26534c: 0xa04001bd  sb          $zero, 0x1BD($v0)
    ctx->pc = 0x26534cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 445), (uint8_t)GPR_U32(ctx, 0));
    // 0x265350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_265354:
    // 0x265354: 0x906201bd  lbu         $v0, 0x1BD($v1)
    ctx->pc = 0x265354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 445)));
    // 0x265358: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x265358u;
    {
        const bool branch_taken_0x265358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265358) {
            ctx->pc = 0x26535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265358u;
            // 0x26535c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265378u;
            goto label_265378;
        }
    }
    ctx->pc = 0x265360u;
    // 0x265360: 0x84650042  lh          $a1, 0x42($v1)
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x265364: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x265364u;
    SET_GPR_U32(ctx, 31, 0x26536Cu);
    ctx->pc = 0x265368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265364u;
    // 0x265368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x265364u, 0x26536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26536Cu;
label_26536c:
    // 0x26536c: 0xc0b2446  jal         func_2C9118
    ctx->pc = 0x26536Cu;
    SET_GPR_U32(ctx, 31, 0x265374u);
    ctx->pc = 0x265370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26536Cu;
    // 0x265370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9118u, 0x26536Cu, 0x265374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265374u;
label_265374:
    // 0x265374: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_265378:
    // 0x265378: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x265378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26537c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x26537Cu;
    {
        const bool branch_taken_0x26537c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26537c) {
            ctx->pc = 0x265380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26537Cu;
            // 0x265380: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265308;
        }
    }
    ctx->pc = 0x265384u;
    // 0x265384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x265388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26538c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26538cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x265390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x265394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265398: 0x3e00008  jr          $ra
    ctx->pc = 0x265398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265398u;
        // 0x26539c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2653A0u;
}
