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

// Function: sub_0024B868
// Address: 0x24b868 - 0x24b8e0
void sub_0024B868_0x24b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B868_0x24b868");
#endif

    switch (ctx->pc) {
        case 0x24b878u: goto label_24b878;
        case 0x24b880u: goto label_24b880;
        case 0x24b8a8u: goto label_24b8a8;
        case 0x24b8b0u: goto label_24b8b0;
        case 0x24b8b8u: goto label_24b8b8;
        case 0x24b8c0u: goto label_24b8c0;
        case 0x24b8c8u: goto label_24b8c8;
        case 0x24b8d0u: goto label_24b8d0;
        default: break;
    }

    ctx->pc = 0x24b868u;

    // 0x24b868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b870: 0xc07c6e4  jal         func_1F1B90
    ctx->pc = 0x24B870u;
    SET_GPR_U32(ctx, 31, 0x24B878u);
    ctx->pc = 0x1F1B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1B90u, 0x24B870u, 0x24B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B878u;
label_24b878:
    // 0x24b878: 0xc0845c0  jal         func_211700
    ctx->pc = 0x24B878u;
    SET_GPR_U32(ctx, 31, 0x24B880u);
    ctx->pc = 0x211700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211700u, 0x24B878u, 0x24B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B880u;
label_24b880:
    // 0x24b880: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24b880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24b884: 0x24638858  addiu       $v1, $v1, -0x77A8
    ctx->pc = 0x24b884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x24b888: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x24b888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x24b88c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x24b890: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x24b890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x24b894: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x24b894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x24b898: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x24b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x24b89c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24b8a0: 0xc089a8e  jal         func_226A38
    ctx->pc = 0x24B8A0u;
    SET_GPR_U32(ctx, 31, 0x24B8A8u);
    ctx->pc = 0x24B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8A0u;
    // 0x24b8a4: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A38u, 0x24B8A0u, 0x24B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8A8u;
label_24b8a8:
    // 0x24b8a8: 0xc08ae26  jal         func_22B898
    ctx->pc = 0x24B8A8u;
    SET_GPR_U32(ctx, 31, 0x24B8B0u);
    ctx->pc = 0x22B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B898u, 0x24B8A8u, 0x24B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8B0u;
label_24b8b0:
    // 0x24b8b0: 0xc08f342  jal         func_23CD08
    ctx->pc = 0x24B8B0u;
    SET_GPR_U32(ctx, 31, 0x24B8B8u);
    ctx->pc = 0x23CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD08u, 0x24B8B0u, 0x24B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8B8u;
label_24b8b8:
    // 0x24b8b8: 0xc08c6b6  jal         func_231AD8
    ctx->pc = 0x24B8B8u;
    SET_GPR_U32(ctx, 31, 0x24B8C0u);
    ctx->pc = 0x231AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AD8u, 0x24B8B8u, 0x24B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8C0u;
label_24b8c0:
    // 0x24b8c0: 0xc0b4586  jal         func_2D1618
    ctx->pc = 0x24B8C0u;
    SET_GPR_U32(ctx, 31, 0x24B8C8u);
    ctx->pc = 0x2D1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1618u, 0x24B8C0u, 0x24B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8C8u;
label_24b8c8:
    // 0x24b8c8: 0xc095608  jal         func_255820
    ctx->pc = 0x24B8C8u;
    SET_GPR_U32(ctx, 31, 0x24B8D0u);
    ctx->pc = 0x255820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255820u, 0x24B8C8u, 0x24B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8D0u;
label_24b8d0:
    // 0x24b8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8D4u;
        // 0x24b8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B8DCu;
    // 0x24b8dc: 0x0  nop
    ctx->pc = 0x24b8dcu;
    // NOP
    ctx->pc = 0x24b8e0u;
}
