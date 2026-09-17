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

// Function: sub_004AE2A0
// Address: 0x4ae2a0 - 0x4ae358
void sub_004AE2A0_0x4ae2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE2A0_0x4ae2a0");
#endif

    switch (ctx->pc) {
        case 0x4ae324u: goto label_4ae324;
        case 0x4ae32cu: goto label_4ae32c;
        default: break;
    }

    ctx->pc = 0x4ae2a0u;

    // 0x4ae2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae2a4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ae2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ae2a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ae2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ae2ac: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x4ae2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4ae2b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ae2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ae2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ae2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ae2bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ae2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ae2c4: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ae2c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ae2c8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ae2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ae2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ae2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ae2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae2d4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4ae2d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4ae2d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ae2dc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4ae2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ae2e0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4ae2e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ae2e4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ae2e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae2e8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4ae2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ae2ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ae2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae2f0: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4ae2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ae2f4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4ae2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4ae2f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ae2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ae2fc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ae2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae300: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x4ae300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ae304: 0x70c33018  mult1       $a2, $a2, $v1
    ctx->pc = 0x4ae304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ae308: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x4ae308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4ae30c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4ae30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ae310: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ae310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ae314: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4ae314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4ae318: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ae318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ae31c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE31Cu;
    SET_GPR_U32(ctx, 31, 0x4AE324u);
    ctx->pc = 0x4AE320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE31Cu;
    // 0x4ae320: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE31Cu, 0x4AE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE324u;
label_4ae324:
    // 0x4ae324: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE324u;
    SET_GPR_U32(ctx, 31, 0x4AE32Cu);
    ctx->pc = 0x4AE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE324u;
    // 0x4ae328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE324u, 0x4AE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE32Cu;
label_4ae32c:
    // 0x4ae32c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ae330: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ae330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae334: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ae334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ae338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ae33c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ae33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae340: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ae340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ae344: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4ae344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ae348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae34c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE34Cu;
        // 0x4ae350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE354u;
    // 0x4ae354: 0x0  nop
    ctx->pc = 0x4ae354u;
    // NOP
    ctx->pc = 0x4ae358u;
}
