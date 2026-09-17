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

// Function: sub_002172C8
// Address: 0x2172c8 - 0x217320
void sub_002172C8_0x2172c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002172C8_0x2172c8");
#endif

    switch (ctx->pc) {
        case 0x2172dcu: goto label_2172dc;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172fcu: goto label_2172fc;
        case 0x217304u: goto label_217304;
        case 0x217310u: goto label_217310;
        default: break;
    }

    ctx->pc = 0x2172c8u;

    // 0x2172c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2172cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2172ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2172d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2172d4: 0xc092460  jal         func_249180
    ctx->pc = 0x2172D4u;
    SET_GPR_U32(ctx, 31, 0x2172DCu);
    ctx->pc = 0x2172D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172D4u;
    // 0x2172d8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2172D4u, 0x2172DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172DCu;
label_2172dc:
    // 0x2172dc: 0xaf809718  sw          $zero, -0x68E8($gp)
    ctx->pc = 0x2172dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    // 0x2172e0: 0xc0821ce  jal         func_208738
    ctx->pc = 0x2172E0u;
    SET_GPR_U32(ctx, 31, 0x2172E8u);
    ctx->pc = 0x2172E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172E0u;
    // 0x2172e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x2172E0u, 0x2172E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172E8u;
label_2172e8:
    // 0x2172e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2172e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2172ec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2172f0: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x2172f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2172f4: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x2172F4u;
    SET_GPR_U32(ctx, 31, 0x2172FCu);
    ctx->pc = 0x2172F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172F4u;
    // 0x2172f8: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x2172F4u, 0x2172FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172FCu;
label_2172fc:
    // 0x2172fc: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x2172FCu;
    SET_GPR_U32(ctx, 31, 0x217304u);
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x2172FCu, 0x217304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217304u;
label_217304:
    // 0x217304: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x217304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x217308: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x217308u;
    SET_GPR_U32(ctx, 31, 0x217310u);
    ctx->pc = 0x21730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217308u;
    // 0x21730c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x217308u, 0x217310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217310u;
label_217310:
    // 0x217310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217318: 0x3e00008  jr          $ra
    ctx->pc = 0x217318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217318u;
        // 0x21731c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217320u;
}
