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

// Function: sub_00340860
// Address: 0x340860 - 0x3408c0
void sub_00340860_0x340860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340860_0x340860");
#endif

    switch (ctx->pc) {
        case 0x34088cu: goto label_34088c;
        case 0x340894u: goto label_340894;
        case 0x34089cu: goto label_34089c;
        case 0x3408a4u: goto label_3408a4;
        case 0x3408acu: goto label_3408ac;
        default: break;
    }

    ctx->pc = 0x340860u;

    // 0x340860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34086c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x340870: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x340870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x340874: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x340874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x340878: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x340878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34087c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x340880: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x340880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x340884: 0xc0d023c  jal         func_3408F0
    ctx->pc = 0x340884u;
    SET_GPR_U32(ctx, 31, 0x34088Cu);
    ctx->pc = 0x340888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340884u;
    // 0x340888: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408F0u, 0x340884u, 0x34088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34088Cu;
label_34088c:
    // 0x34088c: 0xc0d0274  jal         func_3409D0
    ctx->pc = 0x34088Cu;
    SET_GPR_U32(ctx, 31, 0x340894u);
    ctx->pc = 0x340890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34088Cu;
    // 0x340890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3409D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3409D0u, 0x34088Cu, 0x340894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340894u;
label_340894:
    // 0x340894: 0xc0d02b4  jal         func_340AD0
    ctx->pc = 0x340894u;
    SET_GPR_U32(ctx, 31, 0x34089Cu);
    ctx->pc = 0x340898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340894u;
    // 0x340898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AD0u, 0x340894u, 0x34089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34089Cu;
label_34089c:
    // 0x34089c: 0xc0d0280  jal         func_340A00
    ctx->pc = 0x34089Cu;
    SET_GPR_U32(ctx, 31, 0x3408A4u);
    ctx->pc = 0x3408A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34089Cu;
    // 0x3408a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A00u, 0x34089Cu, 0x3408A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408A4u;
label_3408a4:
    // 0x3408a4: 0xc0d0306  jal         func_340C18
    ctx->pc = 0x3408A4u;
    SET_GPR_U32(ctx, 31, 0x3408ACu);
    ctx->pc = 0x3408A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408A4u;
    // 0x3408a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340C18u, 0x3408A4u, 0x3408ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408ACu;
label_3408ac:
    // 0x3408ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3408acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3408b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3408b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3408b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3408b8: 0x80d0274  j           func_3409D0
    ctx->pc = 0x3408B8u;
    ctx->pc = 0x3408BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3408B8u;
    // 0x3408bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3409D0u;
    sub_003409D0_0x3409d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3408C0u;
}
