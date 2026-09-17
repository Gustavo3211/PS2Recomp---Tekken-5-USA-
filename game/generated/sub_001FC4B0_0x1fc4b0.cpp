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

// Function: sub_001FC4B0
// Address: 0x1fc4b0 - 0x1fc520
void sub_001FC4B0_0x1fc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC4B0_0x1fc4b0");
#endif

    switch (ctx->pc) {
        case 0x1fc50cu: goto label_1fc50c;
        default: break;
    }

    ctx->pc = 0x1fc4b0u;

    // 0x1fc4b0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1fc4b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc4b8: 0x8c8383c0  lw          $v1, -0x7C40($a0)
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fc4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4c0: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x1fc4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x1fc4c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC4C4u;
    {
        const bool branch_taken_0x1fc4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4C4u;
        // 0x1fc4c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4c4) {
            ctx->pc = 0x1FC514u;
            goto label_1fc514;
        }
    }
    ctx->pc = 0x1FC4CCu;
    // 0x1fc4cc: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fc4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc4d0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1fc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fc4d4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC4D4u;
    {
        const bool branch_taken_0x1fc4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc4d4) {
            ctx->pc = 0x1FC4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC4D4u;
            // 0x1fc4d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC518u;
            goto label_1fc518;
        }
    }
    ctx->pc = 0x1FC4DCu;
    // 0x1fc4dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc4e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FC4E0u;
    {
        const bool branch_taken_0x1fc4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E0u;
        // 0x1fc4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4e0) {
            ctx->pc = 0x1FC510u;
            goto label_1fc510;
        }
    }
    ctx->pc = 0x1FC4E8u;
    // 0x1fc4e8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1fc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fc4ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC4ECu;
    {
        const bool branch_taken_0x1fc4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4ECu;
        // 0x1fc4f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4ec) {
            ctx->pc = 0x1FC514u;
            goto label_1fc514;
        }
    }
    ctx->pc = 0x1FC4F4u;
    // 0x1fc4f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fc4f8: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x1fc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x1fc4fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC4FCu;
    {
        const bool branch_taken_0x1fc4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4FCu;
        // 0x1fc500: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4fc) {
            ctx->pc = 0x1FC514u;
            goto label_1fc514;
        }
    }
    ctx->pc = 0x1FC504u;
    // 0x1fc504: 0xc07f0ea  jal         func_1FC3A8
    ctx->pc = 0x1FC504u;
    SET_GPR_U32(ctx, 31, 0x1FC50Cu);
    ctx->pc = 0x1FC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A8u, 0x1FC504u, 0x1FC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC50Cu;
label_1fc50c:
    // 0x1fc50c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1fc50cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fc510:
    // 0x1fc510: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fc510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc514:
    // 0x1fc514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc518:
    // 0x1fc518: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC518u;
        // 0x1fc51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC520u;
}
