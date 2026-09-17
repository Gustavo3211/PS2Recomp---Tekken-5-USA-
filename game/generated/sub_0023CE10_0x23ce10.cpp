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

// Function: sub_0023CE10
// Address: 0x23ce10 - 0x23cec8
void sub_0023CE10_0x23ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CE10_0x23ce10");
#endif

    switch (ctx->pc) {
        case 0x23ceb0u: goto label_23ceb0;
        default: break;
    }

    ctx->pc = 0x23ce10u;

    // 0x23ce10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ce14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23ce14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ce1c: 0x2483085c  addiu       $v1, $a0, 0x85C
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2140));
    // 0x23ce20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23ce24: 0x30c74000  andi        $a3, $a2, 0x4000
    ctx->pc = 0x23ce24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x23ce28: 0x9485003c  lhu         $a1, 0x3C($a0)
    ctx->pc = 0x23ce28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x23ce2c: 0x24840854  addiu       $a0, $a0, 0x854
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2132));
    // 0x23ce30: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x23ce30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ce34: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23ce38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23ce3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ce40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ce44: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x23ce44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x23ce48: 0x2610f380  addiu       $s0, $s0, -0xC80
    ctx->pc = 0x23ce48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964096));
    // 0x23ce4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23ce50: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CE50u;
    {
        const bool branch_taken_0x23ce50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE50u;
        // 0x23ce54: 0xa4660004  sh          $a2, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce50) {
            ctx->pc = 0x23CE68u;
            goto label_23ce68;
        }
    }
    ctx->pc = 0x23CE58u;
    // 0x23ce58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ce5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23ce60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23CE60u;
    {
        const bool branch_taken_0x23ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE60u;
        // 0x23ce64: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce60) {
            ctx->pc = 0x23CEB0u;
            goto label_23ceb0;
        }
    }
    ctx->pc = 0x23CE68u;
label_23ce68:
    // 0x23ce68: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x23CE68u;
    {
        const bool branch_taken_0x23ce68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE68u;
        // 0x23ce6c: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce68) {
            ctx->pc = 0x23CE90u;
            goto label_23ce90;
        }
    }
    ctx->pc = 0x23CE70u;
    // 0x23ce70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23ce74: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23ce78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x23ce84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23CE84u;
    {
        const bool branch_taken_0x23ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE84u;
        // 0x23ce88: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce84) {
            ctx->pc = 0x23CEA8u;
            goto label_23cea8;
        }
    }
    ctx->pc = 0x23CE8Cu;
    // 0x23ce8c: 0x0  nop
    ctx->pc = 0x23ce8cu;
    // NOP
label_23ce90:
    // 0x23ce90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ce94: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x23ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23ce98: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce9c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23cea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23cea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cea4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_23cea8:
    // 0x23cea8: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x23CEA8u;
    SET_GPR_U32(ctx, 31, 0x23CEB0u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x23CEA8u, 0x23CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEB0u;
label_23ceb0:
    // 0x23ceb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23ceb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ceb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ceb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x23CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEBCu;
        // 0x23cec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CEC4u;
    // 0x23cec4: 0x0  nop
    ctx->pc = 0x23cec4u;
    // NOP
    ctx->pc = 0x23cec8u;
}
