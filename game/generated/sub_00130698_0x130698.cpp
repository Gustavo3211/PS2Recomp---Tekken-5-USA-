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

// Function: sub_00130698
// Address: 0x130698 - 0x1306e8
void sub_00130698_0x130698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130698_0x130698");
#endif

    switch (ctx->pc) {
        case 0x1306bcu: goto label_1306bc;
        case 0x1306d4u: goto label_1306d4;
        default: break;
    }

    ctx->pc = 0x130698u;

    // 0x130698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13069c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x13069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1306a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1306a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1306a4: 0x24500110  addiu       $s0, $v0, 0x110
    ctx->pc = 0x1306a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1306a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1306a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0110u));
    // 0x1306ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1306ACu;
    {
        const bool branch_taken_0x1306ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1306B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306ACu;
        // 0x1306b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306ac) {
            ctx->pc = 0x1306D4u;
            goto label_1306d4;
        }
    }
    ctx->pc = 0x1306B4u;
    // 0x1306b4: 0xc04c054  jal         func_130150
    ctx->pc = 0x1306B4u;
    SET_GPR_U32(ctx, 31, 0x1306BCu);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x1306B4u, 0x1306BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306BCu;
label_1306bc:
    // 0x1306bc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1306bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1306c0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1306c4: 0x24a5f400  addiu       $a1, $a1, -0xC00
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1306c8: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x1306cc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x1306CCu;
    SET_GPR_U32(ctx, 31, 0x1306D4u);
    ctx->pc = 0x1306D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306CCu;
    // 0x1306d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x1306CCu, 0x1306D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306D4u;
label_1306d4:
    // 0x1306d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1306d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1306d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1306dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1306dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1306e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1306E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1306E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E0u;
        // 0x1306e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1306E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1306E8u;
}
