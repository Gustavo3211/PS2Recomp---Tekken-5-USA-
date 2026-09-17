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

// Function: sub_002B2498
// Address: 0x2b2498 - 0x2b24f8
void sub_002B2498_0x2b2498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2498_0x2b2498");
#endif

    switch (ctx->pc) {
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24e4u: goto label_2b24e4;
        default: break;
    }

    ctx->pc = 0x2b2498u;

label_2b2498:
    // 0x2b2498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b249c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b24a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b24a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b24a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b24a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24ac: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B24ACu;
    {
        const bool branch_taken_0x2b24ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24ACu;
        // 0x2b24b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24ac) {
            ctx->pc = 0x2B24E4u;
            goto label_2b24e4;
        }
    }
    ctx->pc = 0x2B24B4u;
    // 0x2b24b4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b24b8: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B24B8u;
    {
        const bool branch_taken_0x2b24b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b24b8) {
            ctx->pc = 0x2B24BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24B8u;
            // 0x2b24bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B24E8u;
            goto label_2b24e8;
        }
    }
    ctx->pc = 0x2B24C0u;
    // 0x2b24c0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b24c4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2b24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2b24c8: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b24cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b24d0: 0xc0ac926  jal         func_2B2498
    ctx->pc = 0x2B24D0u;
    SET_GPR_U32(ctx, 31, 0x2B24D8u);
    ctx->pc = 0x2B24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24D0u;
    // 0x2b24d4: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2498u;
    goto label_2b2498;
    ctx->pc = 0x2B24D8u;
label_2b24d8:
    // 0x2b24d8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b24dc: 0xc0ac926  jal         func_2B2498
    ctx->pc = 0x2B24DCu;
    SET_GPR_U32(ctx, 31, 0x2B24E4u);
    ctx->pc = 0x2B24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24DCu;
    // 0x2b24e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2498u;
    goto label_2b2498;
    ctx->pc = 0x2B24E4u;
label_2b24e4:
    // 0x2b24e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b24e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b24e8:
    // 0x2b24e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b24e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b24ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b24f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B24F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24F0u;
        // 0x2b24f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B24F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B24F8u;
}
