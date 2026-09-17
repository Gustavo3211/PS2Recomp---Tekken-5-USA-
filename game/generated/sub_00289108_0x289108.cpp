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

// Function: sub_00289108
// Address: 0x289108 - 0x289148
void sub_00289108_0x289108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289108_0x289108");
#endif

    switch (ctx->pc) {
        case 0x28911cu: goto label_28911c;
        case 0x289130u: goto label_289130;
        case 0x289138u: goto label_289138;
        case 0x289140u: goto label_289140;
        default: break;
    }

    ctx->pc = 0x289108u;

    // 0x289108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28910c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289114: 0xc0a20ec  jal         func_2883B0
    ctx->pc = 0x289114u;
    SET_GPR_U32(ctx, 31, 0x28911Cu);
    ctx->pc = 0x289118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289114u;
    // 0x289118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883B0u, 0x289114u, 0x28911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28911Cu;
label_28911c:
    // 0x28911c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x28911cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x289120: 0x2463dc48  addiu       $v1, $v1, -0x23B8
    ctx->pc = 0x289120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958152));
    // 0x289124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289128: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x289128u;
    SET_GPR_U32(ctx, 31, 0x289130u);
    ctx->pc = 0x28912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289128u;
    // 0x28912c: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x289128u, 0x289130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289130u;
label_289130:
    // 0x289130: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x289130u;
    SET_GPR_U32(ctx, 31, 0x289138u);
    ctx->pc = 0x289134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289130u;
    // 0x289134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x289130u, 0x289138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289138u;
label_289138:
    // 0x289138: 0xc0a2124  jal         func_288490
    ctx->pc = 0x289138u;
    SET_GPR_U32(ctx, 31, 0x289140u);
    ctx->pc = 0x28913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289138u;
    // 0x28913c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288490u, 0x289138u, 0x289140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289140u;
label_289140:
    // 0x289140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289140u;
    {
        const bool branch_taken_0x289140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289140u;
        // 0x289144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289140) {
            ctx->pc = 0x289160u;
            return;
        }
    }
    ctx->pc = 0x289148u;
}
