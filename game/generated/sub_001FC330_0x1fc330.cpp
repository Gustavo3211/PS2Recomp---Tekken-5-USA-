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

// Function: sub_001FC330
// Address: 0x1fc330 - 0x1fc3a8
void sub_001FC330_0x1fc330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC330_0x1fc330");
#endif

    switch (ctx->pc) {
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc384u: goto label_1fc384;
        default: break;
    }

    ctx->pc = 0x1fc330u;

    // 0x1fc330: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x1fc330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x1fc334: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc338: 0xffbf0308  sd          $ra, 0x308($sp)
    ctx->pc = 0x1fc338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 776), GPR_U64(ctx, 31));
    // 0x1fc33c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc340: 0xffb00300  sd          $s0, 0x300($sp)
    ctx->pc = 0x1fc340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 16));
    // 0x1fc344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fc344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc348: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fc34c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1fc350:
    // 0x1fc350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fc354: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fc358: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fc35c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC35Cu;
    {
        const bool branch_taken_0x1fc35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC35Cu;
        // 0x1fc360: 0x28c500c0  slti        $a1, $a2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc35c) {
            ctx->pc = 0x1FC374u;
            goto label_1fc374;
        }
    }
    ctx->pc = 0x1FC364u;
    // 0x1fc364: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fc368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc36c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1fc370: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1fc370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1fc374:
    // 0x1fc374: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FC374u;
    {
        const bool branch_taken_0x1fc374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC374u;
        // 0x1fc378: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc374) {
            ctx->pc = 0x1FC350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc350;
        }
    }
    ctx->pc = 0x1FC37Cu;
    // 0x1fc37c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1FC37Cu;
    SET_GPR_U32(ctx, 31, 0x1FC384u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1FC37Cu, 0x1FC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC384u;
label_1fc384:
    // 0x1fc384: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1fc384u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fc388: 0xdfb00300  ld          $s0, 0x300($sp)
    ctx->pc = 0x1fc388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1fc38c: 0xdfbf0308  ld          $ra, 0x308($sp)
    ctx->pc = 0x1fc38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x1fc390: 0x1810  mfhi        $v1
    ctx->pc = 0x1fc390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1fc394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc398: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1fc39c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3A0u;
        // 0x1fc3a4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC3A8u;
}
