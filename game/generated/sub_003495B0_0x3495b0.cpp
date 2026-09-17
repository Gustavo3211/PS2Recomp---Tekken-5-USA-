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

// Function: sub_003495B0
// Address: 0x3495b0 - 0x349608
void sub_003495B0_0x3495b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003495B0_0x3495b0");
#endif

    switch (ctx->pc) {
        case 0x3495d0u: goto label_3495d0;
        default: break;
    }

    ctx->pc = 0x3495b0u;

    // 0x3495b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3495b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3495b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3495b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3495b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3495b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3495bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3495c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3495c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3495c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3495c8: 0xc0d2582  jal         func_349608
    ctx->pc = 0x3495C8u;
    SET_GPR_U32(ctx, 31, 0x3495D0u);
    ctx->pc = 0x3495CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495C8u;
    // 0x3495cc: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349608u, 0x3495C8u, 0x3495D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495D0u;
label_3495d0:
    // 0x3495d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3495D0u;
    {
        const bool branch_taken_0x3495d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3495D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495D0u;
        // 0x3495d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495d0) {
            ctx->pc = 0x3495F0u;
            goto label_3495f0;
        }
    }
    ctx->pc = 0x3495D8u;
    // 0x3495d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3495d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3495dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3495dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3495e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3495e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3495e4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3495E4u;
    ctx->pc = 0x3495E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495E4u;
    // 0x3495e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3495ECu;
    // 0x3495ec: 0x0  nop
    ctx->pc = 0x3495ecu;
    // NOP
label_3495f0:
    // 0x3495f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3495f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3495f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3495f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3495f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3495f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3495fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3495FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495FCu;
        // 0x349600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3495FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349604u;
    // 0x349604: 0x0  nop
    ctx->pc = 0x349604u;
    // NOP
    ctx->pc = 0x349608u;
}
