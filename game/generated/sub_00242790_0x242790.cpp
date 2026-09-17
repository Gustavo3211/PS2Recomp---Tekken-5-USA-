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

// Function: sub_00242790
// Address: 0x242790 - 0x242858
void sub_00242790_0x242790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242790_0x242790");
#endif

    switch (ctx->pc) {
        case 0x2427c0u: goto label_2427c0;
        case 0x2427f0u: goto label_2427f0;
        default: break;
    }

    ctx->pc = 0x242790u;

    // 0x242790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242794: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x242794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x242798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24279c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24279cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2427a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2427a4: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2427a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2427a8: 0x26310710  addiu       $s1, $s1, 0x710
    ctx->pc = 0x2427a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x2427ac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2427acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2427b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2427b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2427b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2427b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2427b8: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x2427B8u;
    SET_GPR_U32(ctx, 31, 0x2427C0u);
    ctx->pc = 0x2427BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427B8u;
    // 0x2427bc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x2427B8u, 0x2427C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427C0u;
label_2427c0:
    // 0x2427c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2427c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427c4: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2427C4u;
    {
        const bool branch_taken_0x2427c4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2427C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427C4u;
        // 0x2427c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427c4) {
            ctx->pc = 0x2427E8u;
            goto label_2427e8;
        }
    }
    ctx->pc = 0x2427CCu;
    // 0x2427cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2427ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2427d0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2427d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2427d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2427D4u;
    {
        const bool branch_taken_0x2427d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427D4u;
        // 0x2427d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427d4) {
            ctx->pc = 0x242840u;
            goto label_242840;
        }
    }
    ctx->pc = 0x2427DCu;
    // 0x2427dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2427dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2427e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2427E0u;
    {
        const bool branch_taken_0x2427e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427E0u;
        // 0x2427e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427e0) {
            ctx->pc = 0x242830u;
            goto label_242830;
        }
    }
    ctx->pc = 0x2427E8u;
label_2427e8:
    // 0x2427e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2427E8u;
    {
        const bool branch_taken_0x2427e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427E8u;
        // 0x2427ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427e8) {
            ctx->pc = 0x242840u;
            goto label_242840;
        }
    }
    ctx->pc = 0x2427F0u;
label_2427f0:
    // 0x2427f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2427F0u;
    {
        const bool branch_taken_0x2427f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427F0u;
        // 0x2427f4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427f0) {
            ctx->pc = 0x242808u;
            goto label_242808;
        }
    }
    ctx->pc = 0x2427F8u;
    // 0x2427f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2427f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2427fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2427FCu;
    {
        const bool branch_taken_0x2427fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427FCu;
        // 0x242800: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427fc) {
            ctx->pc = 0x24280Cu;
            goto label_24280c;
        }
    }
    ctx->pc = 0x242804u;
    // 0x242804: 0x0  nop
    ctx->pc = 0x242804u;
    // NOP
label_242808:
    // 0x242808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x242808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24280c:
    // 0x24280c: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24280Cu;
    {
        const bool branch_taken_0x24280c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24280c) {
            ctx->pc = 0x242810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24280Cu;
            // 0x242810: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242830u;
            goto label_242830;
        }
    }
    ctx->pc = 0x242814u;
    // 0x242814: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242814u;
    {
        const bool branch_taken_0x242814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242814u;
        // 0x242818: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242814) {
            ctx->pc = 0x24283Cu;
            goto label_24283c;
        }
    }
    ctx->pc = 0x24281Cu;
    // 0x24281c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x242820: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242824u;
    {
        const bool branch_taken_0x242824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242824u;
        // 0x242828: 0xa4520000  sh          $s2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242824) {
            ctx->pc = 0x24283Cu;
            goto label_24283c;
        }
    }
    ctx->pc = 0x24282Cu;
    // 0x24282c: 0x0  nop
    ctx->pc = 0x24282cu;
    // NOP
label_242830:
    // 0x242830: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x242830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x242834: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x242834u;
    {
        const bool branch_taken_0x242834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242834) {
            ctx->pc = 0x242838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242834u;
            // 0x242838: 0x8ce30010  lw          $v1, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2427F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2427f0;
        }
    }
    ctx->pc = 0x24283Cu;
label_24283c:
    // 0x24283c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x24283cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242840:
    // 0x242840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24284c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242850: 0x3e00008  jr          $ra
    ctx->pc = 0x242850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242850u;
        // 0x242854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242858u;
}
