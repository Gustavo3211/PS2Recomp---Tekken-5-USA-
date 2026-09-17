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

// Function: sub_003310B0
// Address: 0x3310b0 - 0x331118
void sub_003310B0_0x3310b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003310B0_0x3310b0");
#endif

    ctx->pc = 0x3310b0u;

    // 0x3310b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3310b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3310b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3310B4u;
    {
        const bool branch_taken_0x3310b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310B4u;
        // 0x3310b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310b4) {
            ctx->pc = 0x3310C0u;
            goto label_3310c0;
        }
    }
    ctx->pc = 0x3310BCu;
    // 0x3310bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3310bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3310c0:
    // 0x3310c0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3310c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3310c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3310C4u;
    {
        const bool branch_taken_0x3310c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310C4u;
        // 0x3310c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310c4) {
            ctx->pc = 0x3310D0u;
            goto label_3310d0;
        }
    }
    ctx->pc = 0x3310CCu;
    // 0x3310cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3310ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3310d0:
    // 0x3310d0: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3310d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3310d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3310D4u;
    {
        const bool branch_taken_0x3310d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310D4u;
        // 0x3310d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310d4) {
            ctx->pc = 0x3310E0u;
            goto label_3310e0;
        }
    }
    ctx->pc = 0x3310DCu;
    // 0x3310dc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3310dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3310e0:
    // 0x3310e0: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x3310e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x3310e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3310E4u;
    {
        const bool branch_taken_0x3310e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3310E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310E4u;
        // 0x3310e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3310e4) {
            ctx->pc = 0x331100u;
            goto label_331100;
        }
    }
    ctx->pc = 0x3310ECu;
    // 0x3310ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3310ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3310f0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3310F0u;
    {
        const bool branch_taken_0x3310f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3310f0) {
            ctx->pc = 0x3310F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3310F0u;
            // 0x3310f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3310FCu;
            goto label_3310fc;
        }
    }
    ctx->pc = 0x3310F8u;
    // 0x3310f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3310f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3310fc:
    // 0x3310fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3310fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_331100:
    // 0x331100: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x331100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x331104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x331104u;
    {
        const bool branch_taken_0x331104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331104u;
        // 0x331108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331104) {
            ctx->pc = 0x331110u;
            goto label_331110;
        }
    }
    ctx->pc = 0x33110Cu;
    // 0x33110c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x33110cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_331110:
    // 0x331110: 0x3e00008  jr          $ra
    ctx->pc = 0x331110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331118u;
}
