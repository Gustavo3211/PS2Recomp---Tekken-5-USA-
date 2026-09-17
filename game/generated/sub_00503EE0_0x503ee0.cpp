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

// Function: sub_00503EE0
// Address: 0x503ee0 - 0x503fc0
void sub_00503EE0_0x503ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503EE0_0x503ee0");
#endif

    switch (ctx->pc) {
        case 0x503f78u: goto label_503f78;
        case 0x503f80u: goto label_503f80;
        default: break;
    }

    ctx->pc = 0x503ee0u;

    // 0x503ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x503ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x503ee4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x503ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x503ee8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x503ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x503eec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x503eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x503ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x503ef4: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x503ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x503ef8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x503ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x503efc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x503efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503f00: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x503f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x503f04: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x503f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503f08: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x503f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x503f0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x503f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503f10: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x503f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x503f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x503f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503f18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x503f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x503f1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x503f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x503f20: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x503f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x503f24: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x503f24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x503f28: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x503f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x503f2c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x503f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x503f30: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x503f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x503f34: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x503f34u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x503f38: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x503f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503f3c: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x503f3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x503f40: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x503f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x503f44: 0x86700000  lh          $s0, 0x0($s3)
    ctx->pc = 0x503f44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x503f48: 0x1104018  mult        $t0, $t0, $s0
    ctx->pc = 0x503f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x503f4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x503f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x503f50: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x503f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x503f54: 0x72038018  mult1       $s0, $s0, $v1
    ctx->pc = 0x503f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x503f58: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x503f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x503f5c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x503f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x503f60: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x503f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x503f64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x503f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x503f68: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x503f68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x503f6c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x503f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x503f70: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x503F70u;
    SET_GPR_U32(ctx, 31, 0x503F78u);
    ctx->pc = 0x503F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503F70u;
    // 0x503f74: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x503F70u, 0x503F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503F78u;
label_503f78:
    // 0x503f78: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x503F78u;
    SET_GPR_U32(ctx, 31, 0x503F80u);
    ctx->pc = 0x503F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503F78u;
    // 0x503f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x503F78u, 0x503F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503F80u;
label_503f80:
    // 0x503f80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x503f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x503f84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x503f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503f88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x503f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x503f8c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x503f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x503f90: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x503f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x503f94: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x503f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x503f98: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x503f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x503f9c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x503f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x503fa0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x503fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x503fa4: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x503fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x503fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x503fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503fac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x503facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x503fb0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x503fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x503fb4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x503fb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x503fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x503FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503FB8u;
        // 0x503fbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503FC0u;
}
