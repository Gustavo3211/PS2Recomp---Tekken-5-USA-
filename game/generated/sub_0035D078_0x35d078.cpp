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

// Function: sub_0035D078
// Address: 0x35d078 - 0x35d0c8
void sub_0035D078_0x35d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D078_0x35d078");
#endif

    switch (ctx->pc) {
        case 0x35d088u: goto label_35d088;
        default: break;
    }

    ctx->pc = 0x35d078u;

    // 0x35d078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d080: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x35D080u;
    SET_GPR_U32(ctx, 31, 0x35D088u);
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x35D080u, 0x35D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D088u;
label_35d088:
    // 0x35d088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d08c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35d090: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x35d090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35d094: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D094u;
    {
        const bool branch_taken_0x35d094 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D094u;
        // 0x35d098: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d094) {
            ctx->pc = 0x35D0BCu;
            goto label_35d0bc;
        }
    }
    ctx->pc = 0x35D09Cu;
    // 0x35d09c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35d0a0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d0a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d0a8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35d0ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d0b0: 0x9063139e  lbu         $v1, 0x139E($v1)
    ctx->pc = 0x35d0b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5022)));
    // 0x35d0b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35d0b8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x35d0b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_35d0bc:
    // 0x35d0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D0C0u;
        // 0x35d0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D0C8u;
}
