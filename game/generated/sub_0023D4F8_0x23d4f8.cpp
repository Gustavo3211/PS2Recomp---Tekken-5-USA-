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

// Function: sub_0023D4F8
// Address: 0x23d4f8 - 0x23d598
void sub_0023D4F8_0x23d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D4F8_0x23d4f8");
#endif

    switch (ctx->pc) {
        case 0x23d540u: goto label_23d540;
        case 0x23d56cu: goto label_23d56c;
        default: break;
    }

    ctx->pc = 0x23d4f8u;

    // 0x23d4f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23d4fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d500: 0x8c4488ac  lw          $a0, -0x7754($v0)
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x23d504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d508: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23d50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d514: 0x2470f3d0  addiu       $s0, $v1, -0xC30
    ctx->pc = 0x23d514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964176));
    // 0x23d518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23d51c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D51Cu;
    {
        const bool branch_taken_0x23d51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D51Cu;
        // 0x23d520: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d51c) {
            ctx->pc = 0x23D534u;
            goto label_23d534;
        }
    }
    ctx->pc = 0x23D524u;
    // 0x23d524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23d528: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x23d52c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23d530: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23d534:
    // 0x23d534: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D534u;
    {
        const bool branch_taken_0x23d534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D534u;
        // 0x23d538: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d534) {
            ctx->pc = 0x23D57Cu;
            goto label_23d57c;
        }
    }
    ctx->pc = 0x23D53Cu;
    // 0x23d53c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d540:
    // 0x23d540: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x23d544: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D544u;
    {
        const bool branch_taken_0x23d544 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D544u;
        // 0x23d548: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d544) {
            ctx->pc = 0x23D56Cu;
            goto label_23d56c;
        }
    }
    ctx->pc = 0x23D54Cu;
    // 0x23d54c: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D54Cu;
    {
        const bool branch_taken_0x23d54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x23D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D54Cu;
        // 0x23d550: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d54c) {
            ctx->pc = 0x23D56Cu;
            goto label_23d56c;
        }
    }
    ctx->pc = 0x23D554u;
    // 0x23d554: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x23d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x23d558: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x23d558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23d55c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x23d560: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23d560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d564: 0xc095312  jal         func_254C48
    ctx->pc = 0x23D564u;
    SET_GPR_U32(ctx, 31, 0x23D56Cu);
    ctx->pc = 0x23D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D564u;
    // 0x23d568: 0x8e08004c  lw          $t0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C48u, 0x23D564u, 0x23D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D56Cu;
label_23d56c:
    // 0x23d56c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23d570: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x23d570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x23d574: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23D574u;
    {
        const bool branch_taken_0x23d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D574u;
        // 0x23d578: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d574) {
            ctx->pc = 0x23D540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d540;
        }
    }
    ctx->pc = 0x23D57Cu;
label_23d57c:
    // 0x23d57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23d584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d588: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D58Cu;
        // 0x23d590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D594u;
    // 0x23d594: 0x0  nop
    ctx->pc = 0x23d594u;
    // NOP
    ctx->pc = 0x23d598u;
}
