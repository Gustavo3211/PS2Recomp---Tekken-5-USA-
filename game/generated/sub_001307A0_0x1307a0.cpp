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

// Function: sub_001307A0
// Address: 0x1307a0 - 0x130808
void sub_001307A0_0x1307a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001307A0_0x1307a0");
#endif

    switch (ctx->pc) {
        case 0x1307d0u: goto label_1307d0;
        default: break;
    }

    ctx->pc = 0x1307a0u;

    // 0x1307a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1307a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1307a4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1307a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1307a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1307ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1307acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307b0: 0x24424ce0  addiu       $v0, $v0, 0x4CE0
    ctx->pc = 0x1307b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19680));
    // 0x1307b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1307b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1307b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1307b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1307bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1307bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1307c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1307c4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1307c8: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x1307C8u;
    SET_GPR_U32(ctx, 31, 0x1307D0u);
    ctx->pc = 0x1307CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307C8u;
    // 0x1307cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x1307C8u, 0x1307D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307D0u;
label_1307d0:
    // 0x1307d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1307D0u;
    {
        const bool branch_taken_0x1307d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1307D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307D0u;
        // 0x1307d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307d0) {
            ctx->pc = 0x1307F0u;
            goto label_1307f0;
        }
    }
    ctx->pc = 0x1307D8u;
    // 0x1307d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1307d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1307dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1307dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1307e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1307e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1307e4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x1307E4u;
    ctx->pc = 0x1307E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307E4u;
    // 0x1307e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1307ECu;
    // 0x1307ec: 0x0  nop
    ctx->pc = 0x1307ecu;
    // NOP
label_1307f0:
    // 0x1307f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1307f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1307f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1307f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1307f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1307f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1307fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1307FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307FCu;
        // 0x130800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1307FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130804u;
    // 0x130804: 0x0  nop
    ctx->pc = 0x130804u;
    // NOP
    ctx->pc = 0x130808u;
}
