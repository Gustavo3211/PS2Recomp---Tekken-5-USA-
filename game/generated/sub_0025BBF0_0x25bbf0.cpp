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

// Function: sub_0025BBF0
// Address: 0x25bbf0 - 0x25bc60
void sub_0025BBF0_0x25bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BBF0_0x25bbf0");
#endif

    switch (ctx->pc) {
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc30u: goto label_25bc30;
        default: break;
    }

    ctx->pc = 0x25bbf0u;

    // 0x25bbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25bbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25bbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bbfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25bc00: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x25bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x25bc04: 0xc0a04ac  jal         func_2812B0
    ctx->pc = 0x25BC04u;
    SET_GPR_U32(ctx, 31, 0x25BC0Cu);
    ctx->pc = 0x25BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC04u;
    // 0x25bc08: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812B0u, 0x25BC04u, 0x25BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC0Cu;
label_25bc0c:
    // 0x25bc0c: 0xa2000204  sb          $zero, 0x204($s0)
    ctx->pc = 0x25bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 0));
    // 0x25bc10: 0xae0007c8  sw          $zero, 0x7C8($s0)
    ctx->pc = 0x25bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
    // 0x25bc14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc18: 0xae0007f8  sw          $zero, 0x7F8($s0)
    ctx->pc = 0x25bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 0));
    // 0x25bc1c: 0xae0007fc  sw          $zero, 0x7FC($s0)
    ctx->pc = 0x25bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2044), GPR_U32(ctx, 0));
    // 0x25bc20: 0xae000800  sw          $zero, 0x800($s0)
    ctx->pc = 0x25bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x25bc24: 0xae000804  sw          $zero, 0x804($s0)
    ctx->pc = 0x25bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 0));
    // 0x25bc28: 0xae0007f0  sw          $zero, 0x7F0($s0)
    ctx->pc = 0x25bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
    // 0x25bc2c: 0x0  nop
    ctx->pc = 0x25bc2cu;
    // NOP
label_25bc30:
    // 0x25bc30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25bc34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25bc38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25bc3c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x25bc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25bc40: 0x0  nop
    ctx->pc = 0x25bc40u;
    // NOP
    // 0x25bc44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25BC44u;
    {
        const bool branch_taken_0x25bc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC44u;
        // 0x25bc48: 0xac4007e0  sw          $zero, 0x7E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc44) {
            ctx->pc = 0x25BC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bc30;
        }
    }
    ctx->pc = 0x25BC4Cu;
    // 0x25bc4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25bc4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bc50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x25BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC54u;
        // 0x25bc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BC5Cu;
    // 0x25bc5c: 0x0  nop
    ctx->pc = 0x25bc5cu;
    // NOP
    ctx->pc = 0x25bc60u;
}
