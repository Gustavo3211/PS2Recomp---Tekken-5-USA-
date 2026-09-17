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

// Function: sub_002465A0
// Address: 0x2465a0 - 0x246680
void sub_002465A0_0x2465a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002465A0_0x2465a0");
#endif

    switch (ctx->pc) {
        case 0x2465e8u: goto label_2465e8;
        case 0x2465f8u: goto label_2465f8;
        case 0x246604u: goto label_246604;
        case 0x246610u: goto label_246610;
        case 0x24662cu: goto label_24662c;
        default: break;
    }

    ctx->pc = 0x2465a0u;

    // 0x2465a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2465a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2465a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2465a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2465a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2465a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2465acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2465b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2465b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2465b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2465b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2465b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2465bc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2465bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2465c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2465c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2465c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2465c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2465c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2465c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2465cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2465ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2465d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2465d4: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x2465d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2465d8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2465d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2465dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2465dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2465e0: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x2465E0u;
    SET_GPR_U32(ctx, 31, 0x2465E8u);
    ctx->pc = 0x2465E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465E0u;
    // 0x2465e4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x2465E0u, 0x2465E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465E8u;
label_2465e8:
    // 0x2465e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2465e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465ec: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2465ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2465f0: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x2465F0u;
    SET_GPR_U32(ctx, 31, 0x2465F8u);
    ctx->pc = 0x2465F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465F0u;
    // 0x2465f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x2465F0u, 0x2465F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465F8u;
label_2465f8:
    // 0x2465f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2465f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465fc: 0xc091726  jal         func_245C98
    ctx->pc = 0x2465FCu;
    SET_GPR_U32(ctx, 31, 0x246604u);
    ctx->pc = 0x246600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465FCu;
    // 0x246600: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x2465FCu, 0x246604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246604u;
label_246604:
    // 0x246604: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x246604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246608: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x24660c: 0x0  nop
    ctx->pc = 0x24660cu;
    // NOP
label_246610:
    // 0x246610: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x246610u;
    {
        const bool branch_taken_0x246610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246610) {
            ctx->pc = 0x246614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246610u;
            // 0x246614: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24664Cu;
            goto label_24664c;
        }
    }
    ctx->pc = 0x246618u;
    // 0x246618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24661c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24661cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x246620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246624: 0xc091704  jal         func_245C10
    ctx->pc = 0x246624u;
    SET_GPR_U32(ctx, 31, 0x24662Cu);
    ctx->pc = 0x246628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246624u;
    // 0x246628: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246624u, 0x24662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24662Cu;
label_24662c:
    // 0x24662c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24662Cu;
    {
        const bool branch_taken_0x24662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24662c) {
            ctx->pc = 0x246630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24662Cu;
            // 0x246630: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24664Cu;
            goto label_24664c;
        }
    }
    ctx->pc = 0x246634u;
    // 0x246634: 0x52570001  beql        $s2, $s7, . + 4 + (0x1 << 2)
    ctx->pc = 0x246634u;
    {
        const bool branch_taken_0x246634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x246634) {
            ctx->pc = 0x246638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246634u;
            // 0x246638: 0x8c530064  lw          $s3, 0x64($v0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24663Cu;
            goto label_24663c;
        }
    }
    ctx->pc = 0x24663Cu;
label_24663c:
    // 0x24663c: 0x5676fff4  bnel        $s3, $s6, . + 4 + (-0xC << 2)
    ctx->pc = 0x24663Cu;
    {
        const bool branch_taken_0x24663c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x24663c) {
            ctx->pc = 0x246640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24663Cu;
            // 0x246640: 0x214102a  slt         $v0, $s0, $s4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246610;
        }
    }
    ctx->pc = 0x246644u;
    // 0x246644: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x246644u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246648: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x246648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24664c:
    // 0x24664c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24664cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x246658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24665c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24665cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x246660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x246664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x246664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246668: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x246668u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24666c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x24666cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246670: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x246670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x246674: 0x3e00008  jr          $ra
    ctx->pc = 0x246674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246674u;
        // 0x246678: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24667Cu;
    // 0x24667c: 0x0  nop
    ctx->pc = 0x24667cu;
    // NOP
    ctx->pc = 0x246680u;
}
