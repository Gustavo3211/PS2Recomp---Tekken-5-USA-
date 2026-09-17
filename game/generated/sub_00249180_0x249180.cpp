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

// Function: sub_00249180
// Address: 0x249180 - 0x2491c8
void sub_00249180_0x249180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249180_0x249180");
#endif

    switch (ctx->pc) {
        case 0x24919cu: goto label_24919c;
        case 0x2491b4u: goto label_2491b4;
        default: break;
    }

    ctx->pc = 0x249180u;

    // 0x249180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24918c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249194: 0xc0921de  jal         func_248778
    ctx->pc = 0x249194u;
    SET_GPR_U32(ctx, 31, 0x24919Cu);
    ctx->pc = 0x249198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249194u;
    // 0x249198: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248778u, 0x249194u, 0x24919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24919Cu;
label_24919c:
    // 0x24919c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2491a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2491A4u;
    {
        const bool branch_taken_0x2491a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491A4u;
        // 0x2491a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491a4) {
            ctx->pc = 0x2491B4u;
            goto label_2491b4;
        }
    }
    ctx->pc = 0x2491ACu;
    // 0x2491ac: 0xc09263e  jal         func_2498F8
    ctx->pc = 0x2491ACu;
    SET_GPR_U32(ctx, 31, 0x2491B4u);
    ctx->pc = 0x2498F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498F8u, 0x2491ACu, 0x2491B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491B4u;
label_2491b4:
    // 0x2491b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2491b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2491b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2491b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2491bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2491bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2491c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2491C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2491C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491C0u;
        // 0x2491c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2491C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2491C8u;
}
