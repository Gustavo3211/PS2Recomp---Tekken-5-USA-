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

// Function: sub_004A9C70
// Address: 0x4a9c70 - 0x4a9d50
void sub_004A9C70_0x4a9c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9C70_0x4a9c70");
#endif

    switch (ctx->pc) {
        case 0x4a9d08u: goto label_4a9d08;
        case 0x4a9d10u: goto label_4a9d10;
        default: break;
    }

    ctx->pc = 0x4a9c70u;

    // 0x4a9c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a9c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a9c74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a9c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a9c78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a9c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a9c7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a9c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a9c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a9c84: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4a9c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a9c88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a9c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a9c8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a9c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c90: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a9c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a9c94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a9c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a9c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a9c9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4a9c9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ca0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4a9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4a9ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ca8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a9cac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4a9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a9cb0: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4a9cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a9cb4: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4a9cb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9cb8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4a9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4a9cbc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4a9cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4a9cc0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a9cc4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4a9cc4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4a9cc8: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a9cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9ccc: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x4a9cccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9cd0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4a9cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a9cd4: 0x86700000  lh          $s0, 0x0($s3)
    ctx->pc = 0x4a9cd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a9cd8: 0x1104018  mult        $t0, $t0, $s0
    ctx->pc = 0x4a9cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4a9cdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a9ce0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4a9ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9ce4: 0x72038018  mult1       $s0, $s0, $v1
    ctx->pc = 0x4a9ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4a9ce8: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x4a9ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4a9cec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4a9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4a9cf0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4a9cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4a9cf4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a9cf8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4a9cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4a9cfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a9d00: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A9D00u;
    SET_GPR_U32(ctx, 31, 0x4A9D08u);
    ctx->pc = 0x4A9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9D00u;
    // 0x4a9d04: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A9D00u, 0x4A9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9D08u;
label_4a9d08:
    // 0x4a9d08: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A9D08u;
    SET_GPR_U32(ctx, 31, 0x4A9D10u);
    ctx->pc = 0x4A9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9D08u;
    // 0x4a9d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A9D08u, 0x4A9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9D10u;
label_4a9d10:
    // 0x4a9d10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a9d14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9d18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a9d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9d1c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4a9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4a9d20: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4a9d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a9d24: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4a9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4a9d28: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a9d28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9d2c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x4a9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x4a9d30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a9d30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9d34: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x4a9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x4a9d38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a9d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9d3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a9d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a9d40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a9d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a9d44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a9d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a9d48: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D48u;
        // 0x4a9d4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9D50u;
}
