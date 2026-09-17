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

// Function: sub_003504BC
// Address: 0x3504bc - 0x350578
void sub_003504BC_0x3504bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003504BC_0x3504bc");
#endif

    switch (ctx->pc) {
        case 0x3504d4u: goto label_3504d4;
        default: break;
    }

    ctx->pc = 0x3504bcu;

    // 0x3504bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3504bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3504c0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3504c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3504c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3504c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3504c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3504cc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3504ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3504d0: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x3504d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_3504d4:
    // 0x3504d4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3504d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3504d8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3504d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3504dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3504DCu;
    {
        const bool branch_taken_0x3504dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3504dc) {
            ctx->pc = 0x3504ECu;
            goto label_3504ec;
        }
    }
    ctx->pc = 0x3504E4u;
    // 0x3504e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3504E4u;
    {
        const bool branch_taken_0x3504e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3504e4) {
            ctx->pc = 0x350564u;
            goto label_350564;
        }
    }
    ctx->pc = 0x3504ECu;
label_3504ec:
    // 0x3504ec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3504ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3504f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3504f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3504f4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3504f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3504f8: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x3504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x3504fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3504fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350508: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x350508u;
    {
        const bool branch_taken_0x350508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350508) {
            ctx->pc = 0x350550u;
            goto label_350550;
        }
    }
    ctx->pc = 0x350510u;
    // 0x350510: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350514: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x350514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x350518: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x350518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35051c: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x35051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x350520: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350524: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350528: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x350528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35052c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350530: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x350530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x350534: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x350534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350538: 0x2442c604  addiu       $v0, $v0, -0x39FC
    ctx->pc = 0x350538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952452));
    // 0x35053c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350540: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350544: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x350544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x350548: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x350548u;
    {
        const bool branch_taken_0x350548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350548) {
            ctx->pc = 0x350564u;
            goto label_350564;
        }
    }
    ctx->pc = 0x350550u;
label_350550:
    // 0x350550: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350558: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x350558u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x35055c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x35055Cu;
    {
        const bool branch_taken_0x35055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35055c) {
            ctx->pc = 0x3504D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3504d4;
        }
    }
    ctx->pc = 0x350564u;
label_350564:
    // 0x350564: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350564u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350568: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35056c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35056cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350570: 0x3e00008  jr          $ra
    ctx->pc = 0x350570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350578u;
}
