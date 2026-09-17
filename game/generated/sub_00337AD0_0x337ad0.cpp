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

// Function: sub_00337AD0
// Address: 0x337ad0 - 0x337b40
void sub_00337AD0_0x337ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337AD0_0x337ad0");
#endif

    ctx->pc = 0x337ad0u;

    // 0x337ad0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x337ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x337ad4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337ad8: 0x24650a60  addiu       $a1, $v1, 0xA60
    ctx->pc = 0x337ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337adc: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x337adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x337ae0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x440A74u));
    // 0x337ae4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x337AE4u;
    {
        const bool branch_taken_0x337ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x337AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AE4u;
        // 0x337ae8: 0x43100  sll         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ae4) {
            ctx->pc = 0x337B34u;
            goto label_337b34;
        }
    }
    ctx->pc = 0x337AECu;
    // 0x337aec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x337aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x337af0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x337af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337af8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x337af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x337afc: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x337afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x337b00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x337b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x337b04: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x337b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x337b08: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x337b08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x337b0c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x337b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x337b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x337b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x337b14: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x337b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x337b18: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x337b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x337b1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x337b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x337b20: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x337b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x337b24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337b28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x337b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x337b2c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x337b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x337b30: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x337b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_337b34:
    // 0x337b34: 0x3e00008  jr          $ra
    ctx->pc = 0x337B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337B3Cu;
    // 0x337b3c: 0x0  nop
    ctx->pc = 0x337b3cu;
    // NOP
    ctx->pc = 0x337b40u;
}
