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

// Function: sub_00130558
// Address: 0x130558 - 0x1305c0
void sub_00130558_0x130558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130558_0x130558");
#endif

    switch (ctx->pc) {
        case 0x130588u: goto label_130588;
        default: break;
    }

    ctx->pc = 0x130558u;

    // 0x130558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13055c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130568: 0x24424bf8  addiu       $v0, $v0, 0x4BF8
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19448));
    // 0x13056c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130578: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13057c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x13057cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130580: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130580u;
    SET_GPR_U32(ctx, 31, 0x130588u);
    ctx->pc = 0x130584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130580u;
    // 0x130584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130580u, 0x130588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130588u;
label_130588:
    // 0x130588: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130588u;
    {
        const bool branch_taken_0x130588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130588u;
        // 0x13058c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130588) {
            ctx->pc = 0x1305A8u;
            goto label_1305a8;
        }
    }
    ctx->pc = 0x130590u;
    // 0x130590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13059c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x13059Cu;
    ctx->pc = 0x1305A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13059Cu;
    // 0x1305a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1305A4u;
    // 0x1305a4: 0x0  nop
    ctx->pc = 0x1305a4u;
    // NOP
label_1305a8:
    // 0x1305a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1305a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1305ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1305acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1305b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1305b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1305b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1305B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305B4u;
        // 0x1305b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1305B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1305BCu;
    // 0x1305bc: 0x0  nop
    ctx->pc = 0x1305bcu;
    // NOP
    ctx->pc = 0x1305c0u;
}
