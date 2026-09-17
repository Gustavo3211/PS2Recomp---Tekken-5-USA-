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

// Function: sub_002A7818
// Address: 0x2a7818 - 0x2a7890
void sub_002A7818_0x2a7818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7818_0x2a7818");
#endif

    switch (ctx->pc) {
        case 0x2a783cu: goto label_2a783c;
        case 0x2a7850u: goto label_2a7850;
        default: break;
    }

    ctx->pc = 0x2a7818u;

    // 0x2a7818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a781c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2a7820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a7824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a782c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7834: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2A7834u;
    SET_GPR_U32(ctx, 31, 0x2A783Cu);
    ctx->pc = 0x2A7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7834u;
    // 0x2a7838: 0x28e03  sra         $s1, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2A7834u, 0x2A783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A783Cu;
label_2a783c:
    // 0x2a783c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2a783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a7840: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7840u;
    {
        const bool branch_taken_0x2a7840 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7840u;
        // 0x2a7844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7840) {
            ctx->pc = 0x2A7878u;
            goto label_2a7878;
        }
    }
    ctx->pc = 0x2A7848u;
    // 0x2a7848: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2a7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a784c: 0x0  nop
    ctx->pc = 0x2a784cu;
    // NOP
label_2a7850:
    // 0x2a7850: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a7850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7854: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2a7854u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7858: 0x10910007  beq         $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7858u;
    {
        const bool branch_taken_0x2a7858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7858u;
        // 0x2a785c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7858) {
            ctx->pc = 0x2A7878u;
            goto label_2a7878;
        }
    }
    ctx->pc = 0x2A7860u;
    // 0x2a7860: 0x0  nop
    ctx->pc = 0x2a7860u;
    // NOP
    // 0x2a7864: 0x0  nop
    ctx->pc = 0x2a7864u;
    // NOP
    // 0x2a7868: 0x0  nop
    ctx->pc = 0x2a7868u;
    // NOP
    // 0x2a786c: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A786Cu;
    {
        const bool branch_taken_0x2a786c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A786Cu;
        // 0x2a7870: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a786c) {
            ctx->pc = 0x2A7850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7850;
        }
    }
    ctx->pc = 0x2A7874u;
    // 0x2a7874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a7878:
    // 0x2a7878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a787c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a787cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7884: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7884u;
        // 0x2a7888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A788Cu;
    // 0x2a788c: 0x0  nop
    ctx->pc = 0x2a788cu;
    // NOP
    ctx->pc = 0x2a7890u;
}
