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

// Function: sub_004ED4D8
// Address: 0x4ed4d8 - 0x4ed528
void sub_004ED4D8_0x4ed4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED4D8_0x4ed4d8");
#endif

    ctx->pc = 0x4ed4d8u;

    // 0x4ed4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed4dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ed4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed4e4: 0x24460168  addiu       $a2, $v0, 0x168
    ctx->pc = 0x4ed4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4ed4e8: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4ed4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4ed4ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ed4ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed4f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ed4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ed4f4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4ed4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ed4f8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ED4F8u;
    {
        const bool branch_taken_0x4ed4f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED4F8u;
        // 0x4ed4fc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed4f8) {
            ctx->pc = 0x4ED510u;
            goto label_4ed510;
        }
    }
    ctx->pc = 0x4ED500u;
    // 0x4ed500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed504: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4ED504u;
    ctx->pc = 0x4ED508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED504u;
    // 0x4ed508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED50Cu;
    // 0x4ed50c: 0x0  nop
    ctx->pc = 0x4ed50cu;
    // NOP
label_4ed510:
    // 0x4ed510: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ed510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed518: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ed518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ed51c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ed51cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed520: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED520u;
        // 0x4ed524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED528u;
}
