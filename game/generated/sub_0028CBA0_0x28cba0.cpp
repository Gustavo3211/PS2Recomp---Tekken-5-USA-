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

// Function: sub_0028CBA0
// Address: 0x28cba0 - 0x28cc28
void sub_0028CBA0_0x28cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CBA0_0x28cba0");
#endif

    switch (ctx->pc) {
        case 0x28cbb4u: goto label_28cbb4;
        case 0x28cbc8u: goto label_28cbc8;
        case 0x28cbd8u: goto label_28cbd8;
        default: break;
    }

    ctx->pc = 0x28cba0u;

    // 0x28cba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28cbac: 0xc0a398c  jal         func_28E630
    ctx->pc = 0x28CBACu;
    SET_GPR_U32(ctx, 31, 0x28CBB4u);
    ctx->pc = 0x28CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBACu;
    // 0x28cbb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E630u, 0x28CBACu, 0x28CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBB4u;
label_28cbb4:
    // 0x28cbb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CBB4u;
    {
        const bool branch_taken_0x28cbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBB4u;
        // 0x28cbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbb4) {
            ctx->pc = 0x28CBC0u;
            goto label_28cbc0;
        }
    }
    ctx->pc = 0x28CBBCu;
    // 0x28cbbc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x28cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_28cbc0:
    // 0x28cbc0: 0xc0820a0  jal         func_208280
    ctx->pc = 0x28CBC0u;
    SET_GPR_U32(ctx, 31, 0x28CBC8u);
    ctx->pc = 0x208280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208280u, 0x28CBC0u, 0x28CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBC8u;
label_28cbc8:
    // 0x28cbc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CBC8u;
    {
        const bool branch_taken_0x28cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBC8u;
        // 0x28cbcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbc8) {
            ctx->pc = 0x28CC10u;
            goto label_28cc10;
        }
    }
    ctx->pc = 0x28CBD0u;
    // 0x28cbd0: 0xc0a39be  jal         func_28E6F8
    ctx->pc = 0x28CBD0u;
    SET_GPR_U32(ctx, 31, 0x28CBD8u);
    ctx->pc = 0x28E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6F8u, 0x28CBD0u, 0x28CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBD8u;
label_28cbd8:
    // 0x28cbd8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28CBD8u;
    {
        const bool branch_taken_0x28cbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cbd8) {
            ctx->pc = 0x28CBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CBD8u;
            // 0x28cbdc: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CC04u;
            goto label_28cc04;
        }
    }
    ctx->pc = 0x28CBE0u;
    // 0x28cbe0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x28cbe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CBE4u;
    {
        const bool branch_taken_0x28cbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBE4u;
        // 0x28cbe8: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbe4) {
            ctx->pc = 0x28CC00u;
            goto label_28cc00;
        }
    }
    ctx->pc = 0x28CBECu;
    // 0x28cbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cbf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28cbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28cbf4: 0x24846ef8  addiu       $a0, $a0, 0x6EF8
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28408));
    // 0x28cbf8: 0x80a330a  j           func_28CC28
    ctx->pc = 0x28CBF8u;
    ctx->pc = 0x28CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBF8u;
    // 0x28cbfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CC28u;
    sub_0028CC28_0x28cc28(rdram, ctx, runtime); return;
    ctx->pc = 0x28CC00u;
label_28cc00:
    // 0x28cc00: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x28cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_28cc04:
    // 0x28cc04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC04u;
    {
        const bool branch_taken_0x28cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC04u;
        // 0x28cc08: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc04) {
            ctx->pc = 0x28CC18u;
            goto label_28cc18;
        }
    }
    ctx->pc = 0x28CC0Cu;
    // 0x28cc0c: 0x0  nop
    ctx->pc = 0x28cc0cu;
    // NOP
label_28cc10:
    // 0x28cc10: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x28cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x28cc14: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x28cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_28cc18:
    // 0x28cc18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28cc20: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC20u;
        // 0x28cc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CC28u;
}
