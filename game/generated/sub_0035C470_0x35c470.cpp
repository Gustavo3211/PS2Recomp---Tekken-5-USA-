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

// Function: sub_0035C470
// Address: 0x35c470 - 0x35c548
void sub_0035C470_0x35c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C470_0x35c470");
#endif

    switch (ctx->pc) {
        case 0x35c498u: goto label_35c498;
        case 0x35c4acu: goto label_35c4ac;
        case 0x35c4c8u: goto label_35c4c8;
        case 0x35c4e0u: goto label_35c4e0;
        case 0x35c520u: goto label_35c520;
        case 0x35c528u: goto label_35c528;
        default: break;
    }

    ctx->pc = 0x35c470u;

    // 0x35c470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c474: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35c478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c47c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35c48c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35c48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c490: 0x2111007  srav        $v0, $s1, $s0
    ctx->pc = 0x35c490u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x35c494: 0x0  nop
    ctx->pc = 0x35c494u;
    // NOP
label_35c498:
    // 0x35c498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c49c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C49Cu;
    {
        const bool branch_taken_0x35c49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c49c) {
            ctx->pc = 0x35C4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C49Cu;
            // 0x35c4a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C4B0u;
            goto label_35c4b0;
        }
    }
    ctx->pc = 0x35C4A4u;
    // 0x35c4a4: 0xc0d70fe  jal         func_35C3F8
    ctx->pc = 0x35C4A4u;
    SET_GPR_U32(ctx, 31, 0x35C4ACu);
    ctx->pc = 0x35C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4A4u;
    // 0x35c4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3F8u, 0x35C4A4u, 0x35C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4ACu;
label_35c4ac:
    // 0x35c4ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35c4b0:
    // 0x35c4b0: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x35c4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x35c4b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35C4B4u;
    {
        const bool branch_taken_0x35c4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4B4u;
        // 0x35c4b8: 0x2111007  srav        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c4b4) {
            ctx->pc = 0x35C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c498;
        }
    }
    ctx->pc = 0x35C4BCu;
    // 0x35c4bc: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x35c4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35c4c0: 0x2602ffe8  addiu       $v0, $s0, -0x18
    ctx->pc = 0x35c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x35c4c4: 0x0  nop
    ctx->pc = 0x35c4c4u;
    // NOP
label_35c4c8:
    // 0x35c4c8: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x35c4c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x35c4cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c4d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C4D0u;
    {
        const bool branch_taken_0x35c4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c4d0) {
            ctx->pc = 0x35C4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C4D0u;
            // 0x35c4d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C4E4u;
            goto label_35c4e4;
        }
    }
    ctx->pc = 0x35C4D8u;
    // 0x35c4d8: 0xc0d70fe  jal         func_35C3F8
    ctx->pc = 0x35C4D8u;
    SET_GPR_U32(ctx, 31, 0x35C4E0u);
    ctx->pc = 0x35C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4D8u;
    // 0x35c4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3F8u, 0x35C4D8u, 0x35C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4E0u;
label_35c4e0:
    // 0x35c4e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35c4e4:
    // 0x35c4e4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x35c4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c4e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35C4E8u;
    {
        const bool branch_taken_0x35c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c4e8) {
            ctx->pc = 0x35C4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C4E8u;
            // 0x35c4ec: 0x2602ffe8  addiu       $v0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c4c8;
        }
    }
    ctx->pc = 0x35C4F0u;
    // 0x35c4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c4f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c4f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c4fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c500: 0x3e00008  jr          $ra
    ctx->pc = 0x35C500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C500u;
        // 0x35c504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C508u;
    // 0x35c508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c50c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35c510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c51c: 0x0  nop
    ctx->pc = 0x35c51cu;
    // NOP
label_35c520:
    // 0x35c520: 0xc0d70fe  jal         func_35C3F8
    ctx->pc = 0x35C520u;
    SET_GPR_U32(ctx, 31, 0x35C528u);
    ctx->pc = 0x35C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C520u;
    // 0x35c524: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3F8u, 0x35C520u, 0x35C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C528u;
label_35c528:
    // 0x35c528: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x35c528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c52c: 0x1460fffc  bnez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35C52Cu;
    {
        const bool branch_taken_0x35c52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C52Cu;
        // 0x35c530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c52c) {
            ctx->pc = 0x35C520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c520;
        }
    }
    ctx->pc = 0x35C534u;
    // 0x35c534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35c538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c53c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C53Cu;
        // 0x35c540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C544u;
    // 0x35c544: 0x0  nop
    ctx->pc = 0x35c544u;
    // NOP
    ctx->pc = 0x35c548u;
}
