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

// Function: sub_00224518
// Address: 0x224518 - 0x224590
void sub_00224518_0x224518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224518_0x224518");
#endif

    switch (ctx->pc) {
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        default: break;
    }

    ctx->pc = 0x224518u;

label_224518:
    // 0x224518: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x224518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22451c:
    // 0x22451c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224520:
    // 0x224520: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x224520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_224524:
    // 0x224524: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x224524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_224528:
    // 0x224528: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_22452c:
    if (ctx->pc == 0x22452Cu) {
        ctx->pc = 0x22452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224528u;
        // 0x22452c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224530u;
        goto label_224530;
    }
    ctx->pc = 0x224528u;
    {
        const bool branch_taken_0x224528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224528u;
        // 0x22452c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224528) {
            ctx->pc = 0x224584u;
            goto label_224584;
        }
    }
    ctx->pc = 0x224530u;
label_224530:
    // 0x224530: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_224534:
    // 0x224534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_224538:
    // 0x224538: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x224538u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
label_22453c:
    // 0x22453c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_224540:
    // 0x224540: 0x8d4ad3e0  lw          $t2, -0x2C20($t2)
    ctx->pc = 0x224540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294956000)));
label_224544:
    // 0x224544: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
label_224548:
    if (ctx->pc == 0x224548u) {
        ctx->pc = 0x224548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224544u;
        // 0x224548: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22454Cu;
        goto label_22454c;
    }
    ctx->pc = 0x224544u;
    {
        const bool branch_taken_0x224544 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x224548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224544u;
        // 0x224548: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224544) {
            ctx->pc = 0x224584u;
            goto label_224584;
        }
    }
    ctx->pc = 0x22454Cu;
label_22454c:
    // 0x22454c: 0x78c70030  lq          $a3, 0x30($a2)
    ctx->pc = 0x22454cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_224550:
    // 0x224550: 0x8d090048  lw          $t1, 0x48($t0)
    ctx->pc = 0x224550u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
label_224554:
    // 0x224554: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x224554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_224558:
    // 0x224558: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x224558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_22455c:
    // 0x22455c: 0x8d080040  lw          $t0, 0x40($t0)
    ctx->pc = 0x22455cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
label_224560:
    // 0x224560: 0x78c60020  lq          $a2, 0x20($a2)
    ctx->pc = 0x224560u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_224564:
    // 0x224564: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x224564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_224568:
    // 0x224568: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x224568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_22456c:
    // 0x22456c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x22456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_224570:
    // 0x224570: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x224570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_224574:
    // 0x224574: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x224574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
label_224578:
    // 0x224578: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x224578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
label_22457c:
    // 0x22457c: 0x140f809  jalr        $t2
label_224580:
    if (ctx->pc == 0x224580u) {
        ctx->pc = 0x224580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22457Cu;
        // 0x224580: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224584u;
        goto label_224584;
    }
    ctx->pc = 0x22457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x224584u);
        ctx->pc = 0x224580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22457Cu;
        // 0x224580: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22457Cu, 0x224584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224584u;
label_224584:
    // 0x224584: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x224584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_224588:
    // 0x224588: 0x3e00008  jr          $ra
label_22458c:
    if (ctx->pc == 0x22458Cu) {
        ctx->pc = 0x22458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224588u;
        // 0x22458c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224590u;
        goto label_fallthrough_0x224588;
    }
    ctx->pc = 0x224588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224588u;
        // 0x22458c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224588:
    ctx->pc = 0x224590u;
}
