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

// Function: sub_001FC3A8
// Address: 0x1fc3a8 - 0x1fc3f8
void sub_001FC3A8_0x1fc3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC3A8_0x1fc3a8");
#endif

    switch (ctx->pc) {
        case 0x1fc3b8u: goto label_1fc3b8;
        default: break;
    }

    ctx->pc = 0x1fc3a8u;

    // 0x1fc3a8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b4: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1fc3b8:
    // 0x1fc3b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fc3bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fc3c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc3c4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1fc3c8: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fc3cc: 0x28c400c0  slti        $a0, $a2, 0xC0
    ctx->pc = 0x1fc3ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1fc3d0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC3D0u;
    {
        const bool branch_taken_0x1fc3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3D0u;
        // 0x1fc3d4: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3d0) {
            ctx->pc = 0x1FC3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc3b8;
        }
    }
    ctx->pc = 0x1FC3D8u;
    // 0x1fc3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3D8u;
        // 0x1fc3dc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC3E0u;
    // 0x1fc3e0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc3e4: 0x8c6203d0  lw          $v0, 0x3D0($v1)
    ctx->pc = 0x1fc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x1fc3e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1fc3e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1fc3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3ECu;
        // 0x1fc3f0: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC3F4u;
    // 0x1fc3f4: 0x0  nop
    ctx->pc = 0x1fc3f4u;
    // NOP
    ctx->pc = 0x1fc3f8u;
}
