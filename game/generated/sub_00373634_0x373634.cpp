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

// Function: sub_00373634
// Address: 0x373634 - 0x373754
void sub_00373634_0x373634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373634_0x373634");
#endif

    switch (ctx->pc) {
        case 0x37365cu: goto label_37365c;
        case 0x373724u: goto label_373724;
        case 0x37373cu: goto label_37373c;
        default: break;
    }

    ctx->pc = 0x373634u;

    // 0x373634: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373638: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x37363c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x37363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x373640: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373644: 0xafc40004  sw          $a0, 0x4($fp)
    ctx->pc = 0x373644u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
    // 0x373648: 0xafc50008  sw          $a1, 0x8($fp)
    ctx->pc = 0x373648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 5));
    // 0x37364c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x37364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373650: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373654: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x373654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x373658: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x373658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_37365c:
    // 0x37365c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x37365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373660: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373664: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x373664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x373668: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x373668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37366c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37366Cu;
    {
        const bool branch_taken_0x37366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37366c) {
            ctx->pc = 0x37367Cu;
            goto label_37367c;
        }
    }
    ctx->pc = 0x373674u;
    // 0x373674: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x373674u;
    {
        const bool branch_taken_0x373674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373674) {
            ctx->pc = 0x373710u;
            goto label_373710;
        }
    }
    ctx->pc = 0x37367Cu;
label_37367c:
    // 0x37367c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x37367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373680: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x373680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373684: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37368c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373690: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x373690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x373694: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x373694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373698: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x37369c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37369cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3736a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3736a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3736a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3736a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3736ac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3736acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3736b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3736b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3736b4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x3736b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x3736b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3736b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3736bc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3736bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3736c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3736c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3736c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3736c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3736cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3736d0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3736d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3736d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3736d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3736d8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3736d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3736dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3736dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3736e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3736e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3736e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3736e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3736ec: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3736ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3736f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3736f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3736f4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3736f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3736f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3736f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3736fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3736fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373704: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x373704u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x373708: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x373708u;
    {
        const bool branch_taken_0x373708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373708) {
            ctx->pc = 0x37365Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37365c;
        }
    }
    ctx->pc = 0x373710u;
label_373710:
    // 0x373710: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373714: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x373714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x373718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37371c: 0xc0dcf08  jal         func_373C20
    ctx->pc = 0x37371Cu;
    SET_GPR_U32(ctx, 31, 0x373724u);
    ctx->pc = 0x373C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373C20u, 0x37371Cu, 0x373724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373724u;
label_373724:
    // 0x373724: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373728: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x37372c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x37372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373730: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x373730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x373734: 0xc0dcf15  jal         func_373C54
    ctx->pc = 0x373734u;
    SET_GPR_U32(ctx, 31, 0x37373Cu);
    ctx->pc = 0x373C54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373C54u, 0x373734u, 0x37373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37373Cu;
label_37373c:
    // 0x37373c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x37373cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373740: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373740u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x373744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373748: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37374c: 0x3e00008  jr          $ra
    ctx->pc = 0x37374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373754u;
}
