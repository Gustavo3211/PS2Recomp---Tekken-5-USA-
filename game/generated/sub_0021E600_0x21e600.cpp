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

// Function: sub_0021E600
// Address: 0x21e600 - 0x21e688
void sub_0021E600_0x21e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E600_0x21e600");
#endif

    switch (ctx->pc) {
        case 0x21e624u: goto label_21e624;
        default: break;
    }

    ctx->pc = 0x21e600u;

    // 0x21e600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e608: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21e608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e60c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21e610: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x21e610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x21e614: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21E614u;
    {
        const bool branch_taken_0x21e614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E614u;
        // 0x21e618: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e614) {
            ctx->pc = 0x21E674u;
            goto label_21e674;
        }
    }
    ctx->pc = 0x21E61Cu;
    // 0x21e61c: 0xc09d940  jal         func_276500
    ctx->pc = 0x21E61Cu;
    SET_GPR_U32(ctx, 31, 0x21E624u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21E61Cu, 0x21E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E624u;
label_21e624:
    // 0x21e624: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21e628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e62c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21E62Cu;
    {
        const bool branch_taken_0x21e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E62Cu;
        // 0x21e630: 0x2032804  sllv        $a1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e62c) {
            ctx->pc = 0x21E65Cu;
            goto label_21e65c;
        }
    }
    ctx->pc = 0x21E634u;
    // 0x21e634: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21e634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21e638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e63c: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x21e640: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21e644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E644u;
    {
        const bool branch_taken_0x21e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E644u;
        // 0x21e648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e644) {
            ctx->pc = 0x21E654u;
            goto label_21e654;
        }
    }
    ctx->pc = 0x21E64Cu;
    // 0x21e64c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x21e64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x21e650: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x21e650u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21e654:
    // 0x21e654: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E654u;
    {
        const bool branch_taken_0x21e654 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E654u;
        // 0x21e658: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e654) {
            ctx->pc = 0x21E674u;
            goto label_21e674;
        }
    }
    ctx->pc = 0x21E65Cu;
label_21e65c:
    // 0x21e65c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e660: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21e664: 0x8c4388a8  lw          $v1, -0x7758($v0)
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x21e668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e66c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x21e66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x21e670: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x21e670u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_21e674:
    // 0x21e674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e678: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21e678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e67c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e680: 0x3e00008  jr          $ra
    ctx->pc = 0x21E680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E680u;
        // 0x21e684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E688u;
}
