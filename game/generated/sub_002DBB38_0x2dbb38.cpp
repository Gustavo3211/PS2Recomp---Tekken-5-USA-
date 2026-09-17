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

// Function: sub_002DBB38
// Address: 0x2dbb38 - 0x2dbbc8
void sub_002DBB38_0x2dbb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBB38_0x2dbb38");
#endif

    switch (ctx->pc) {
        case 0x2dbb68u: goto label_2dbb68;
        default: break;
    }

    ctx->pc = 0x2dbb38u;

    // 0x2dbb38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2dbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dbb48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbb4c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dbb50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbb54: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2dbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2dbb58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dbb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dbb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dbb60: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DBB60u;
    SET_GPR_U32(ctx, 31, 0x2DBB68u);
    ctx->pc = 0x2DBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB60u;
    // 0x2dbb64: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DBB60u, 0x2DBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB68u;
label_2dbb68:
    // 0x2dbb68: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2dbb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dbb6c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DBB6Cu;
    {
        const bool branch_taken_0x2dbb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB6Cu;
        // 0x2dbb70: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb6c) {
            ctx->pc = 0x2DBBA8u;
            goto label_2dbba8;
        }
    }
    ctx->pc = 0x2DBB74u;
    // 0x2dbb74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBB74u;
    {
        const bool branch_taken_0x2dbb74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB74u;
        // 0x2dbb78: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb74) {
            ctx->pc = 0x2DBB90u;
            goto label_2dbb90;
        }
    }
    ctx->pc = 0x2DBB7Cu;
    // 0x2dbb7c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2dbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2dbb80: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x2dbb80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2dbb84: 0xa422cb68  sh          $v0, -0x3498($at)
    ctx->pc = 0x2dbb84u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953832), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbb88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DBB88u;
    {
        const bool branch_taken_0x2dbb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB88u;
        // 0x2dbb8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb88) {
            ctx->pc = 0x2DBBB4u;
            goto label_2dbbb4;
        }
    }
    ctx->pc = 0x2DBB90u;
label_2dbb90:
    // 0x2dbb90: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dbb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbb98: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2dbb9c: 0xa422cb68  sh          $v0, -0x3498($at)
    ctx->pc = 0x2dbb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953832), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbba0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBBA0u;
    {
        const bool branch_taken_0x2dbba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBA0u;
        // 0x2dbba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbba0) {
            ctx->pc = 0x2DBBB4u;
            goto label_2dbbb4;
        }
    }
    ctx->pc = 0x2DBBA8u;
label_2dbba8:
    // 0x2dbba8: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x2dbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2dbbac: 0xa420cb68  sh          $zero, -0x3498($at)
    ctx->pc = 0x2dbbacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953832), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbbb4:
    // 0x2dbbb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbbb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dbbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBBCu;
        // 0x2dbbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBBC4u;
    // 0x2dbbc4: 0x0  nop
    ctx->pc = 0x2dbbc4u;
    // NOP
    ctx->pc = 0x2dbbc8u;
}
