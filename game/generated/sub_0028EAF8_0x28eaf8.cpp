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

// Function: sub_0028EAF8
// Address: 0x28eaf8 - 0x28eb50
void sub_0028EAF8_0x28eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EAF8_0x28eaf8");
#endif

    switch (ctx->pc) {
        case 0x28eb14u: goto label_28eb14;
        default: break;
    }

    ctx->pc = 0x28eaf8u;

    // 0x28eaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28eb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28eb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28eb08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28eb0c: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EB0Cu;
    SET_GPR_U32(ctx, 31, 0x28EB14u);
    ctx->pc = 0x28EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB0Cu;
    // 0x28eb10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EB0Cu, 0x28EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB14u;
label_28eb14:
    // 0x28eb14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28eb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EB1Cu;
    {
        const bool branch_taken_0x28eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB1Cu;
        // 0x28eb20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb1c) {
            ctx->pc = 0x28EB38u;
            goto label_28eb38;
        }
    }
    ctx->pc = 0x28EB24u;
    // 0x28eb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28eb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28eb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eb2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb30: 0x80a31c4  j           func_28C710
    ctx->pc = 0x28EB30u;
    ctx->pc = 0x28EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB30u;
    // 0x28eb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C710u;
    sub_0028C710_0x28c710(rdram, ctx, runtime); return;
    ctx->pc = 0x28EB38u;
label_28eb38:
    // 0x28eb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28eb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28eb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb44: 0x3e00008  jr          $ra
    ctx->pc = 0x28EB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB44u;
        // 0x28eb48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB4Cu;
    // 0x28eb4c: 0x0  nop
    ctx->pc = 0x28eb4cu;
    // NOP
    ctx->pc = 0x28eb50u;
}
