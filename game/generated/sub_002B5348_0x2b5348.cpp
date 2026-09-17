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

// Function: sub_002B5348
// Address: 0x2b5348 - 0x2b53d8
void sub_002B5348_0x2b5348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5348_0x2b5348");
#endif

    switch (ctx->pc) {
        case 0x2b5380u: goto label_2b5380;
        case 0x2b538cu: goto label_2b538c;
        case 0x2b53b8u: goto label_2b53b8;
        default: break;
    }

    ctx->pc = 0x2b5348u;

    // 0x2b5348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b534c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5358: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b5358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b535c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5360: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5364: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x2b5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5368: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b5368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b536c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x2b536cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2b5370: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5370u;
    {
        const bool branch_taken_0x2b5370 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5370u;
        // 0x2b5374: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5370) {
            ctx->pc = 0x2B53A0u;
            goto label_2b53a0;
        }
    }
    ctx->pc = 0x2B5378u;
    // 0x2b5378: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x2b5378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2b537c: 0x0  nop
    ctx->pc = 0x2b537cu;
    // NOP
label_2b5380:
    // 0x2b5380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5384: 0xc0ad66e  jal         func_2B59B8
    ctx->pc = 0x2B5384u;
    SET_GPR_U32(ctx, 31, 0x2B538Cu);
    ctx->pc = 0x2B5388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5384u;
    // 0x2b5388: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B59B8u, 0x2B5384u, 0x2B538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B538Cu;
label_2b538c:
    // 0x2b538c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5390: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2b5390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b5394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5398: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5398u;
    {
        const bool branch_taken_0x2b5398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5398u;
        // 0x2b539c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5398) {
            ctx->pc = 0x2B5380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5380;
        }
    }
    ctx->pc = 0x2B53A0u;
label_2b53a0:
    // 0x2b53a0: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x2b53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x2b53a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b53a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b53a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b53acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53b0: 0xc0ad4f6  jal         func_2B53D8
    ctx->pc = 0x2B53B0u;
    SET_GPR_U32(ctx, 31, 0x2B53B8u);
    ctx->pc = 0x2B53B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53B0u;
    // 0x2b53b4: 0x8c8500ac  lw          $a1, 0xAC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B53D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53D8u, 0x2B53B0u, 0x2B53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B53B8u;
label_2b53b8:
    // 0x2b53b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b53b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b53bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b53bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b53c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b53c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b53c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b53c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b53c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b53cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B53CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53CCu;
        // 0x2b53d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B53CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B53D4u;
    // 0x2b53d4: 0x0  nop
    ctx->pc = 0x2b53d4u;
    // NOP
    ctx->pc = 0x2b53d8u;
}
