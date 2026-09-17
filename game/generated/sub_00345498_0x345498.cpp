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

// Function: sub_00345498
// Address: 0x345498 - 0x345548
void sub_00345498_0x345498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345498_0x345498");
#endif

    switch (ctx->pc) {
        case 0x3454c8u: goto label_3454c8;
        case 0x3454d0u: goto label_3454d0;
        case 0x345500u: goto label_345500;
        case 0x345518u: goto label_345518;
        default: break;
    }

    ctx->pc = 0x345498u;

    // 0x345498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34549c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3454a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3454a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3454a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3454a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3454a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3454ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3454acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3454b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3454b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3454b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3454B4u;
    {
        const bool branch_taken_0x3454b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3454B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454B4u;
        // 0x3454b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454b4) {
            ctx->pc = 0x3454E4u;
            goto label_3454e4;
        }
    }
    ctx->pc = 0x3454BCu;
    // 0x3454bc: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3454bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3454c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3454c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454c4: 0x0  nop
    ctx->pc = 0x3454c4u;
    // NOP
label_3454c8:
    // 0x3454c8: 0xc0d1328  jal         func_344CA0
    ctx->pc = 0x3454C8u;
    SET_GPR_U32(ctx, 31, 0x3454D0u);
    ctx->pc = 0x3454CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454C8u;
    // 0x3454cc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344CA0u, 0x3454C8u, 0x3454D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454D0u;
label_3454d0:
    // 0x3454d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3454d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3454d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3454d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3454d8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3454d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3454dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3454DCu;
    {
        const bool branch_taken_0x3454dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3454E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454DCu;
        // 0x3454e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454dc) {
            ctx->pc = 0x3454C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3454c8;
        }
    }
    ctx->pc = 0x3454E4u;
label_3454e4:
    // 0x3454e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3454e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3454e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3454e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3454ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3454ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3454f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3454f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3454f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3454F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3454F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454F4u;
        // 0x3454f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3454F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3454FCu;
    // 0x3454fc: 0x0  nop
    ctx->pc = 0x3454fcu;
    // NOP
label_345500:
    // 0x345500: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x345504: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x345504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x345508: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34550c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x34550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x345510: 0x3e00008  jr          $ra
    ctx->pc = 0x345510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345510u;
        // 0x345514: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345518u;
label_345518:
    // 0x345518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34551c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x345520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345524: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x345528: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34552c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345530: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x345530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x345534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345538: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x345538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x34553c: 0x80d23a6  j           func_348E98
    ctx->pc = 0x34553Cu;
    ctx->pc = 0x345540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34553Cu;
    // 0x345540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348E98u, 0x34553Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345544u;
    // 0x345544: 0x0  nop
    ctx->pc = 0x345544u;
    // NOP
    ctx->pc = 0x345548u;
}
