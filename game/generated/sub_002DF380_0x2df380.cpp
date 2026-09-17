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

// Function: sub_002DF380
// Address: 0x2df380 - 0x2df3c8
void sub_002DF380_0x2df380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF380_0x2df380");
#endif

    switch (ctx->pc) {
        case 0x2df380u: goto label_2df380;
        case 0x2df384u: goto label_2df384;
        case 0x2df388u: goto label_2df388;
        case 0x2df38cu: goto label_2df38c;
        case 0x2df390u: goto label_2df390;
        case 0x2df394u: goto label_2df394;
        case 0x2df398u: goto label_2df398;
        case 0x2df39cu: goto label_2df39c;
        case 0x2df3a0u: goto label_2df3a0;
        case 0x2df3a4u: goto label_2df3a4;
        case 0x2df3a8u: goto label_2df3a8;
        case 0x2df3acu: goto label_2df3ac;
        case 0x2df3b0u: goto label_2df3b0;
        case 0x2df3b4u: goto label_2df3b4;
        case 0x2df3b8u: goto label_2df3b8;
        case 0x2df3bcu: goto label_2df3bc;
        case 0x2df3c0u: goto label_2df3c0;
        case 0x2df3c4u: goto label_2df3c4;
        default: break;
    }

    ctx->pc = 0x2df380u;

label_2df380:
    // 0x2df380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2df384:
    // 0x2df384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2df388:
    // 0x2df388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2df38c:
    // 0x2df38c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2df390:
    // 0x2df390: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2df394:
    // 0x2df394: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2df398:
    if (ctx->pc == 0x2DF398u) {
        ctx->pc = 0x2DF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF394u;
        // 0x2df398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF39Cu;
        goto label_2df39c;
    }
    ctx->pc = 0x2DF394u;
    {
        const bool branch_taken_0x2df394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF394u;
        // 0x2df398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df394) {
            ctx->pc = 0x2DF3B4u;
            goto label_2df3b4;
        }
    }
    ctx->pc = 0x2DF39Cu;
label_2df39c:
    // 0x2df39c: 0x8e300068  lw          $s0, 0x68($s1)
    ctx->pc = 0x2df39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2df3a0:
    // 0x2df3a0: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x2df3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_2df3a4:
    // 0x2df3a4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2df3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2df3a8:
    // 0x2df3a8: 0x40f809  jalr        $v0
label_2df3ac:
    if (ctx->pc == 0x2DF3ACu) {
        ctx->pc = 0x2DF3B0u;
        goto label_2df3b0;
    }
    ctx->pc = 0x2DF3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF3B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3A8u, 0x2DF3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF3B0u;
label_2df3b0:
    // 0x2df3b0: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x2df3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
label_2df3b4:
    // 0x2df3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df3b8:
    // 0x2df3b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2df3bc:
    // 0x2df3bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2df3c0:
    // 0x2df3c0: 0x3e00008  jr          $ra
label_2df3c4:
    if (ctx->pc == 0x2DF3C4u) {
        ctx->pc = 0x2DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3C0u;
        // 0x2df3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF3C8u;
        goto label_fallthrough_0x2df3c0;
    }
    ctx->pc = 0x2DF3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3C0u;
        // 0x2df3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2df3c0:
    ctx->pc = 0x2DF3C8u;
}
