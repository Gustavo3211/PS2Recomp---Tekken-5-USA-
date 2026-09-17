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

// Function: sub_00504678
// Address: 0x504678 - 0x504738
void sub_00504678_0x504678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504678_0x504678");
#endif

    switch (ctx->pc) {
        case 0x5046fcu: goto label_5046fc;
        case 0x504704u: goto label_504704;
        default: break;
    }

    ctx->pc = 0x504678u;

    // 0x504678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x504678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50467c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x50467cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504680: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x504680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x504684: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x504684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x504688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x50468c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x50468cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504690: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x504690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x504694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x504694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504698: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x504698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x50469c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x50469cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5046a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x5046a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x5046a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5046a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5046a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5046a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5046ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5046acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5046b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x5046b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5046b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5046b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5046b8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x5046b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x5046bc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x5046bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5046c0: 0x85020022  lh          $v0, 0x22($t0)
    ctx->pc = 0x5046c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 34)));
    // 0x5046c4: 0x85070020  lh          $a3, 0x20($t0)
    ctx->pc = 0x5046c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x5046c8: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x5046c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5046cc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x5046ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5046d0: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x5046d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x5046d4: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x5046d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5046d8: 0x70c73018  mult1       $a2, $a2, $a3
    ctx->pc = 0x5046d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x5046dc: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x5046dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x5046e0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x5046e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x5046e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x5046e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x5046e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5046e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5046ec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x5046ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x5046f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5046f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5046f4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5046F4u;
    SET_GPR_U32(ctx, 31, 0x5046FCu);
    ctx->pc = 0x5046F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5046F4u;
    // 0x5046f8: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5046F4u, 0x5046FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5046FCu;
label_5046fc:
    // 0x5046fc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5046FCu;
    SET_GPR_U32(ctx, 31, 0x504704u);
    ctx->pc = 0x504700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5046FCu;
    // 0x504700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5046FCu, 0x504704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504704u;
label_504704:
    // 0x504704: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x504704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504708: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x504708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50470c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x50470cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504710: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x504710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x504714: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x504714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x504718: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x504718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x50471c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x50471cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x504720: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x504720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x504724: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x504724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x504728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50472c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x50472cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504730: 0x3e00008  jr          $ra
    ctx->pc = 0x504730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504730u;
        // 0x504734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x504730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504738u;
}
