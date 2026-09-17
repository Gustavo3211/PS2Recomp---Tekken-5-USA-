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

// Function: sub_0026C4D8
// Address: 0x26c4d8 - 0x26c530
void sub_0026C4D8_0x26c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4D8_0x26c4d8");
#endif

    switch (ctx->pc) {
        case 0x26c500u: goto label_26c500;
        default: break;
    }

    ctx->pc = 0x26c4d8u;

    // 0x26c4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c4dc: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x26c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x26c4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c4ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26c4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c4f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c4f8: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x26C4F8u;
    SET_GPR_U32(ctx, 31, 0x26C500u);
    ctx->pc = 0x26C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4F8u;
    // 0x26c4fc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x26C4F8u, 0x26C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C500u;
label_26c500:
    // 0x26c500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C500u;
    {
        const bool branch_taken_0x26c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C500u;
        // 0x26c504: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c500) {
            ctx->pc = 0x26C518u;
            goto label_26c518;
        }
    }
    ctx->pc = 0x26C508u;
    // 0x26c508: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c50c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26c510: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26c510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26c514: 0x2c710001  sltiu       $s1, $v1, 0x1
    ctx->pc = 0x26c514u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c518:
    // 0x26c518: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26c518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c528: 0x3e00008  jr          $ra
    ctx->pc = 0x26C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C528u;
        // 0x26c52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C530u;
}
