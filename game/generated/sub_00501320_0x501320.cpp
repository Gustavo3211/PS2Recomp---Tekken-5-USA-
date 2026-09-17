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

// Function: sub_00501320
// Address: 0x501320 - 0x501408
void sub_00501320_0x501320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501320_0x501320");
#endif

    switch (ctx->pc) {
        case 0x501374u: goto label_501374;
        case 0x501384u: goto label_501384;
        case 0x501394u: goto label_501394;
        case 0x5013b8u: goto label_5013b8;
        default: break;
    }

    ctx->pc = 0x501320u;

    // 0x501320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x501320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x501324: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x501324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x501328: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x501328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50132c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x50132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x501330: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x501330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501334: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x501334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x501338: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x501338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50133c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x50133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501340: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x501340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501344: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x501344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x501348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x501348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50134c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x50134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x501350: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x501350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501354: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x501354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x501358: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x501358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50135c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x50135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x501360: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x501360u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501364: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x501364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x501368: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x501368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x50136c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50136Cu;
    SET_GPR_U32(ctx, 31, 0x501374u);
    ctx->pc = 0x501370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50136Cu;
    // 0x501370: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50136Cu, 0x501374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501374u;
label_501374:
    // 0x501374: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x501374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x501378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x501378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50137c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50137Cu;
    SET_GPR_U32(ctx, 31, 0x501384u);
    ctx->pc = 0x501380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50137Cu;
    // 0x501380: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50137Cu, 0x501384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501384u;
label_501384:
    // 0x501384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x501384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501388: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x501388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x50138c: 0xc1401d2  jal         func_500748
    ctx->pc = 0x50138Cu;
    SET_GPR_U32(ctx, 31, 0x501394u);
    ctx->pc = 0x501390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50138Cu;
    // 0x501390: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500748u, 0x50138Cu, 0x501394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501394u;
label_501394:
    // 0x501394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x501394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x501398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50139c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x50139cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x5013a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013a4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x5013a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013a8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x5013a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013ac: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x5013acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013b0: 0xc140184  jal         func_500610
    ctx->pc = 0x5013B0u;
    SET_GPR_U32(ctx, 31, 0x5013B8u);
    ctx->pc = 0x5013B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5013B0u;
    // 0x5013b4: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500610u, 0x5013B0u, 0x5013B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5013B8u;
label_5013b8:
    // 0x5013b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x5013b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x5013bc: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x5013bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5013c0: 0x87a30014  lh          $v1, 0x14($sp)
    ctx->pc = 0x5013c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x5013c4: 0x87a40024  lh          $a0, 0x24($sp)
    ctx->pc = 0x5013c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x5013c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5013c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5013cc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x5013ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5013d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x5013d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x5013d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x5013d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5013d8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x5013d8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x5013dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x5013dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5013e0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x5013e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5013e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x5013e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5013e8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x5013e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x5013ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x5013ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5013f0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x5013f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x5013f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x5013f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5013f8: 0x1012  mflo        $v0
    ctx->pc = 0x5013f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x5013fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5013FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5013FCu;
        // 0x501400: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5013FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501404u;
    // 0x501404: 0x0  nop
    ctx->pc = 0x501404u;
    // NOP
    ctx->pc = 0x501408u;
}
