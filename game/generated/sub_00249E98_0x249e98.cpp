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

// Function: sub_00249E98
// Address: 0x249e98 - 0x249f18
void sub_00249E98_0x249e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E98_0x249e98");
#endif

    switch (ctx->pc) {
        case 0x249ec8u: goto label_249ec8;
        case 0x249f04u: goto label_249f04;
        default: break;
    }

    ctx->pc = 0x249e98u;

    // 0x249e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249e9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x249e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x249ea0: 0x2442fa48  addiu       $v0, $v0, -0x5B8
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x249ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249ea8: 0x2790c9e8  addiu       $s0, $gp, -0x3618
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953448));
    // 0x249eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x249eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x249ebc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x249ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x249ec0: 0xc092792  jal         func_249E48
    ctx->pc = 0x249EC0u;
    SET_GPR_U32(ctx, 31, 0x249EC8u);
    ctx->pc = 0x249EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EC0u;
    // 0x249ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E48u, 0x249EC0u, 0x249EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EC8u;
label_249ec8:
    // 0x249ec8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x249ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x249ecc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x249eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x249ed0: 0x246315e0  addiu       $v1, $v1, 0x15E0
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x249ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249ed8: 0x2e220012  sltiu       $v0, $s1, 0x12
    ctx->pc = 0x249ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x249edc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249EDCu;
    {
        const bool branch_taken_0x249edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EDCu;
        // 0x249ee0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249edc) {
            ctx->pc = 0x249EF8u;
            goto label_249ef8;
        }
    }
    ctx->pc = 0x249EE4u;
    // 0x249ee4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249ee8: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249EE8u;
    {
        const bool branch_taken_0x249ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x249ee8) {
            ctx->pc = 0x249EF8u;
            goto label_249ef8;
        }
    }
    ctx->pc = 0x249EF0u;
    // 0x249ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249ef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x249ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_249ef8:
    // 0x249ef8: 0x8f84c9ec  lw          $a0, -0x3614($gp)
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953452)));
    // 0x249efc: 0xc092792  jal         func_249E48
    ctx->pc = 0x249EFCu;
    SET_GPR_U32(ctx, 31, 0x249F04u);
    ctx->pc = 0x249E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E48u, 0x249EFCu, 0x249F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F04u;
label_249f04:
    // 0x249f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249f10: 0x3e00008  jr          $ra
    ctx->pc = 0x249F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F10u;
        // 0x249f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249F18u;
}
