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

// Function: sub_00130750
// Address: 0x130750 - 0x1307a0
void sub_00130750_0x130750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130750_0x130750");
#endif

    switch (ctx->pc) {
        case 0x130774u: goto label_130774;
        case 0x13078cu: goto label_13078c;
        default: break;
    }

    ctx->pc = 0x130750u;

    // 0x130750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130754: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x130754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13075c: 0x245000e0  addiu       $s0, $v0, 0xE0
    ctx->pc = 0x13075cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x130760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F00E0u));
    // 0x130764: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130764u;
    {
        const bool branch_taken_0x130764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130764) {
            ctx->pc = 0x13078Cu;
            goto label_13078c;
        }
    }
    ctx->pc = 0x13076Cu;
    // 0x13076c: 0xc04c054  jal         func_130150
    ctx->pc = 0x13076Cu;
    SET_GPR_U32(ctx, 31, 0x130774u);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x13076Cu, 0x130774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130774u;
label_130774:
    // 0x130774: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130778: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x13077c: 0x24a5f418  addiu       $a1, $a1, -0xBE8
    ctx->pc = 0x13077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964248));
    // 0x130780: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x130780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x130784: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130784u;
    SET_GPR_U32(ctx, 31, 0x13078Cu);
    ctx->pc = 0x130788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130784u;
    // 0x130788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130784u, 0x13078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130798: 0x3e00008  jr          $ra
    ctx->pc = 0x130798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130798u;
        // 0x13079c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1307A0u;
}
