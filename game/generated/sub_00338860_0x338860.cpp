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

// Function: sub_00338860
// Address: 0x338860 - 0x338930
void sub_00338860_0x338860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338860_0x338860");
#endif

    switch (ctx->pc) {
        case 0x3388a0u: goto label_3388a0;
        case 0x3388e8u: goto label_3388e8;
        default: break;
    }

    ctx->pc = 0x338860u;

    // 0x338860: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x338860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x338864: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x338864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338868: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x338868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x33886c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33886cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x338870: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x338870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x338874: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x338874u;
    {
        const bool branch_taken_0x338874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338874u;
        // 0x338878: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338874) {
            ctx->pc = 0x3388D0u;
            goto label_3388d0;
        }
    }
    ctx->pc = 0x33887Cu;
    // 0x33887c: 0x2404fc00  addiu       $a0, $zero, -0x400
    ctx->pc = 0x33887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x338880: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x338880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x338884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338884u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e020
    // 0x338888: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x338888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33888c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x338890: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x338890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x338894: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x338894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338898: 0x40f  sync.p
    ctx->pc = 0x338898u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x33889c: 0xf  sync
    ctx->pc = 0x33889cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3388a0:
    // 0x3388a0: 0x0  nop
    ctx->pc = 0x3388a0u;
    // NOP
    // 0x3388a4: 0x0  nop
    ctx->pc = 0x3388a4u;
    // NOP
    // 0x3388a8: 0x0  nop
    ctx->pc = 0x3388a8u;
    // NOP
    // 0x3388ac: 0x0  nop
    ctx->pc = 0x3388acu;
    // NOP
    // 0x3388b0: 0x0  nop
    ctx->pc = 0x3388b0u;
    // NOP
    // 0x3388b4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3388B4u;
    {
        const bool branch_taken_0x3388b4 = (false);
        if (branch_taken_0x3388b4) {
            ctx->pc = 0x3388A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3388a0;
        }
    }
    ctx->pc = 0x3388BCu;
    // 0x3388bc: 0x0  nop
    ctx->pc = 0x3388bcu;
    // NOP
    // 0x3388c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3388c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3388c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3388c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3388c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3388cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3388ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3388d0:
    // 0x3388d0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x3388d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3388d4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3388D4u;
    {
        const bool branch_taken_0x3388d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3388D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388D4u;
        // 0x3388d8: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388d4) {
            ctx->pc = 0x338924u;
            goto label_338924;
        }
    }
    ctx->pc = 0x3388DCu;
    // 0x3388dc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3388dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3388e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3388e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3388e4: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x3388e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3388e8:
    // 0x3388e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3388e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3388ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3388ECu;
    {
        const bool branch_taken_0x3388ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3388ec) {
            ctx->pc = 0x3388F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3388ECu;
            // 0x3388f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338908u;
            goto label_338908;
        }
    }
    ctx->pc = 0x3388F4u;
    // 0x3388f4: 0x54a60004  bnel        $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3388F4u;
    {
        const bool branch_taken_0x3388f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x3388f4) {
            ctx->pc = 0x3388F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3388F4u;
            // 0x3388f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338908u;
            goto label_338908;
        }
    }
    ctx->pc = 0x3388FCu;
    // 0x3388fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3388FCu;
    {
        const bool branch_taken_0x3388fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388FCu;
        // 0x338900: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388fc) {
            ctx->pc = 0x338920u;
            goto label_338920;
        }
    }
    ctx->pc = 0x338904u;
    // 0x338904: 0x0  nop
    ctx->pc = 0x338904u;
    // NOP
label_338908:
    // 0x338908: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x338908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33890c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x33890cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x338910: 0x0  nop
    ctx->pc = 0x338910u;
    // NOP
    // 0x338914: 0x0  nop
    ctx->pc = 0x338914u;
    // NOP
    // 0x338918: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x338918u;
    {
        const bool branch_taken_0x338918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338918u;
        // 0x33891c: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338918) {
            ctx->pc = 0x3388E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3388e8;
        }
    }
    ctx->pc = 0x338920u;
label_338920:
    // 0x338920: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x338920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_338924:
    // 0x338924: 0x3e00008  jr          $ra
    ctx->pc = 0x338924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33892Cu;
    // 0x33892c: 0x0  nop
    ctx->pc = 0x33892cu;
    // NOP
    ctx->pc = 0x338930u;
}
