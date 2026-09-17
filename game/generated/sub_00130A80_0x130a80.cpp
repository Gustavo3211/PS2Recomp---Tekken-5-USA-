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

// Function: sub_00130A80
// Address: 0x130a80 - 0x130ae8
void sub_00130A80_0x130a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130A80_0x130a80");
#endif

    switch (ctx->pc) {
        case 0x130ab0u: goto label_130ab0;
        default: break;
    }

    ctx->pc = 0x130a80u;

    // 0x130a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130a84: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a90: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x130a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130a9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130aa0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x130aa4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x130aa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130aa8: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130AA8u;
    SET_GPR_U32(ctx, 31, 0x130AB0u);
    ctx->pc = 0x130AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AA8u;
    // 0x130aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130AA8u, 0x130AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AB0u;
label_130ab0:
    // 0x130ab0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130AB0u;
    {
        const bool branch_taken_0x130ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AB0u;
        // 0x130ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ab0) {
            ctx->pc = 0x130AD0u;
            goto label_130ad0;
        }
    }
    ctx->pc = 0x130AB8u;
    // 0x130ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130abc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130ac4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130AC4u;
    ctx->pc = 0x130AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AC4u;
    // 0x130ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x130ACCu;
    // 0x130acc: 0x0  nop
    ctx->pc = 0x130accu;
    // NOP
label_130ad0:
    // 0x130ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130adc: 0x3e00008  jr          $ra
    ctx->pc = 0x130ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ADCu;
        // 0x130ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130AE4u;
    // 0x130ae4: 0x0  nop
    ctx->pc = 0x130ae4u;
    // NOP
    ctx->pc = 0x130ae8u;
}
