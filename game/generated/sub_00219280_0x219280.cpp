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

// Function: sub_00219280
// Address: 0x219280 - 0x219348
void sub_00219280_0x219280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219280_0x219280");
#endif

    switch (ctx->pc) {
        case 0x2192a8u: goto label_2192a8;
        case 0x2192b8u: goto label_2192b8;
        case 0x2192d0u: goto label_2192d0;
        case 0x219304u: goto label_219304;
        default: break;
    }

    ctx->pc = 0x219280u;

    // 0x219280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x219280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x219284: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x219284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x219288: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x219288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x21928c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219290: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x219290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x219294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219298: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x219298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x21929c: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x21929cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2192a0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2192a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2192a4: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x2192a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2192a8:
    // 0x2192a8: 0x16130005  bne         $s0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2192A8u;
    {
        const bool branch_taken_0x2192a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2192a8) {
            ctx->pc = 0x2192C0u;
            goto label_2192c0;
        }
    }
    ctx->pc = 0x2192B0u;
    // 0x2192b0: 0xc086304  jal         func_218C10
    ctx->pc = 0x2192B0u;
    SET_GPR_U32(ctx, 31, 0x2192B8u);
    ctx->pc = 0x2192B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192B0u;
    // 0x2192b4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2192B0u, 0x2192B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2192B8u;
    {
        const bool branch_taken_0x2192b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2192b8) {
            ctx->pc = 0x2192BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192B8u;
            // 0x2192bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2192E8u;
            goto label_2192e8;
        }
    }
    ctx->pc = 0x2192C0u;
label_2192c0:
    // 0x2192c0: 0x16120005  bne         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2192C0u;
    {
        const bool branch_taken_0x2192c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192C0u;
        // 0x2192c4: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192c0) {
            ctx->pc = 0x2192D8u;
            goto label_2192d8;
        }
    }
    ctx->pc = 0x2192C8u;
    // 0x2192c8: 0xc086304  jal         func_218C10
    ctx->pc = 0x2192C8u;
    SET_GPR_U32(ctx, 31, 0x2192D0u);
    ctx->pc = 0x2192CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192C8u;
    // 0x2192cc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2192C8u, 0x2192D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192D0u;
label_2192d0:
    // 0x2192d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2192D0u;
    {
        const bool branch_taken_0x2192d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192D0u;
        // 0x2192d4: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192d0) {
            ctx->pc = 0x2192E4u;
            goto label_2192e4;
        }
    }
    ctx->pc = 0x2192D8u;
label_2192d8:
    // 0x2192d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2192d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2192dc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2192dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2192e0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2192e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2192e4:
    // 0x2192e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2192e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2192e8:
    // 0x2192e8: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x2192e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2192ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2192ECu;
    {
        const bool branch_taken_0x2192ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2192ec) {
            ctx->pc = 0x2192A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2192a8;
        }
    }
    ctx->pc = 0x2192F4u;
    // 0x2192f4: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2192F4u;
    {
        const bool branch_taken_0x2192f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2192f4) {
            ctx->pc = 0x2192F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2192F4u;
            // 0x2192f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219318u;
            goto label_219318;
        }
    }
    ctx->pc = 0x2192FCu;
    // 0x2192fc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2192FCu;
    SET_GPR_U32(ctx, 31, 0x219304u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2192FCu, 0x219304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219304u;
label_219304:
    // 0x219304: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x219304u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x219308: 0x1810  mfhi        $v1
    ctx->pc = 0x219308u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21930c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21930cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219310: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x219310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x219314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219318:
    // 0x219318: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x219318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21931c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x21931cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219320: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x219320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219324: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x219324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x219328: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x219328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21932c: 0x3e00008  jr          $ra
    ctx->pc = 0x21932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21932Cu;
        // 0x219330: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219334u;
    // 0x219334: 0x0  nop
    ctx->pc = 0x219334u;
    // NOP
    // 0x219338: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x219338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21933c: 0x3e00008  jr          $ra
    ctx->pc = 0x21933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21933Cu;
        // 0x219340: 0x24425980  addiu       $v0, $v0, 0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21933Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219344u;
    // 0x219344: 0x0  nop
    ctx->pc = 0x219344u;
    // NOP
    ctx->pc = 0x219348u;
}
