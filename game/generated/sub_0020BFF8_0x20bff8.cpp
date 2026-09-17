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

// Function: sub_0020BFF8
// Address: 0x20bff8 - 0x20c048
void sub_0020BFF8_0x20bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BFF8_0x20bff8");
#endif

    switch (ctx->pc) {
        case 0x20c008u: goto label_20c008;
        default: break;
    }

    ctx->pc = 0x20bff8u;

    // 0x20bff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c000: 0xc08215c  jal         func_208570
    ctx->pc = 0x20C000u;
    SET_GPR_U32(ctx, 31, 0x20C008u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20C000u, 0x20C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C008u;
label_20c008:
    // 0x20c008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c00c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x20c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20c010: 0x2462ffe8  addiu       $v0, $v1, -0x18
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x20c014: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20c014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20c018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C018u;
    {
        const bool branch_taken_0x20c018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C018u;
        // 0x20c01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c018) {
            ctx->pc = 0x20C030u;
            goto label_20c030;
        }
    }
    ctx->pc = 0x20C020u;
    // 0x20c020: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C020u;
    {
        const bool branch_taken_0x20c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C020u;
        // 0x20c024: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c020) {
            ctx->pc = 0x20C030u;
            goto label_20c030;
        }
    }
    ctx->pc = 0x20C028u;
    // 0x20c028: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C028u;
    {
        const bool branch_taken_0x20c028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C028u;
        // 0x20c02c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c028) {
            ctx->pc = 0x20C038u;
            goto label_20c038;
        }
    }
    ctx->pc = 0x20C030u;
label_20c030:
    // 0x20c030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c038:
    // 0x20c038: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x20c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x20c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C03Cu;
        // 0x20c040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C044u;
    // 0x20c044: 0x0  nop
    ctx->pc = 0x20c044u;
    // NOP
    ctx->pc = 0x20c048u;
}
