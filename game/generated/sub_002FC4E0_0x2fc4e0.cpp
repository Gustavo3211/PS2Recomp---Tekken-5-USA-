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

// Function: sub_002FC4E0
// Address: 0x2fc4e0 - 0x2fc548
void sub_002FC4E0_0x2fc4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC4E0_0x2fc4e0");
#endif

    switch (ctx->pc) {
        case 0x2fc518u: goto label_2fc518;
        default: break;
    }

    ctx->pc = 0x2fc4e0u;

    // 0x2fc4e0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2fc4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fc4e4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC4E4u;
    {
        const bool branch_taken_0x2fc4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc4e4) {
            ctx->pc = 0x2FC53Cu;
            goto label_2fc53c;
        }
    }
    ctx->pc = 0x2FC4ECu;
    // 0x2fc4ec: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x2fc4ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fc4f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FC4F0u;
    {
        const bool branch_taken_0x2fc4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4F0u;
        // 0x2fc4f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4f0) {
            ctx->pc = 0x2FC53Cu;
            goto label_2fc53c;
        }
    }
    ctx->pc = 0x2FC4F8u;
    // 0x2fc4f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2fc4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2fc4fc: 0x2407ffef  addiu       $a3, $zero, -0x11
    ctx->pc = 0x2fc4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2fc500: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2fc500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2fc504: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2fc504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fc508: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2fc508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2fc50c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2fc50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fc510: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x2fc510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2fc514: 0x0  nop
    ctx->pc = 0x2fc514u;
    // NOP
label_2fc518:
    // 0x2fc518: 0xdc620028  ld          $v0, 0x28($v1)
    ctx->pc = 0x2fc518u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2fc51c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fc51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fc520: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2fc520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2fc524: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2fc524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fc528: 0xfc620028  sd          $v0, 0x28($v1)
    ctx->pc = 0x2fc528u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
    // 0x2fc52c: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x2fc52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fc530: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2fc530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fc534: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FC534u;
    {
        const bool branch_taken_0x2fc534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC534u;
        // 0x2fc538: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc534) {
            ctx->pc = 0x2FC518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc518;
        }
    }
    ctx->pc = 0x2FC53Cu;
label_2fc53c:
    // 0x2fc53c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC544u;
    // 0x2fc544: 0x0  nop
    ctx->pc = 0x2fc544u;
    // NOP
    ctx->pc = 0x2fc548u;
}
