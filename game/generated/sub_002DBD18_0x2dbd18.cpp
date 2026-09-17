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

// Function: sub_002DBD18
// Address: 0x2dbd18 - 0x2dbda8
void sub_002DBD18_0x2dbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBD18_0x2dbd18");
#endif

    switch (ctx->pc) {
        case 0x2dbd40u: goto label_2dbd40;
        case 0x2dbd54u: goto label_2dbd54;
        default: break;
    }

    ctx->pc = 0x2dbd18u;

    // 0x2dbd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbd20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dbd28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dbd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dbd2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dbd30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbd34: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2dbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2dbd38: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DBD38u;
    SET_GPR_U32(ctx, 31, 0x2DBD40u);
    ctx->pc = 0x2DBD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD38u;
    // 0x2dbd3c: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DBD38u, 0x2DBD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD40u;
label_2dbd40:
    // 0x2dbd40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbd44: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DBD44u;
    {
        const bool branch_taken_0x2dbd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD44u;
        // 0x2dbd48: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd44) {
            ctx->pc = 0x2DBD90u;
            goto label_2dbd90;
        }
    }
    ctx->pc = 0x2DBD4Cu;
    // 0x2dbd4c: 0xc0b6f30  jal         func_2DBCC0
    ctx->pc = 0x2DBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD54u);
    ctx->pc = 0x2DBCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBCC0u, 0x2DBD4Cu, 0x2DBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD54u;
label_2dbd54:
    // 0x2dbd54: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2dbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dbd58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBD58u;
    {
        const bool branch_taken_0x2dbd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD58u;
        // 0x2dbd5c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd58) {
            ctx->pc = 0x2DBD78u;
            goto label_2dbd78;
        }
    }
    ctx->pc = 0x2DBD60u;
    // 0x2dbd60: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2dbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2dbd64: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x2dbd64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2dbd68: 0xa422cb70  sh          $v0, -0x3490($at)
    ctx->pc = 0x2dbd68u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953840), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbd6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DBD6Cu;
    {
        const bool branch_taken_0x2dbd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD6Cu;
        // 0x2dbd70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd6c) {
            ctx->pc = 0x2DBD9Cu;
            goto label_2dbd9c;
        }
    }
    ctx->pc = 0x2DBD74u;
    // 0x2dbd74: 0x0  nop
    ctx->pc = 0x2dbd74u;
    // NOP
label_2dbd78:
    // 0x2dbd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbd7c: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2dbd80: 0xa422cb70  sh          $v0, -0x3490($at)
    ctx->pc = 0x2dbd80u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953840), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbd84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBD84u;
    {
        const bool branch_taken_0x2dbd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD84u;
        // 0x2dbd88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd84) {
            ctx->pc = 0x2DBD9Cu;
            goto label_2dbd9c;
        }
    }
    ctx->pc = 0x2DBD8Cu;
    // 0x2dbd8c: 0x0  nop
    ctx->pc = 0x2dbd8cu;
    // NOP
label_2dbd90:
    // 0x2dbd90: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2dbd90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2dbd94: 0xa420cb70  sh          $zero, -0x3490($at)
    ctx->pc = 0x2dbd94u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953840), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbd9c:
    // 0x2dbd9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dbd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbda0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDA0u;
        // 0x2dbda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBDA8u;
}
