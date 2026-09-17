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

// Function: sub_002E0440
// Address: 0x2e0440 - 0x2e04b0
void sub_002E0440_0x2e0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0440_0x2e0440");
#endif

    switch (ctx->pc) {
        case 0x2e0478u: goto label_2e0478;
        case 0x2e0484u: goto label_2e0484;
        default: break;
    }

    ctx->pc = 0x2e0440u;

    // 0x2e0440: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e0440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e0444: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0448: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x2e0448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x2e044c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e044cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e045c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E045Cu;
    {
        const bool branch_taken_0x2e045c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E045Cu;
        // 0x2e0460: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e045c) {
            ctx->pc = 0x2E0498u;
            goto label_2e0498;
        }
    }
    ctx->pc = 0x2E0464u;
    // 0x2e0464: 0x8222017b  lb          $v0, 0x17B($s1)
    ctx->pc = 0x2e0464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 379)));
    // 0x2e0468: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E0468u;
    {
        const bool branch_taken_0x2e0468 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0468u;
        // 0x2e046c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0468) {
            ctx->pc = 0x2E0494u;
            goto label_2e0494;
        }
    }
    ctx->pc = 0x2E0470u;
    // 0x2e0470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0474: 0x0  nop
    ctx->pc = 0x2e0474u;
    // NOP
label_2e0478:
    // 0x2e0478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e0478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e047c: 0xc0b80f0  jal         func_2E03C0
    ctx->pc = 0x2E047Cu;
    SET_GPR_U32(ctx, 31, 0x2E0484u);
    ctx->pc = 0x2E0480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E047Cu;
    // 0x2e0480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03C0u, 0x2E047Cu, 0x2E0484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0484u;
label_2e0484:
    // 0x2e0484: 0x8222017b  lb          $v0, 0x17B($s1)
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 379)));
    // 0x2e0488: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2e0488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e048c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E048Cu;
    {
        const bool branch_taken_0x2e048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E048Cu;
        // 0x2e0490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e048c) {
            ctx->pc = 0x2E0478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0478;
        }
    }
    ctx->pc = 0x2E0494u;
label_2e0494:
    // 0x2e0494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0498:
    // 0x2e0498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e049c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e049cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e04a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e04a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e04a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04A4u;
        // 0x2e04a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E04ACu;
    // 0x2e04ac: 0x0  nop
    ctx->pc = 0x2e04acu;
    // NOP
    ctx->pc = 0x2e04b0u;
}
