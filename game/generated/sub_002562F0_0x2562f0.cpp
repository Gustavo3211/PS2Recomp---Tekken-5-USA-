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

// Function: sub_002562F0
// Address: 0x2562f0 - 0x2563e8
void sub_002562F0_0x2562f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002562F0_0x2562f0");
#endif

    switch (ctx->pc) {
        case 0x25630cu: goto label_25630c;
        case 0x25631cu: goto label_25631c;
        case 0x256330u: goto label_256330;
        case 0x256338u: goto label_256338;
        case 0x256360u: goto label_256360;
        case 0x25637cu: goto label_25637c;
        case 0x256390u: goto label_256390;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563c0u: goto label_2563c0;
        default: break;
    }

    ctx->pc = 0x2562f0u;

    // 0x2562f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2562f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2562f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2562f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2562f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2562fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2562fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x256300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x256300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x256304: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x256304u;
    SET_GPR_U32(ctx, 31, 0x25630Cu);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x256304u, 0x25630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25630Cu;
label_25630c:
    // 0x25630c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25630Cu;
    {
        const bool branch_taken_0x25630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25630c) {
            ctx->pc = 0x256330u;
            goto label_256330;
        }
    }
    ctx->pc = 0x256314u;
    // 0x256314: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x256314u;
    SET_GPR_U32(ctx, 31, 0x25631Cu);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x256314u, 0x25631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25631Cu;
label_25631c:
    // 0x25631c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25631Cu;
    {
        const bool branch_taken_0x25631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25631Cu;
        // 0x256320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25631c) {
            ctx->pc = 0x256330u;
            goto label_256330;
        }
    }
    ctx->pc = 0x256324u;
    // 0x256324: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x256324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x256328: 0xc0937e0  jal         func_24DF80
    ctx->pc = 0x256328u;
    SET_GPR_U32(ctx, 31, 0x256330u);
    ctx->pc = 0x25632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256328u;
    // 0x25632c: 0x24845148  addiu       $a0, $a0, 0x5148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF80u, 0x256328u, 0x256330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256330u;
label_256330:
    // 0x256330: 0xc08fa12  jal         func_23E848
    ctx->pc = 0x256330u;
    SET_GPR_U32(ctx, 31, 0x256338u);
    ctx->pc = 0x23E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E848u, 0x256330u, 0x256338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256338u;
label_256338:
    // 0x256338: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x256338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25633c: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x25633cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x256340: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x256344: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x256344u;
    {
        const bool branch_taken_0x256344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x256348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256344u;
        // 0x256348: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256344) {
            ctx->pc = 0x2563A4u;
            goto label_2563a4;
        }
    }
    ctx->pc = 0x25634Cu;
    // 0x25634c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25634cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256350: 0x245288d0  addiu       $s2, $v0, -0x7730
    ctx->pc = 0x256350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x256354: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x256358: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x256358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x25635c: 0x0  nop
    ctx->pc = 0x25635cu;
    // NOP
label_256360:
    // 0x256360: 0x2111804  sllv        $v1, $s1, $s0
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x256364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256368: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x256368u;
    {
        const bool branch_taken_0x256368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256368) {
            ctx->pc = 0x25636Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256368u;
            // 0x25636c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256394u;
            goto label_256394;
        }
    }
    ctx->pc = 0x256370u;
    // 0x256370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256374: 0xc0af9ce  jal         func_2BE738
    ctx->pc = 0x256374u;
    SET_GPR_U32(ctx, 31, 0x25637Cu);
    ctx->pc = 0x256378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256374u;
    // 0x256378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE738u, 0x256374u, 0x25637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25637Cu;
label_25637c:
    // 0x25637c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25637cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x256380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256380u;
    {
        const bool branch_taken_0x256380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256380u;
        // 0x256384: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256380) {
            ctx->pc = 0x256390u;
            goto label_256390;
        }
    }
    ctx->pc = 0x256388u;
    // 0x256388: 0xc09586c  jal         func_2561B0
    ctx->pc = 0x256388u;
    SET_GPR_U32(ctx, 31, 0x256390u);
    ctx->pc = 0x25638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256388u;
    // 0x25638c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2561B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2561B0u, 0x256388u, 0x256390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256390u;
label_256390:
    // 0x256390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_256394:
    // 0x256394: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x256394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256398: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x256398u;
    {
        const bool branch_taken_0x256398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256398u;
        // 0x25639c: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256398) {
            ctx->pc = 0x256360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256360;
        }
    }
    ctx->pc = 0x2563A0u;
    // 0x2563a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2563a4:
    // 0x2563a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2563a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563a8: 0x245188d0  addiu       $s1, $v0, -0x7730
    ctx->pc = 0x2563a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2563ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2563acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2563b0:
    // 0x2563b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2563b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2563b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2563b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2563b8: 0xc08f6a2  jal         func_23DA88
    ctx->pc = 0x2563B8u;
    SET_GPR_U32(ctx, 31, 0x2563C0u);
    ctx->pc = 0x2563BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2563B8u;
    // 0x2563bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA88u, 0x2563B8u, 0x2563C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2563C0u;
label_2563c0:
    // 0x2563c0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2563c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2563c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2563C4u;
    {
        const bool branch_taken_0x2563c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2563c4) {
            ctx->pc = 0x2563C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2563C4u;
            // 0x2563c8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2563B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2563b0;
        }
    }
    ctx->pc = 0x2563CCu;
    // 0x2563cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2563ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2563d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2563d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2563d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2563d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2563d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2563d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2563dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2563DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2563E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563DCu;
        // 0x2563e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2563DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2563E4u;
    // 0x2563e4: 0x0  nop
    ctx->pc = 0x2563e4u;
    // NOP
    ctx->pc = 0x2563e8u;
}
