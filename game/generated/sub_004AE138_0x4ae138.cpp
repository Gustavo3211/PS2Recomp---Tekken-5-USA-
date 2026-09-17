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

// Function: sub_004AE138
// Address: 0x4ae138 - 0x4ae1e8
void sub_004AE138_0x4ae138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE138_0x4ae138");
#endif

    switch (ctx->pc) {
        case 0x4ae1b8u: goto label_4ae1b8;
        case 0x4ae1c0u: goto label_4ae1c0;
        default: break;
    }

    ctx->pc = 0x4ae138u;

    // 0x4ae138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae13c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ae13cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ae140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ae140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ae144: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x4ae144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4ae148: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ae148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ae14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae150: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ae150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ae154: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ae154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae158: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ae158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ae15c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ae15cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ae160: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ae160u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ae164: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4ae164u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4ae168: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ae168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae16c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae170: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4ae170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4ae174: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ae174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ae178: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ae178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ae17c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ae17cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ae180: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4ae180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ae184: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4ae184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae188: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ae188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae18c: 0x70872818  mult1       $a1, $a0, $a3
    ctx->pc = 0x4ae18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ae190: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x4ae190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ae194: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x4ae194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ae198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ae198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae19c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4ae19cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ae1a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ae1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ae1a4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ae1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4ae1a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ae1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ae1ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ae1b0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE1B0u;
    SET_GPR_U32(ctx, 31, 0x4AE1B8u);
    ctx->pc = 0x4AE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE1B0u;
    // 0x4ae1b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE1B0u, 0x4AE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE1B8u;
label_4ae1b8:
    // 0x4ae1b8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE1B8u;
    SET_GPR_U32(ctx, 31, 0x4AE1C0u);
    ctx->pc = 0x4AE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE1B8u;
    // 0x4ae1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE1B8u, 0x4AE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE1C0u;
label_4ae1c0:
    // 0x4ae1c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4ae1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ae1c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ae1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae1c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ae1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae1cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ae1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ae1d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ae1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae1d4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ae1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ae1d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4ae1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae1dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ae1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE1E0u;
        // 0x4ae1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE1E8u;
}
