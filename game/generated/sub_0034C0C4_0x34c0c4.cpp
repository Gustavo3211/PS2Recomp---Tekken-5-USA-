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

// Function: sub_0034C0C4
// Address: 0x34c0c4 - 0x34c150
void sub_0034C0C4_0x34c0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C0C4_0x34c0c4");
#endif

    switch (ctx->pc) {
        case 0x34c0c4u: goto label_34c0c4;
        case 0x34c0c8u: goto label_34c0c8;
        case 0x34c0ccu: goto label_34c0cc;
        case 0x34c0d0u: goto label_34c0d0;
        case 0x34c0d4u: goto label_34c0d4;
        case 0x34c0d8u: goto label_34c0d8;
        case 0x34c0dcu: goto label_34c0dc;
        case 0x34c0e0u: goto label_34c0e0;
        case 0x34c0e4u: goto label_34c0e4;
        case 0x34c0e8u: goto label_34c0e8;
        case 0x34c0ecu: goto label_34c0ec;
        case 0x34c0f0u: goto label_34c0f0;
        case 0x34c0f4u: goto label_34c0f4;
        case 0x34c0f8u: goto label_34c0f8;
        case 0x34c0fcu: goto label_34c0fc;
        case 0x34c100u: goto label_34c100;
        case 0x34c104u: goto label_34c104;
        case 0x34c108u: goto label_34c108;
        case 0x34c10cu: goto label_34c10c;
        case 0x34c110u: goto label_34c110;
        case 0x34c114u: goto label_34c114;
        case 0x34c118u: goto label_34c118;
        case 0x34c11cu: goto label_34c11c;
        case 0x34c120u: goto label_34c120;
        case 0x34c124u: goto label_34c124;
        case 0x34c128u: goto label_34c128;
        case 0x34c12cu: goto label_34c12c;
        case 0x34c130u: goto label_34c130;
        case 0x34c134u: goto label_34c134;
        case 0x34c138u: goto label_34c138;
        case 0x34c13cu: goto label_34c13c;
        case 0x34c140u: goto label_34c140;
        case 0x34c144u: goto label_34c144;
        case 0x34c148u: goto label_34c148;
        case 0x34c14cu: goto label_34c14c;
        default: break;
    }

    ctx->pc = 0x34c0c4u;

label_34c0c4:
    // 0x34c0c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34c0c8:
    // 0x34c0c8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34c0cc:
    // 0x34c0cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34c0d0:
    // 0x34c0d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c0d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c0d4:
    // 0x34c0d4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c0d8:
    // 0x34c0d8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34c0dc:
    // 0x34c0dc: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34c0e0:
    // 0x34c0e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c0e4:
    // 0x34c0e4: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34c0e8:
    // 0x34c0e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34c0ec:
    // 0x34c0ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34c0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34c0f0:
    // 0x34c0f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34c0f4:
    if (ctx->pc == 0x34C0F4u) {
        ctx->pc = 0x34C0F8u;
        goto label_34c0f8;
    }
    ctx->pc = 0x34C0F0u;
    {
        const bool branch_taken_0x34c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0f0) {
            ctx->pc = 0x34C108u;
            goto label_34c108;
        }
    }
    ctx->pc = 0x34C0F8u;
label_34c0f8:
    // 0x34c0f8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_34c0fc:
    // 0x34c0fc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c100:
    // 0x34c100: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c104:
    if (ctx->pc == 0x34C104u) {
        ctx->pc = 0x34C108u;
        goto label_34c108;
    }
    ctx->pc = 0x34C100u;
    {
        const bool branch_taken_0x34c100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c100) {
            ctx->pc = 0x34C110u;
            goto label_34c110;
        }
    }
    ctx->pc = 0x34C108u;
label_34c108:
    // 0x34c108: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_34c10c:
    // 0x34c10c: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x34c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
label_34c110:
    // 0x34c110: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c114:
    // 0x34c114: 0x2442ba48  addiu       $v0, $v0, -0x45B8
    ctx->pc = 0x34c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949448));
label_34c118:
    // 0x34c118: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c11c:
    // 0x34c11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c120:
    // 0x34c120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c124:
    // 0x34c124: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c128:
    // 0x34c128: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34c128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c12c:
    // 0x34c12c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c130:
    // 0x34c130: 0x40f809  jalr        $v0
label_34c134:
    if (ctx->pc == 0x34C134u) {
        ctx->pc = 0x34C138u;
        goto label_34c138;
    }
    ctx->pc = 0x34C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C138u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C130u, 0x34C138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C138u;
label_34c138:
    // 0x34c138: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c138u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c13c:
    // 0x34c13c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34c13cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c140:
    // 0x34c140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c144:
    // 0x34c144: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34c144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34c148:
    // 0x34c148: 0x3e00008  jr          $ra
label_34c14c:
    if (ctx->pc == 0x34C14Cu) {
        ctx->pc = 0x34C150u;
        goto label_fallthrough_0x34c148;
    }
    ctx->pc = 0x34C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c148:
    ctx->pc = 0x34C150u;
}
