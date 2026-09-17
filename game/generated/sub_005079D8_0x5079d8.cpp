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

// Function: sub_005079D8
// Address: 0x5079d8 - 0x507a78
void sub_005079D8_0x5079d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005079D8_0x5079d8");
#endif

    switch (ctx->pc) {
        case 0x5079fcu: goto label_5079fc;
        default: break;
    }

    ctx->pc = 0x5079d8u;

    // 0x5079d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5079d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5079dc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5079dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5079e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5079e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5079e4: 0x2450c580  addiu       $s0, $v0, -0x3A80
    ctx->pc = 0x5079e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x5079e8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x5079e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5079ec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5079ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC580u));
    // 0x5079f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5079f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5079f4: 0xc14481c  jal         func_512070
    ctx->pc = 0x5079F4u;
    SET_GPR_U32(ctx, 31, 0x5079FCu);
    ctx->pc = 0x5079F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5079F4u;
    // 0x5079f8: 0x2484c57c  addiu       $a0, $a0, -0x3A84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5079F4u, 0x5079FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5079FCu;
label_5079fc:
    // 0x5079fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5079fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x507a00: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x507A00u;
    {
        const bool branch_taken_0x507a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x507A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507A00u;
        // 0x507a04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507a00) {
            ctx->pc = 0x507A64u;
            goto label_507a64;
        }
    }
    ctx->pc = 0x507A08u;
    // 0x507a08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a0c: 0x24020398  addiu       $v0, $zero, 0x398
    ctx->pc = 0x507a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    // 0x507a10: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x507a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x507a14: 0x240200d6  addiu       $v0, $zero, 0xD6
    ctx->pc = 0x507a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x507a18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a1c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x507a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x507a20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a24: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x507a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x507a28: 0x240201b0  addiu       $v0, $zero, 0x1B0
    ctx->pc = 0x507a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x507a2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x507a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a30: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x507a30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x507a34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a38: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x507a38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x507a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x507a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a40: 0xa446000a  sh          $a2, 0xA($v0)
    ctx->pc = 0x507a40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x507a44: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x507a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x507a48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a4c: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x507a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x507a50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a54: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x507a54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x507a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x507a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507a5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x507a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x507a60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_507a64:
    // 0x507a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507a68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x507a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x507A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507A6Cu;
        // 0x507a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507A74u;
    // 0x507a74: 0x0  nop
    ctx->pc = 0x507a74u;
    // NOP
    ctx->pc = 0x507a78u;
}
