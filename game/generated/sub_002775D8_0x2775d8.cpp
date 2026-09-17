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

// Function: sub_002775D8
// Address: 0x2775d8 - 0x277688
void sub_002775D8_0x2775d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002775D8_0x2775d8");
#endif

    switch (ctx->pc) {
        case 0x27762cu: goto label_27762c;
        case 0x277648u: goto label_277648;
        case 0x277664u: goto label_277664;
        default: break;
    }

    ctx->pc = 0x2775d8u;

    // 0x2775d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2775d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2775dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2775dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2775e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2775e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2775e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2775e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2775e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2775ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2775f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2775f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2775f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2775f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2775f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2775fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x277600: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277604: 0x8e13000c  lw          $s3, 0xC($s0)
    ctx->pc = 0x277604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x277608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27760c: 0x2c430708  sltiu       $v1, $v0, 0x708
    ctx->pc = 0x27760cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1800) ? 1 : 0);
    // 0x277610: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x277610u;
    {
        const bool branch_taken_0x277610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277610u;
        // 0x277614: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277610) {
            ctx->pc = 0x277648u;
            goto label_277648;
        }
    }
    ctx->pc = 0x277618u;
    // 0x277618: 0x24020708  addiu       $v0, $zero, 0x708
    ctx->pc = 0x277618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x27761c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27761cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x277620: 0xaf80ca54  sw          $zero, -0x35AC($gp)
    ctx->pc = 0x277620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953556), GPR_U32(ctx, 0));
    // 0x277624: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x277624u;
    SET_GPR_U32(ctx, 31, 0x27762Cu);
    ctx->pc = 0x277628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277624u;
    // 0x277628: 0x8f85973c  lw          $a1, -0x68C4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x277624u, 0x27762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27762Cu;
label_27762c:
    // 0x27762c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27762cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x277630: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x277630u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x277634: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x277634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x277638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277638u;
        // 0x27763c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277638) {
            ctx->pc = 0x277648u;
            goto label_277648;
        }
    }
    ctx->pc = 0x277640u;
    // 0x277640: 0xc07ec28  jal         func_1FB0A0
    ctx->pc = 0x277640u;
    SET_GPR_U32(ctx, 31, 0x277648u);
    ctx->pc = 0x1FB0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0A0u, 0x277640u, 0x277648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277648u;
label_277648:
    // 0x277648: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x277648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27764c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277650: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x277650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277654: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x277654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x277658: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x277658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x27765c: 0xc09dd70  jal         func_2775C0
    ctx->pc = 0x27765Cu;
    SET_GPR_U32(ctx, 31, 0x277664u);
    ctx->pc = 0x277660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27765Cu;
    // 0x277660: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2775C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2775C0u, 0x27765Cu, 0x277664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277664u;
label_277664:
    // 0x277664: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x277664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27766c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x277670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x277674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x277678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27767c: 0x3e00008  jr          $ra
    ctx->pc = 0x27767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27767Cu;
        // 0x277680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277684u;
    // 0x277684: 0x0  nop
    ctx->pc = 0x277684u;
    // NOP
    ctx->pc = 0x277688u;
}
