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

// Function: sub_002B9168
// Address: 0x2b9168 - 0x2b91f0
void sub_002B9168_0x2b9168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9168_0x2b9168");
#endif

    switch (ctx->pc) {
        case 0x2b9194u: goto label_2b9194;
        default: break;
    }

    ctx->pc = 0x2b9168u;

    // 0x2b9168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b916c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2b916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b9170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9174: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2b9174u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2b9178: 0x2610d120  addiu       $s0, $s0, -0x2EE0
    ctx->pc = 0x2b9178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955296));
    // 0x2b917c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9184: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2b9184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b9188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b918c: 0xc0ae47c  jal         func_2B91F0
    ctx->pc = 0x2B918Cu;
    SET_GPR_U32(ctx, 31, 0x2B9194u);
    ctx->pc = 0x2B9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B918Cu;
    // 0x2b9190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91F0u, 0x2B918Cu, 0x2B9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9194u;
label_2b9194:
    // 0x2b9194: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x2b9194u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2b9198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b919c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2b919cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2b91a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b91a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b91a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b91a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b91a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A8u;
        // 0x2b91ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B91B0u;
    // 0x2b91b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b91b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91b4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B91B4u;
    {
        const bool branch_taken_0x2b91b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91b4) {
            ctx->pc = 0x2B91E8u;
            goto label_2b91e8;
        }
    }
    ctx->pc = 0x2B91BCu;
    // 0x2b91bc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2b91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2b91c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b91c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b91c8: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2b91c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b91cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B91CCu;
    {
        const bool branch_taken_0x2b91cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91CCu;
        // 0x2b91d0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91cc) {
            ctx->pc = 0x2B91E8u;
            goto label_2b91e8;
        }
    }
    ctx->pc = 0x2B91D4u;
    // 0x2b91d4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2b91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2b91d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b91dc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2b91e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b91e4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2b91e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_2b91e8:
    // 0x2b91e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B91F0u;
}
