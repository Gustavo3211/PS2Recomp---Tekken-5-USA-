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

// Function: sub_00342168
// Address: 0x342168 - 0x3421c0
void sub_00342168_0x342168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342168_0x342168");
#endif

    switch (ctx->pc) {
        case 0x34217cu: goto label_34217c;
        case 0x342184u: goto label_342184;
        case 0x34218cu: goto label_34218c;
        case 0x342194u: goto label_342194;
        case 0x34219cu: goto label_34219c;
        case 0x3421a4u: goto label_3421a4;
        case 0x3421acu: goto label_3421ac;
        default: break;
    }

    ctx->pc = 0x342168u;

    // 0x342168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34216c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342174: 0xc0d080a  jal         func_342028
    ctx->pc = 0x342174u;
    SET_GPR_U32(ctx, 31, 0x34217Cu);
    ctx->pc = 0x342178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342174u;
    // 0x342178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x342174u, 0x34217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34217Cu;
label_34217c:
    // 0x34217c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34217Cu;
    SET_GPR_U32(ctx, 31, 0x342184u);
    ctx->pc = 0x342180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34217Cu;
    // 0x342180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34217Cu, 0x342184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342184u;
label_342184:
    // 0x342184: 0xc0d0786  jal         func_341E18
    ctx->pc = 0x342184u;
    SET_GPR_U32(ctx, 31, 0x34218Cu);
    ctx->pc = 0x342188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342184u;
    // 0x342188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E18u, 0x342184u, 0x34218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34218Cu;
label_34218c:
    // 0x34218c: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x34218Cu;
    SET_GPR_U32(ctx, 31, 0x342194u);
    ctx->pc = 0x342190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34218Cu;
    // 0x342190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x34218Cu, 0x342194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342194u;
label_342194:
    // 0x342194: 0xc0d0818  jal         func_342060
    ctx->pc = 0x342194u;
    SET_GPR_U32(ctx, 31, 0x34219Cu);
    ctx->pc = 0x342198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342194u;
    // 0x342198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x342194u, 0x34219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34219Cu;
label_34219c:
    // 0x34219c: 0xc0d0824  jal         func_342090
    ctx->pc = 0x34219Cu;
    SET_GPR_U32(ctx, 31, 0x3421A4u);
    ctx->pc = 0x3421A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34219Cu;
    // 0x3421a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x34219Cu, 0x3421A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421A4u;
label_3421a4:
    // 0x3421a4: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x3421A4u;
    SET_GPR_U32(ctx, 31, 0x3421ACu);
    ctx->pc = 0x3421A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421A4u;
    // 0x3421a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x3421A4u, 0x3421ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421ACu;
label_3421ac:
    // 0x3421ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3421acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3421b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3421b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3421b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3421B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3421B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421B4u;
        // 0x3421b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3421B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3421BCu;
    // 0x3421bc: 0x0  nop
    ctx->pc = 0x3421bcu;
    // NOP
    ctx->pc = 0x3421c0u;
}
