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

// Function: sub_00505CA0
// Address: 0x505ca0 - 0x505d58
void sub_00505CA0_0x505ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505CA0_0x505ca0");
#endif

    switch (ctx->pc) {
        case 0x505cc4u: goto label_505cc4;
        default: break;
    }

    ctx->pc = 0x505ca0u;

    // 0x505ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505ca4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505ca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x505ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x505cac: 0x2450c530  addiu       $s0, $v0, -0x3AD0
    ctx->pc = 0x505cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x505cb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x505cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC530u));
    // 0x505cb4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x505cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x505cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x505cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x505cbc: 0xc14481c  jal         func_512070
    ctx->pc = 0x505CBCu;
    SET_GPR_U32(ctx, 31, 0x505CC4u);
    ctx->pc = 0x505CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505CBCu;
    // 0x505cc0: 0x2484c528  addiu       $a0, $a0, -0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x505CBCu, 0x505CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505CC4u;
label_505cc4:
    // 0x505cc4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x505cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x505ccc: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x505CCCu;
    {
        const bool branch_taken_0x505ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x505CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505CCCu;
        // 0x505cd0: 0x2465c548  addiu       $a1, $v1, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505ccc) {
            ctx->pc = 0x505D44u;
            goto label_505d44;
        }
    }
    ctx->pc = 0x505CD4u;
    // 0x505cd4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505cd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x505cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505cdc: 0x9444c534  lhu         $a0, -0x3ACC($v0)
    ctx->pc = 0x505cdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC534u));
    // 0x505ce0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x505ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x505ce4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505ce8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x505ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505cec: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x505cecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x505cf0: 0x9464c540  lhu         $a0, -0x3AC0($v1)
    ctx->pc = 0x505cf0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC540u));
    // 0x505cf4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505cf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x505cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505cfc: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x505cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x505d00: 0x9464c544  lhu         $a0, -0x3ABC($v1)
    ctx->pc = 0x505d00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC544u));
    // 0x505d04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x505d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d08: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x505d08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x505d0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x505d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d10: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x505d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x505d14: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x505d14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x505d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x505d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d1c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x505d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x505d20: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x505d20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x505d24: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x505d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x505d28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x505d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d2c: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x505d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x505d30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x505d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d34: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x505d34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x505d38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x505d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505d3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x505d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x505d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x505d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_505d44:
    // 0x505d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505d48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x505d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x505d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x505D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505D4Cu;
        // 0x505d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505D54u;
    // 0x505d54: 0x0  nop
    ctx->pc = 0x505d54u;
    // NOP
    ctx->pc = 0x505d58u;
}
