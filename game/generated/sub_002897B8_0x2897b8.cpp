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

// Function: sub_002897B8
// Address: 0x2897b8 - 0x2897f8
void sub_002897B8_0x2897b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002897B8_0x2897b8");
#endif

    switch (ctx->pc) {
        case 0x2897ccu: goto label_2897cc;
        case 0x2897e0u: goto label_2897e0;
        case 0x2897e8u: goto label_2897e8;
        case 0x2897f0u: goto label_2897f0;
        default: break;
    }

    ctx->pc = 0x2897b8u;

    // 0x2897b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2897b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2897bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2897bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2897c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2897c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2897c4: 0xc0a20ec  jal         func_2883B0
    ctx->pc = 0x2897C4u;
    SET_GPR_U32(ctx, 31, 0x2897CCu);
    ctx->pc = 0x2897C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897C4u;
    // 0x2897c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883B0u, 0x2897C4u, 0x2897CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897CCu;
label_2897cc:
    // 0x2897cc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2897ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2897d0: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2897d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2897d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2897d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897d8: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x2897D8u;
    SET_GPR_U32(ctx, 31, 0x2897E0u);
    ctx->pc = 0x2897DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897D8u;
    // 0x2897dc: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x2897D8u, 0x2897E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897E0u;
label_2897e0:
    // 0x2897e0: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x2897E0u;
    SET_GPR_U32(ctx, 31, 0x2897E8u);
    ctx->pc = 0x2897E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897E0u;
    // 0x2897e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x2897E0u, 0x2897E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897E8u;
label_2897e8:
    // 0x2897e8: 0xc0a2124  jal         func_288490
    ctx->pc = 0x2897E8u;
    SET_GPR_U32(ctx, 31, 0x2897F0u);
    ctx->pc = 0x2897ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897E8u;
    // 0x2897ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288490u, 0x2897E8u, 0x2897F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897F0u;
label_2897f0:
    // 0x2897f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2897F0u;
    {
        const bool branch_taken_0x2897f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897F0u;
        // 0x2897f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897f0) {
            ctx->pc = 0x289810u;
            return;
        }
    }
    ctx->pc = 0x2897F8u;
}
