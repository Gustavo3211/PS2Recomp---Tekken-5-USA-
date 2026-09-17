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

// Function: sub_0035D4B8
// Address: 0x35d4b8 - 0x35d538
void sub_0035D4B8_0x35d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D4B8_0x35d4b8");
#endif

    switch (ctx->pc) {
        case 0x35d4d8u: goto label_35d4d8;
        default: break;
    }

    ctx->pc = 0x35d4b8u;

    // 0x35d4b8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35d4bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35d4bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4c0: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35d4c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d4c8: 0x24470054  addiu       $a3, $v0, 0x54
    ctx->pc = 0x35d4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x35d4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4d0: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x35d4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x35d4d4: 0x0  nop
    ctx->pc = 0x35d4d4u;
    // NOP
label_35d4d8:
    // 0x35d4d8: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x35d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x35d4dc: 0x5448000f  bnel        $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x35D4DCu;
    {
        const bool branch_taken_0x35d4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x35d4dc) {
            ctx->pc = 0x35D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D4DCu;
            // 0x35d4e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D51Cu;
            goto label_35d51c;
        }
    }
    ctx->pc = 0x35D4E4u;
    // 0x35d4e4: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x35D4E4u;
    {
        const bool branch_taken_0x35d4e4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x35D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4E4u;
        // 0x35d4e8: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4e4) {
            ctx->pc = 0x35D514u;
            goto label_35d514;
        }
    }
    ctx->pc = 0x35D4ECu;
    // 0x35d4ec: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x35d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35d4f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35d4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d4f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35d4fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d500: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x35d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x35d504: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x35d508: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x35d508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x35d50c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D50Cu;
    {
        const bool branch_taken_0x35d50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d50c) {
            ctx->pc = 0x35D510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D50Cu;
            // 0x35d510: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D51Cu;
            goto label_35d51c;
        }
    }
    ctx->pc = 0x35D514u;
label_35d514:
    // 0x35d514: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d518: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35d518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_35d51c:
    // 0x35d51c: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x35d51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35d520: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x35D520u;
    {
        const bool branch_taken_0x35d520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D520u;
        // 0x35d524: 0x24e7006c  addiu       $a3, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d520) {
            ctx->pc = 0x35D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d4d8;
        }
    }
    ctx->pc = 0x35D528u;
    // 0x35d528: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35d52c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x35d52cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x35d530: 0x3e00008  jr          $ra
    ctx->pc = 0x35D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D530u;
        // 0x35d534: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D538u;
}
