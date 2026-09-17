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

// Function: sub_00264328
// Address: 0x264328 - 0x264388
void sub_00264328_0x264328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264328_0x264328");
#endif

    switch (ctx->pc) {
        case 0x264354u: goto label_264354;
        default: break;
    }

    ctx->pc = 0x264328u;

    // 0x264328: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x264328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26432c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26432cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264330: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x264330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x264334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26433c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26433Cu;
    {
        const bool branch_taken_0x26433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26433Cu;
        // 0x264340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26433c) {
            ctx->pc = 0x264358u;
            goto label_264358;
        }
    }
    ctx->pc = 0x264344u;
    // 0x264344: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x264344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x264348: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x264348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x26434c: 0xc0990e2  jal         func_264388
    ctx->pc = 0x26434Cu;
    SET_GPR_U32(ctx, 31, 0x264354u);
    ctx->pc = 0x264350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26434Cu;
    // 0x264350: 0xc52824  and         $a1, $a2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264388u, 0x26434Cu, 0x264354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264354u;
label_264354:
    // 0x264354: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x264354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264358:
    // 0x264358: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x264358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26435c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x26435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x264360: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x264360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26436c: 0x8c6401d8  lw          $a0, 0x1D8($v1)
    ctx->pc = 0x26436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x264370: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x264370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26437c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x264380: 0x3e00008  jr          $ra
    ctx->pc = 0x264380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264380u;
        // 0x264384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264388u;
}
