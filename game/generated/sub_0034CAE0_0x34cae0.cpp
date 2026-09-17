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

// Function: sub_0034CAE0
// Address: 0x34cae0 - 0x34cb64
void sub_0034CAE0_0x34cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CAE0_0x34cae0");
#endif

    switch (ctx->pc) {
        case 0x34cae0u: goto label_34cae0;
        case 0x34cae4u: goto label_34cae4;
        case 0x34cae8u: goto label_34cae8;
        case 0x34caecu: goto label_34caec;
        case 0x34caf0u: goto label_34caf0;
        case 0x34caf4u: goto label_34caf4;
        case 0x34caf8u: goto label_34caf8;
        case 0x34cafcu: goto label_34cafc;
        case 0x34cb00u: goto label_34cb00;
        case 0x34cb04u: goto label_34cb04;
        case 0x34cb08u: goto label_34cb08;
        case 0x34cb0cu: goto label_34cb0c;
        case 0x34cb10u: goto label_34cb10;
        case 0x34cb14u: goto label_34cb14;
        case 0x34cb18u: goto label_34cb18;
        case 0x34cb1cu: goto label_34cb1c;
        case 0x34cb20u: goto label_34cb20;
        case 0x34cb24u: goto label_34cb24;
        case 0x34cb28u: goto label_34cb28;
        case 0x34cb2cu: goto label_34cb2c;
        case 0x34cb30u: goto label_34cb30;
        case 0x34cb34u: goto label_34cb34;
        case 0x34cb38u: goto label_34cb38;
        case 0x34cb3cu: goto label_34cb3c;
        case 0x34cb40u: goto label_34cb40;
        case 0x34cb44u: goto label_34cb44;
        case 0x34cb48u: goto label_34cb48;
        case 0x34cb4cu: goto label_34cb4c;
        case 0x34cb50u: goto label_34cb50;
        case 0x34cb54u: goto label_34cb54;
        case 0x34cb58u: goto label_34cb58;
        case 0x34cb5cu: goto label_34cb5c;
        case 0x34cb60u: goto label_34cb60;
        default: break;
    }

    ctx->pc = 0x34cae0u;

label_34cae0:
    // 0x34cae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34cae4:
    // 0x34cae4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34cae8:
    // 0x34cae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34caec:
    // 0x34caec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34caecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34caf0:
    // 0x34caf0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34caf4:
    // 0x34caf4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34caf8:
    // 0x34caf8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cafc:
    // 0x34cafc: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34cb00:
    // 0x34cb00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34cb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34cb04:
    // 0x34cb04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34cb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34cb08:
    // 0x34cb08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34cb0c:
    if (ctx->pc == 0x34CB0Cu) {
        ctx->pc = 0x34CB10u;
        goto label_34cb10;
    }
    ctx->pc = 0x34CB08u;
    {
        const bool branch_taken_0x34cb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb08) {
            ctx->pc = 0x34CB20u;
            goto label_34cb20;
        }
    }
    ctx->pc = 0x34CB10u;
label_34cb10:
    // 0x34cb10: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x34cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_34cb14:
    // 0x34cb14: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34cb18:
    // 0x34cb18: 0x10000003  b           . + 4 + (0x3 << 2)
label_34cb1c:
    if (ctx->pc == 0x34CB1Cu) {
        ctx->pc = 0x34CB20u;
        goto label_34cb20;
    }
    ctx->pc = 0x34CB18u;
    {
        const bool branch_taken_0x34cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb18) {
            ctx->pc = 0x34CB28u;
            goto label_34cb28;
        }
    }
    ctx->pc = 0x34CB20u;
label_34cb20:
    // 0x34cb20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x34cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_34cb24:
    // 0x34cb24: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x34cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
label_34cb28:
    // 0x34cb28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34cb2c:
    // 0x34cb2c: 0x2442ba4c  addiu       $v0, $v0, -0x45B4
    ctx->pc = 0x34cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949452));
label_34cb30:
    // 0x34cb30: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34cb34:
    // 0x34cb34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34cb38:
    // 0x34cb38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34cb3c:
    // 0x34cb3c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cb40:
    // 0x34cb40: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34cb44:
    // 0x34cb44: 0x40f809  jalr        $v0
label_34cb48:
    if (ctx->pc == 0x34CB48u) {
        ctx->pc = 0x34CB4Cu;
        goto label_34cb4c;
    }
    ctx->pc = 0x34CB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CB4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB44u, 0x34CB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CB4Cu;
label_34cb4c:
    // 0x34cb4c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34cb4cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34cb50:
    // 0x34cb50: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34cb50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34cb54:
    // 0x34cb54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34cb58:
    // 0x34cb58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34cb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34cb5c:
    // 0x34cb5c: 0x3e00008  jr          $ra
label_34cb60:
    if (ctx->pc == 0x34CB60u) {
        ctx->pc = 0x34CB64u;
        goto label_fallthrough_0x34cb5c;
    }
    ctx->pc = 0x34CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34cb5c:
    ctx->pc = 0x34CB64u;
}
