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

// Function: sub_003422D8
// Address: 0x3422d8 - 0x342338
void sub_003422D8_0x3422d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003422D8_0x3422d8");
#endif

    switch (ctx->pc) {
        case 0x3422ecu: goto label_3422ec;
        case 0x3422f4u: goto label_3422f4;
        case 0x3422fcu: goto label_3422fc;
        case 0x342304u: goto label_342304;
        case 0x34230cu: goto label_34230c;
        case 0x342314u: goto label_342314;
        case 0x34231cu: goto label_34231c;
        case 0x342324u: goto label_342324;
        default: break;
    }

    ctx->pc = 0x3422d8u;

    // 0x3422d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3422d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3422dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3422dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3422e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3422e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3422e4: 0xc0d080a  jal         func_342028
    ctx->pc = 0x3422E4u;
    SET_GPR_U32(ctx, 31, 0x3422ECu);
    ctx->pc = 0x3422E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422E4u;
    // 0x3422e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x3422E4u, 0x3422ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422ECu;
label_3422ec:
    // 0x3422ec: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3422ECu;
    SET_GPR_U32(ctx, 31, 0x3422F4u);
    ctx->pc = 0x3422F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422ECu;
    // 0x3422f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3422ECu, 0x3422F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422F4u;
label_3422f4:
    // 0x3422f4: 0xc0d0786  jal         func_341E18
    ctx->pc = 0x3422F4u;
    SET_GPR_U32(ctx, 31, 0x3422FCu);
    ctx->pc = 0x3422F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422F4u;
    // 0x3422f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E18u, 0x3422F4u, 0x3422FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422FCu;
label_3422fc:
    // 0x3422fc: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x3422FCu;
    SET_GPR_U32(ctx, 31, 0x342304u);
    ctx->pc = 0x342300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422FCu;
    // 0x342300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x3422FCu, 0x342304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342304u;
label_342304:
    // 0x342304: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x342304u;
    SET_GPR_U32(ctx, 31, 0x34230Cu);
    ctx->pc = 0x342308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342304u;
    // 0x342308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x342304u, 0x34230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34230Cu;
label_34230c:
    // 0x34230c: 0xc0d0818  jal         func_342060
    ctx->pc = 0x34230Cu;
    SET_GPR_U32(ctx, 31, 0x342314u);
    ctx->pc = 0x342310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34230Cu;
    // 0x342310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x34230Cu, 0x342314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342314u;
label_342314:
    // 0x342314: 0xc0d0824  jal         func_342090
    ctx->pc = 0x342314u;
    SET_GPR_U32(ctx, 31, 0x34231Cu);
    ctx->pc = 0x342318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342314u;
    // 0x342318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x342314u, 0x34231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34231Cu;
label_34231c:
    // 0x34231c: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x34231Cu;
    SET_GPR_U32(ctx, 31, 0x342324u);
    ctx->pc = 0x342320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34231Cu;
    // 0x342320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x34231Cu, 0x342324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342324u;
label_342324:
    // 0x342324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342328: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34232c: 0x3e00008  jr          $ra
    ctx->pc = 0x34232Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34232Cu;
        // 0x342330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34232Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342334u;
    // 0x342334: 0x0  nop
    ctx->pc = 0x342334u;
    // NOP
    ctx->pc = 0x342338u;
}
