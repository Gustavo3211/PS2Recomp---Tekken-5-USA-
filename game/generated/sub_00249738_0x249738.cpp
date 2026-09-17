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

// Function: sub_00249738
// Address: 0x249738 - 0x2497b0
void sub_00249738_0x249738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249738_0x249738");
#endif

    switch (ctx->pc) {
        case 0x2497a0u: goto label_2497a0;
        default: break;
    }

    ctx->pc = 0x249738u;

    // 0x249738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24973c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24973cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249744: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x249744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x249748: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x249748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x24974c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24974cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x249750: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x249750u;
    {
        const bool branch_taken_0x249750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249750u;
        // 0x249754: 0x28672301  slti        $a3, $v1, 0x2301 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8961) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249750) {
            ctx->pc = 0x2497A0u;
            goto label_2497a0;
        }
    }
    ctx->pc = 0x249758u;
    // 0x249758: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x249758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x24975c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x24975cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x249760: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x249760u;
    {
        const bool branch_taken_0x249760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x249764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249760u;
        // 0x249764: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249760) {
            ctx->pc = 0x249778u;
            goto label_249778;
        }
    }
    ctx->pc = 0x249768u;
    // 0x249768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24976c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x249770: 0x809257e  j           func_2495F8
    ctx->pc = 0x249770u;
    ctx->pc = 0x249774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249770u;
    // 0x249774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495F8u;
    sub_002495F8_0x2495f8(rdram, ctx, runtime); return;
    ctx->pc = 0x249778u;
label_249778:
    // 0x249778: 0x3402a3ff  ori         $v0, $zero, 0xA3FF
    ctx->pc = 0x249778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41983);
    // 0x24977c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249780: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249780u;
    {
        const bool branch_taken_0x249780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249780u;
        // 0x249784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249780) {
            ctx->pc = 0x249798u;
            goto label_249798;
        }
    }
    ctx->pc = 0x249788u;
    // 0x249788: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24978c: 0x809257e  j           func_2495F8
    ctx->pc = 0x24978Cu;
    ctx->pc = 0x249790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24978Cu;
    // 0x249790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495F8u;
    sub_002495F8_0x2495f8(rdram, ctx, runtime); return;
    ctx->pc = 0x249794u;
    // 0x249794: 0x0  nop
    ctx->pc = 0x249794u;
    // NOP
label_249798:
    // 0x249798: 0xc09257e  jal         func_2495F8
    ctx->pc = 0x249798u;
    SET_GPR_U32(ctx, 31, 0x2497A0u);
    ctx->pc = 0x24979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249798u;
    // 0x24979c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495F8u, 0x249798u, 0x2497A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497A0u;
label_2497a0:
    // 0x2497a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2497a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2497a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2497A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2497A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A4u;
        // 0x2497a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2497A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2497ACu;
    // 0x2497ac: 0x0  nop
    ctx->pc = 0x2497acu;
    // NOP
    ctx->pc = 0x2497b0u;
}
