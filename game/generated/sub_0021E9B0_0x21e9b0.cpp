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

// Function: sub_0021E9B0
// Address: 0x21e9b0 - 0x21ea20
void sub_0021E9B0_0x21e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E9B0_0x21e9b0");
#endif

    switch (ctx->pc) {
        case 0x21e9d0u: goto label_21e9d0;
        case 0x21e9f0u: goto label_21e9f0;
        default: break;
    }

    ctx->pc = 0x21e9b0u;

    // 0x21e9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e9b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21e9b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21e9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21e9c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21e9cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e9d0:
    // 0x21e9d0: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x21e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x21e9d4: 0x12913a  dsrl        $s2, $s2, 4
    ctx->pc = 0x21e9d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 4);
    // 0x21e9d8: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x21e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x21e9dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21e9e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e9e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21e9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e9e8: 0xc087a52  jal         func_21E948
    ctx->pc = 0x21E9E8u;
    SET_GPR_U32(ctx, 31, 0x21E9F0u);
    ctx->pc = 0x21E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9E8u;
    // 0x21e9ec: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E948u, 0x21E9E8u, 0x21E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9F0u;
label_21e9f0:
    // 0x21e9f0: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x21e9f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21e9f4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x21e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e9f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21E9F8u;
    {
        const bool branch_taken_0x21e9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9F8u;
        // 0x21e9fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9f8) {
            ctx->pc = 0x21E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e9d0;
        }
    }
    ctx->pc = 0x21EA00u;
    // 0x21ea00: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x21ea00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ea04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ea08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ea08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ea0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ea0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ea10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA14u;
        // 0x21ea18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA1Cu;
    // 0x21ea1c: 0x0  nop
    ctx->pc = 0x21ea1cu;
    // NOP
    ctx->pc = 0x21ea20u;
}
