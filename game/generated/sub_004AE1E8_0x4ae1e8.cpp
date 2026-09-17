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

// Function: sub_004AE1E8
// Address: 0x4ae1e8 - 0x4ae2a0
void sub_004AE1E8_0x4ae1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE1E8_0x4ae1e8");
#endif

    switch (ctx->pc) {
        case 0x4ae26cu: goto label_4ae26c;
        case 0x4ae274u: goto label_4ae274;
        default: break;
    }

    ctx->pc = 0x4ae1e8u;

    // 0x4ae1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae1ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ae1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ae1f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ae1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ae1f4: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x4ae1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4ae1f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ae1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ae1fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae200: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ae200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ae204: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ae204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae208: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ae208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ae20c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4ae20cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4ae210: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ae210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ae214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ae214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae218: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ae218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae21c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4ae21cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4ae220: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ae220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ae224: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4ae224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ae228: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4ae228u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ae22c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4ae22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae230: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4ae230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ae234: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ae234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae238: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4ae238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ae23c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4ae23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4ae240: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ae240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ae244: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ae244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae248: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x4ae248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ae24c: 0x70c33018  mult1       $a2, $a2, $v1
    ctx->pc = 0x4ae24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ae250: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x4ae250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4ae254: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4ae254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ae258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ae258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ae25c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4ae25cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4ae260: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ae260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ae264: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE264u;
    SET_GPR_U32(ctx, 31, 0x4AE26Cu);
    ctx->pc = 0x4AE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE264u;
    // 0x4ae268: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE264u, 0x4AE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE26Cu;
label_4ae26c:
    // 0x4ae26c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE26Cu;
    SET_GPR_U32(ctx, 31, 0x4AE274u);
    ctx->pc = 0x4AE270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE26Cu;
    // 0x4ae270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE26Cu, 0x4AE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE274u;
label_4ae274:
    // 0x4ae274: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4ae274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ae278: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ae278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae27c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ae27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae280: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ae284: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ae284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae288: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ae288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ae28c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4ae28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae290: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ae290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae294: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE294u;
        // 0x4ae298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE29Cu;
    // 0x4ae29c: 0x0  nop
    ctx->pc = 0x4ae29cu;
    // NOP
    ctx->pc = 0x4ae2a0u;
}
