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

// Function: sub_003421C0
// Address: 0x3421c0 - 0x342220
void sub_003421C0_0x3421c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003421C0_0x3421c0");
#endif

    switch (ctx->pc) {
        case 0x3421d4u: goto label_3421d4;
        case 0x3421dcu: goto label_3421dc;
        case 0x3421e4u: goto label_3421e4;
        case 0x3421ecu: goto label_3421ec;
        case 0x3421f4u: goto label_3421f4;
        case 0x3421fcu: goto label_3421fc;
        case 0x342204u: goto label_342204;
        case 0x34220cu: goto label_34220c;
        default: break;
    }

    ctx->pc = 0x3421c0u;

    // 0x3421c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3421c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3421c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3421c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3421c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3421c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3421cc: 0xc0d080a  jal         func_342028
    ctx->pc = 0x3421CCu;
    SET_GPR_U32(ctx, 31, 0x3421D4u);
    ctx->pc = 0x3421D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421CCu;
    // 0x3421d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x3421CCu, 0x3421D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421D4u;
label_3421d4:
    // 0x3421d4: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3421D4u;
    SET_GPR_U32(ctx, 31, 0x3421DCu);
    ctx->pc = 0x3421D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421D4u;
    // 0x3421d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3421D4u, 0x3421DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421DCu;
label_3421dc:
    // 0x3421dc: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x3421DCu;
    SET_GPR_U32(ctx, 31, 0x3421E4u);
    ctx->pc = 0x3421E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421DCu;
    // 0x3421e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x3421DCu, 0x3421E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421E4u;
label_3421e4:
    // 0x3421e4: 0xc0d0786  jal         func_341E18
    ctx->pc = 0x3421E4u;
    SET_GPR_U32(ctx, 31, 0x3421ECu);
    ctx->pc = 0x3421E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421E4u;
    // 0x3421e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E18u, 0x3421E4u, 0x3421ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421ECu;
label_3421ec:
    // 0x3421ec: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x3421ECu;
    SET_GPR_U32(ctx, 31, 0x3421F4u);
    ctx->pc = 0x3421F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421ECu;
    // 0x3421f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x3421ECu, 0x3421F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421F4u;
label_3421f4:
    // 0x3421f4: 0xc0d0818  jal         func_342060
    ctx->pc = 0x3421F4u;
    SET_GPR_U32(ctx, 31, 0x3421FCu);
    ctx->pc = 0x3421F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421F4u;
    // 0x3421f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x3421F4u, 0x3421FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421FCu;
label_3421fc:
    // 0x3421fc: 0xc0d0824  jal         func_342090
    ctx->pc = 0x3421FCu;
    SET_GPR_U32(ctx, 31, 0x342204u);
    ctx->pc = 0x342200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421FCu;
    // 0x342200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x3421FCu, 0x342204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342204u;
label_342204:
    // 0x342204: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x342204u;
    SET_GPR_U32(ctx, 31, 0x34220Cu);
    ctx->pc = 0x342208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342204u;
    // 0x342208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x342204u, 0x34220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34220Cu;
label_34220c:
    // 0x34220c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34220cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342214: 0x3e00008  jr          $ra
    ctx->pc = 0x342214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342214u;
        // 0x342218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34221Cu;
    // 0x34221c: 0x0  nop
    ctx->pc = 0x34221cu;
    // NOP
    ctx->pc = 0x342220u;
}
