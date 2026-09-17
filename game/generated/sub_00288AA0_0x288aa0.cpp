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

// Function: sub_00288AA0
// Address: 0x288aa0 - 0x288ae0
void sub_00288AA0_0x288aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288AA0_0x288aa0");
#endif

    switch (ctx->pc) {
        case 0x288ab4u: goto label_288ab4;
        case 0x288ac8u: goto label_288ac8;
        case 0x288ad0u: goto label_288ad0;
        case 0x288ad8u: goto label_288ad8;
        default: break;
    }

    ctx->pc = 0x288aa0u;

    // 0x288aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288aa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x288aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x288aac: 0xc0a20ec  jal         func_2883B0
    ctx->pc = 0x288AACu;
    SET_GPR_U32(ctx, 31, 0x288AB4u);
    ctx->pc = 0x288AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AACu;
    // 0x288ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883B0u, 0x288AACu, 0x288AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AB4u;
label_288ab4:
    // 0x288ab4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x288ab8: 0x2463dcd0  addiu       $v1, $v1, -0x2330
    ctx->pc = 0x288ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958288));
    // 0x288abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ac0: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x288AC0u;
    SET_GPR_U32(ctx, 31, 0x288AC8u);
    ctx->pc = 0x288AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AC0u;
    // 0x288ac4: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x288AC0u, 0x288AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AC8u;
label_288ac8:
    // 0x288ac8: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x288AC8u;
    SET_GPR_U32(ctx, 31, 0x288AD0u);
    ctx->pc = 0x288ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AC8u;
    // 0x288acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x288AC8u, 0x288AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AD0u;
label_288ad0:
    // 0x288ad0: 0xc0a2124  jal         func_288490
    ctx->pc = 0x288AD0u;
    SET_GPR_U32(ctx, 31, 0x288AD8u);
    ctx->pc = 0x288AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AD0u;
    // 0x288ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288490u, 0x288AD0u, 0x288AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AD8u;
label_288ad8:
    // 0x288ad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288AD8u;
    {
        const bool branch_taken_0x288ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AD8u;
        // 0x288adc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ad8) {
            ctx->pc = 0x288AF8u;
            return;
        }
    }
    ctx->pc = 0x288AE0u;
}
