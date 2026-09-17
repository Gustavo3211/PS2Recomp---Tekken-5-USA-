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

// Function: sub_003194C0
// Address: 0x3194c0 - 0x3195ec
void sub_003194C0_0x3194c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003194C0_0x3194c0");
#endif

    switch (ctx->pc) {
        case 0x31959cu: goto label_31959c;
        default: break;
    }

    ctx->pc = 0x3194c0u;

    // 0x3194c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3194c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3194c4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3194c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3194c8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3194c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3194cc: 0xafc40018  sw          $a0, 0x18($fp)
    ctx->pc = 0x3194ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 4));
    // 0x3194d0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x3194d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x3194d4: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x3194d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x3194d8: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x3194d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x3194dc: 0xafc8000c  sw          $t0, 0xC($fp)
    ctx->pc = 0x3194dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 8));
    // 0x3194e0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3194e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3194e4: 0x8c6242ac  lw          $v0, 0x42AC($v1)
    ctx->pc = 0x3194e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17068)));
    // 0x3194e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3194e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3194ec: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x3194ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3194f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3194f4: 0x244242b0  addiu       $v0, $v0, 0x42B0
    ctx->pc = 0x3194f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
    // 0x3194f8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3194f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3194fc: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3194fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319500: 0x8c6242ac  lw          $v0, 0x42AC($v1)
    ctx->pc = 0x319500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17068)));
    // 0x319504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x319504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x319508: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31950c: 0xac8242ac  sw          $v0, 0x42AC($a0)
    ctx->pc = 0x31950cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17068), GPR_U32(ctx, 2));
    // 0x319510: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319514: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x319514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319518: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x319518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x31951c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x31951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319520: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319524: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x319524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x319528: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x319528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x31952c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x31952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319530: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x319530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x319534: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x319534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x319538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31953c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319544: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x319544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x319548: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x319548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31954c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x319550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319554: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x319554u;
    {
        const bool branch_taken_0x319554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319554) {
            ctx->pc = 0x319580u;
            goto label_319580;
        }
    }
    ctx->pc = 0x31955Cu;
    // 0x31955c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319564: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x319564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x319568: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x319568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31956c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x319570: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319574: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x319574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x319578: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x319578u;
    {
        const bool branch_taken_0x319578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319578) {
            ctx->pc = 0x3195D4u;
            goto label_3195d4;
        }
    }
    ctx->pc = 0x319580u;
label_319580:
    // 0x319580: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319588: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x319588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x31958c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x31958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x319590: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x319590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x319594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319598: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x319598u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_31959c:
    // 0x31959c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x31959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3195a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3195a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3195a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3195A4u;
    {
        const bool branch_taken_0x3195a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3195a4) {
            ctx->pc = 0x3195C0u;
            goto label_3195c0;
        }
    }
    ctx->pc = 0x3195ACu;
    // 0x3195ac: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3195acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3195b0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3195b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3195b4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3195b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3195b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3195B8u;
    {
        const bool branch_taken_0x3195b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3195b8) {
            ctx->pc = 0x3195D4u;
            goto label_3195d4;
        }
    }
    ctx->pc = 0x3195C0u;
label_3195c0:
    // 0x3195c0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3195c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3195c8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3195cc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x3195CCu;
    {
        const bool branch_taken_0x3195cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3195cc) {
            ctx->pc = 0x31959Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31959c;
        }
    }
    ctx->pc = 0x3195D4u;
label_3195d4:
    // 0x3195d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3195d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3195d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195dc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3195dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3195e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3195e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3195e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3195E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3195E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3195ECu;
}
