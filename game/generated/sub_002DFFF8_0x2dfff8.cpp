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

// Function: sub_002DFFF8
// Address: 0x2dfff8 - 0x2e0068
void sub_002DFFF8_0x2dfff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFFF8_0x2dfff8");
#endif

    switch (ctx->pc) {
        case 0x2e0030u: goto label_2e0030;
        case 0x2e0060u: goto label_2e0060;
        default: break;
    }

    ctx->pc = 0x2dfff8u;

    // 0x2dfff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfffc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2dfffcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e0000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0008: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2e0008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2e000c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2e000cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2e0010: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2e0010u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2e0014: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e0018: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e0018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e001c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2e001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2e0020: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2e0020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2e0024: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e0028: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e0028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e002c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e0030:
    // 0x2e0030: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e0030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e0034: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e0034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e0038: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e003c: 0x0  nop
    ctx->pc = 0x2e003cu;
    // NOP
    // 0x2e0040: 0x0  nop
    ctx->pc = 0x2e0040u;
    // NOP
    // 0x2e0044: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0044u;
    {
        const bool branch_taken_0x2e0044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0044u;
        // 0x2e0048: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0044) {
            ctx->pc = 0x2E0030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0030;
        }
    }
    ctx->pc = 0x2E004Cu;
    // 0x2e004c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0054: 0x2442f9f0  addiu       $v0, $v0, -0x610
    ctx->pc = 0x2e0054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x2e0058: 0xc0b8024  jal         func_2E0090
    ctx->pc = 0x2E0058u;
    SET_GPR_U32(ctx, 31, 0x2E0060u);
    ctx->pc = 0x2E005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0058u;
    // 0x2e005c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0090u, 0x2E0058u, 0x2E0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0060u;
label_2e0060:
    // 0x2e0060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0060u;
    {
        const bool branch_taken_0x2e0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0060u;
        // 0x2e0064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0060) {
            ctx->pc = 0x2E0080u;
            return;
        }
    }
    ctx->pc = 0x2E0068u;
}
