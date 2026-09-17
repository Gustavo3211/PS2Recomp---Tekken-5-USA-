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

// Function: sub_005045B0
// Address: 0x5045b0 - 0x504678
void sub_005045B0_0x5045b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005045B0_0x5045b0");
#endif

    switch (ctx->pc) {
        case 0x504638u: goto label_504638;
        case 0x504640u: goto label_504640;
        default: break;
    }

    ctx->pc = 0x5045b0u;

    // 0x5045b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5045b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5045b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x5045b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5045b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5045b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5045bc: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x5045bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5045c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5045c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5045c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5045c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5045c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5045c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5045cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x5045ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5045d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x5045d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x5045d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x5045d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5045d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x5045d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x5045dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5045dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5045e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5045e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5045e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x5045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5045e8: 0x8503001e  lh          $v1, 0x1E($t0)
    ctx->pc = 0x5045e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x5045ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5045ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5045f0: 0x87a70000  lh          $a3, 0x0($sp)
    ctx->pc = 0x5045f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5045f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5045f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5045f8: 0xe33018  mult        $a2, $a3, $v1
    ctx->pc = 0x5045f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x5045fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x5045fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x504600: 0x8505001c  lh          $a1, 0x1C($t0)
    ctx->pc = 0x504600u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x504604: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x504604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x504608: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x504608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50460c: 0xe53818  mult        $a3, $a3, $a1
    ctx->pc = 0x50460cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x504610: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x504610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x504614: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x504614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x504618: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x504618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x50461c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x50461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x504620: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x504620u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x504624: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x504624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x504628: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x504628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50462c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50462cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x504630: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x504630u;
    SET_GPR_U32(ctx, 31, 0x504638u);
    ctx->pc = 0x504634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504630u;
    // 0x504634: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x504630u, 0x504638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504638u;
label_504638:
    // 0x504638: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x504638u;
    SET_GPR_U32(ctx, 31, 0x504640u);
    ctx->pc = 0x50463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504638u;
    // 0x50463c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x504638u, 0x504640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504640u;
label_504640:
    // 0x504640: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x504640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x504644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x504644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504648: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x504648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50464c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x50464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x504650: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x504650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504654: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x504654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x504658: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x504658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50465c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50465cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x504660: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x504660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504664: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x504664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x504668: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x504668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50466c: 0x3e00008  jr          $ra
    ctx->pc = 0x50466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50466Cu;
        // 0x504670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50466Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x504674u;
    // 0x504674: 0x0  nop
    ctx->pc = 0x504674u;
    // NOP
    ctx->pc = 0x504678u;
}
